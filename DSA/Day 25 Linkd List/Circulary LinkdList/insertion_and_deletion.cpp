// #include <iostream>
#include "iostream" // second way to include :) 
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void print(Node* Tail){
    Node* temp = Tail;
    while (true){
        cout << temp -> next -> data << " ";
        temp = temp -> next;

        if(temp  == Tail){ // stop point with Node* type pointers 
            break;
        }
    }
    cout << endl;
}


/*
inserting in criculary LL is much easy we just need Tail and Head and create a new node
and after this we need to point curr head's next Node by our new node and make pointed by tail Node
and Make new Node Head
*/
void insertAtHead(Node* &Head, Node* &Tail, int data){

    if(Tail == NULL){cout << "Empty List!\n"; return;}

    Node* newHead = new Node(data); // Creating new Head Node
    newHead->next = Head; // making its next to heads second Node
    Tail->next = newHead; // pointing tell to this
    Head = newHead; // making it head

}
/*
We Just need to create a node for it and point to new Node by curr Tail Node and point to Head by newTail Node;
this easiest then ever to insert At Tail
*/
void insertAtTail(Node* &Head, Node* &Tail, int data){
    Node* newTail = new Node(data);
    Tail->next = newTail;
    newTail->next = Head;
    Tail = newTail;
}

/*
inserting in middle is copy same as singly insertion list for read go to insertion.cpp at linkdlist main folder not in sub*
*/
void insertAt(Node* &Head, Node* &Tail, int position, int data){
    Node *newNode = new Node(data);
    Node* temp = Head;
    int cnt = 1;

    while(cnt < position-1){
        cnt++;
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}




int main()
{   
    // Creating Nodes
    Node *n1 = new Node(10);
    Node *n2 = new Node(70);
    

    // Connecting Them all
    n1->next = n2;

    Node* Head = n1; // Creating Head
    Node* Tail = n2; // creating Tail

    Tail->next = Head; // creating a circle 

    print(Tail);

    insertAtHead(Head, Tail, 5);
    print(Tail);

    cout << "Yo new thing\n";
    cout << " Head = " << Head -> data<< endl;

    insertAtTail(Head, Tail , 15);
    print(Tail);

    cout << " Tail = " << Tail -> data << endl;

    insertAt(Head, Tail, 2, 12);
    print(Tail);
    return 0;
}
