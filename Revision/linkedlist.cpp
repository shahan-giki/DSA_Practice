#include<iostream>
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

void insertAtHead(Node* &head, int d){
    Node* newNode = new Node(d);
    newNode->next= head;
    head = newNode;

}

void insertAtTail(Node* &tail, int d){
    Node* newNode = new Node(d);
    tail->next= newNode;
    tail=newNode;
}


void insertAtPosition(Node* &head,int pos, int d){
    Node* temp = head;
    int count= 1;
    while(count=pos-1){
        temp=temp->next;
        count++;
    }
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data << "->";
        temp= temp->next;
    }
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(10);
    Node* head = Node1;
    Node* tail = Node1;

    insertAtHead(head,20);
    insertAtHead(head,30);
    print(head);

    cout<<endl<<endl;


    insertAtTail(tail,20);
    insertAtTail(tail,30);
    print(head);
    return 0;
}
