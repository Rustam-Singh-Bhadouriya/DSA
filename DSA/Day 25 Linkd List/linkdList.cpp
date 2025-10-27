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

int main(){

    cout << "Hello LinkdList" << endl;
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    // declaring there next pointer
    n1->next = n2;
    n2->next = n3;
    // n3->next = NULL; no need of last NULL cuz this is predefine

    Node *Head = n1;
    while (Head->next != NULL){
        cout << Head->data << " -> ";
        Head = Head->next;
    }
    // cuz it will stop on n3 and its data will not be print
   cout << Head->data <<  " -> NULL" << endl;
    return 0;
}