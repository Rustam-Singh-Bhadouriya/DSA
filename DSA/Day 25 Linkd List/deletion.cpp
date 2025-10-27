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


void DeleteHead(Node* &head){
    Node *temp = head;
    head = temp->next;
    delete temp;
}

void DeleteTail(Node* &head,Node* &Tail){
    Node* temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }

    temp->next = NULL;
    delete Tail;
    Tail = temp;
}

/*
10 * -> 20 * -> 30 * -> NULL
*/
void DeleteAt(Node* &head, int position){
    Node* Curr = head;
    int cnt = 1;

    while(cnt < position - 1){
        cnt++;
        Curr = Curr->next;
    }

    if(Curr == NULL || Curr->next == NULL) return;
    Node *temp = Curr->next;
    Curr -> next = Curr->next->next;

    delete temp;
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

    print(Head);
    // DeleteHead(Head);
    // print(Head);
    // DeleteTail(Head, Tail);
    // print(Head);
    DeleteAt(Head, 2);
    print(Head);
    return 0;
}   