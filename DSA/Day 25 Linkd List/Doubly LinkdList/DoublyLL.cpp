#include <iostream>
using namespace std;

/*

WHAT IS DOUBLY LINKDLIST?
this is just nothing but a extra block to our previous Linkd List
as we know in singly LL there is only a data and pointer which points to next node

and in doubly LL a extra block which points to previous Node
as this

NULL <- [* | 10 | *] -> <- [* | 20 | *] -> NULL

we can see that Node one first pointer is pointing to NULL this is Head and after it second node first pointers is also
pointing to Node 1 and as they points to each other!

*/

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

    //printing
    print(Head); // output = 10, 20, 30, 40
    cout << getLen(Head) << endl;
    return 0;
}