#include <iostream>
using namespace std;


class Node{
    public:
        int data;
        Node *next;
    // we can write a constructure here to directly do Node n1 = new Node(<value>)   
    Node(int data) {
        this->data = data;
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

void insertAtHead(Node* &head, int data){
    /*
    
    HOW TO INSERT A NEW NODE TO HEAD?
    this is very easy let assume there's a linkdlist
    [10 | *] -> [20 | *] -> NULL
    to insert at home we just need to make a node
    [1 | *]
    and point it pointer to current node
    like this

    [1 | *] -> [10 | *] -> [20 | *] -> NULL
    and make new node to head

    lets code
    */

    // creating new head node
    Node *NewHead = new Node(data);
    NewHead->next = head; // pointing to old head
    head = NewHead; // making new node a head
}

void insertAtEnd(Node* &tail, int data){
    /*
    
    HOW TO INSERT AT THE END (AT TAILS)?

    it is also very easy let assume theres a Linkd List

    [1 | *] -> [2 | *] -> NULL
    to insert a node at the end, first we will make a new node like
    [3 | *]
    and now we will point our old Tails to this new tails
    like this
    [1 | *] -> [2 | *] -> [3 | *] -> NULL
    and by defoult this is already NULL there's only two step to do it

    Let's Code

    */

    Node *newTails = new Node(data); // creating new tail node
    tail->next = newTails; // pointing to our new tails with old tails

}

void insertAt(Node* &head, int position, int data){
    /*
    HOW TO INSERT AT 2nd POSITION?
    easy let assume a linklist as always we do
    [10 | *] -> [2 | *]  -> NULL
    we need to insert at position two
    then first we will create a node as always
    [15 | *]

    and now at 2nd position we will place it with pointers
    as this
    [10 | *] -> [15 | *]  -> [2 | *] -> NULL
    mean we will point our latest node with n-1th position node as that
    and our latest node points to old 2nd poistion 
    as up

    code
    */

    /*
    
    TOTAL STEP
    1) create a new node
    2) travel until n-1
    3) point nth node with our latest node
    4) point our latest node with n-1th node
    

    */

    // creating node
    Node *newNode = new Node(data);
    Node *CurrNode = head;
    int cnt = 1;
    // traversing

    while(cnt < position -1){
        CurrNode = CurrNode->next;
        cnt++;
    }

        // points to old nth node
    newNode->next = CurrNode->next;

    // point to our latest node
    CurrNode->next = newNode;

}

int main(){

    cout << "Hello LinkdList" << endl;
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    // declaring there next pointer
    n1->next = n2;
    n2->next = n3;
    // n3->next = NULL; no need of last NULL cuz this is predefine

    Node *Head = n1;
    Node *Tail = n3;

    // without inserting at head
    print(Head);
    // after inserting
    insertAtHead(Head, 1);
    print(Head);

    // after inserting at end
    insertAtEnd(Tail, 40);
    print(Head);

    // inseting at second position
    insertAt(Head, 2, 2);
    print(Head);
    return 0;
}