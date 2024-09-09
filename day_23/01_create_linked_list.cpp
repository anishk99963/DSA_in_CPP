#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        //constructor
        Node(int value){
            this->data = value;
            this->next = NULL;
        }
};

Node* insertAtHead(int value, Node* &head, Node* &tail){
    
    if(head == NULL && tail == NULL){
        //step 1: create a new node
        Node* newNode = new Node(value);
        //step 2: head ko node pr lagado
        head = newNode;
        //step 3: tail ko newNode per lagado
        tail = newNode;
    }
    else{
        //step 1: create a new node
        Node* newNode = new Node(value);
        //step 2: head ko node to head node
        newNode->next = head;
        //step 3: hread update kardo
        head = newNode;
    }
    return head;
}

Node* insertAtTail(int value, Node* &head, Node* &tail){
    
    if(head == NULL && tail == NULL){
        //step 1: create a new node
        Node* newNode = new Node(value);
        //step 2: head ko node pr lagado
        head = newNode;
        //step 3: tail ko newNode per lagado
        tail = newNode;
    }
    else{
        //step 1: create a new node
        Node* newNode = new Node(value);
        //step 2: connect tail to next node
        tail->next = newNode;
        //step 3: hread update kardo
        tail = newNode; 
    }
    return head;
}

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}

int getLen(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        temp = temp->next;
        len++;    
    }
    return len;
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail){
    int length = getLen(head);

    if(position == 1){
        head = insertAtHead(value, head, tail);
    }
    else if(position == length + 1){
        insertAtTail(value, head, tail);
    }
    else {
        Node* temp = head;
        for(int i=0; i<position-2; i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    head = insertAtHead(10, head, tail);
    print(head);
    head = insertAtHead(20, head, tail);
    print(head);
    head = insertAtHead(30, head, tail);
    print(head);
    head = insertAtHead(40, head, tail);
    print(head);

    head = insertAtTail(101, head, tail);
    print(head);
    head = insertAtTail(102, head, tail);
    print(head);
    head = insertAtTail(103, head, tail);
    print(head);
    head = insertAtTail(104, head, tail);
    print(head);

    insertAtPosition(1,1002,head,tail);
    print(head);
    insertAtPosition(3,1005,head,tail);
    print(head);
    

    

    // Node* first = new Node(10);
    // return 0;
}