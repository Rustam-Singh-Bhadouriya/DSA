#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }


};

/*
To Delete a Node there are two ways
1) Delete at Position (mean index can be)
2) Delete with value (if value matchs then delete this node)
*/


int len(Node *head){
    Node *temp = head;
    int cnt = 0;

    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

/*
TO DELETE A NODE 
this is esiest step then ever
assume this is a LL
[10 | *] -> [12 | *] -> [14 | *]

if we wanna remove 2nd node
we can just point to 3rd node from head node
as
[10 | *] -> [14 | *] 
and so it is removed
*/

void deleteAt(Node* &head, int position){
    Node *temp = head;
    int cnt = 1;

    while(cnt <= position-1){
        cnt++;
        temp = temp->next;
    }
    
    *temp->next = *temp->next->next;
    // free(temp);
    
}


void deleteTail(Node* &head, Node * &Tail){
    if(head == NULL){
        cout << "Nothing In List" << endl;
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        Tail = NULL;
    }
    Node *temp = head;


    while(temp->next->next != NULL){
        temp = temp->next;
    }
    
    temp->next = NULL;
    delete Tail;
    Tail = temp;

}

void deleteHead(Node* &head){
    Node *temp = head;
    head = head->next;
    // free(head);

    delete temp;

}

void print(Node *head){
    Node *CurrNode = head;
    while(CurrNode != NULL){
        cout << CurrNode->data << " ";
        CurrNode = CurrNode->next;
    }
    cout << endl;
}

int main(){
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);

    n1->next = n2;
    n2->next = n3;

    Node *head = n1; // Declaring Head
    Node *tail = n3; // Declaring Tails
    cout << len(head) << endl; // len function for our Linkd List
    print(head);
    deleteHead(head);
    print(head);
    deleteTail(head,tail);
    print(head);
    return 0;
}