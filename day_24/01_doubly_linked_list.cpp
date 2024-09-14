#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        //constructor
        Node(int value){
            this->data = value;
            this->prev = NULL;
            this->next = NULL;
        }
};

void insertAtHead(int value, Node* &head, Node* &tail){
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}

void printReverse(Node* tail){
    Node* temp = tail;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->prev;
    }cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(5,head,tail);
    print(head);
    insertAtHead(10,head,tail);
    print(head);
    insertAtHead(15,head,tail);
    print(head);
    insertAtHead(20,head,tail);
    print(head);
    printReverse(tail);
}