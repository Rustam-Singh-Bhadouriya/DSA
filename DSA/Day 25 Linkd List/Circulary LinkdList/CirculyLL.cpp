#include <iostream>
using namespace std;

/*
WHAT IS CURCULARY LINKD LIST?
when a singly LL creates that point to NULL at end but in Circulary LL its last Node points to Head Node again
Tail = Head can be

*/


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

        // if(temp -> data == Tail -> data) break; with this if any duplicate exits then it will not print all Nodes Data!
        if(temp  == Tail){ // stop point with Node* type pointers 
            break;
        }
    }
    cout << endl;
}

int main()
{   
    // Creating Nodes
    Node *n1 = new Node(10);
    Node *n2 = new Node(10);
    

    // Connecting Them all
    n1->next = n2;

    Node* Head = n1; // Creating Head
    Node* Tail = n2; // creating Tail

    Tail->next = Head; // creating a circle 

    // for printing them is very diffrent way cuz there's no any NULL :D hehe
    print(Tail);
    return 0;
}