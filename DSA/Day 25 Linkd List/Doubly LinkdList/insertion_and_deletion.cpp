#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev; // prev pointer
    Node* next; // next pointer

    //Constructure
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int getLen(Node* head){
    int cnt = 0;
    while(head != NULL){
        cnt++;
        head = head->next;
    }

    return cnt;
}

/*
TO INSERTING AT HEAD
we just wanna do this

NULL <- [* | 10 | *] -> NULL

create a new node to insert [* | 5 | *]

NULL <- [* | 5 | *] -> <- [* | 10 | *] -> NULL

in second step point to head with temp and point to temp with head and make temp head

*/

void insertAtHead(Node* &head, int d){

    if(head == NULL){cout << "List is Empty!\n"; return;}

    Node *temp = new Node(d); // creating Node
    temp->next = head; // pointing to Head
    head->prev = temp; // pointing to Tail

    head = temp; // making temp to head
}


void insertAtTail(Node* &tail, int d){
    if(tail == NULL){cout << "List is Empty!\n"; return;}
    Node *temp = new Node(d);
    temp->prev = tail;
    tail -> next = temp;

    tail = temp;
}

void insertAt(Node* &head, int d, int position){
    if(head == NULL){cout << "List is Empty!\n"; return;}
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    if(position == getLen(head)){
        // insertAtTail(tail, )
        Node *tail = head;
        while(tail->next !=NULL){
            tail = tail->next;
        }

        insertAtTail(tail, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    Node* NodeToInsert = new Node(d);

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    NodeToInsert->next = temp->next;
    NodeToInsert->prev = temp;
    temp -> next -> prev = NodeToInsert;
    temp -> next = NodeToInsert;
    
}

void deleteNode(Node* &head, int position, Node* &tail){
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;

        delete temp;
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position){
        temp = temp->next;
        cnt++;
    }

    if(temp == NULL){
        cout << "Memory Out Of Block reduce parameter position\n";
        return;
    }

    if(temp->next == NULL){
        // cout << temp -> prev -> next -> data << endl;
        temp->prev->next = NULL;
        tail = temp->prev;
        delete temp;
        return; // Very Important to get rid from sigmentation Fault :)
    }

    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    delete temp;

}

int main(){
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    
    //Nexts
    n1->next = n2;
    n2->next =  n3;
    n3->next = n4;

    //prevs
    n2->prev = n1;
    n3->prev = n2;
    n4->prev = n3;


    //declaring Head & tails
    Node* Head = n1;
    Node* Tail = n4;
    print(Head);
    insertAtHead(Head, 1);
    print(Head);
    // cout << Head->data << endl; // this will represent 1

    insertAtTail(Tail, 50);
    print(Head);

    insertAt(Head, 100, 5);
    print(Head);
    cout << "Head: " << Head -> data<< endl;

    deleteNode(Head, 1, Tail);
    print(Head);
    cout << "Head: " << Head -> data<< endl;
    deleteNode(Head, 2, Tail);
    print(Head);

    deleteNode(Head, 5, Tail);
    print(Head);
    return 0;
}