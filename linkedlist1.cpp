#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //Destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node data"<<endl;
    }
};

void InserAtHead(Node* &head, int d){
    //new node create at Head
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    //new node create at Tail
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtposition(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        InserAtHead(head,d);
        return;
    }
    Node * temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp-> next;
        count++;
    }
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }
    //create nodeTo Insert
    Node* nodeToinsert = new Node(d);

    nodeToinsert -> next = temp -> next;
    
    temp -> next = nodeToinsert;
}
void printLIST(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void deleteNode(int position,Node* &head){
    if(position == 1)//for deleting the first Node
    {
        Node* temp = head;
        head = head -> next;
        //memory free node
        temp -> next = NULL;
        delete temp;
    }
    else{//delete other node with last Node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr -> next;
            count++;
            /* code */
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    //created new node
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl<<endl;
    
    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    printLIST(head);
    InserAtHead(head,12);
    printLIST(head);
    
    insertAtTail(tail,20);
    printLIST(head);
    
    InserAtHead(head,15);
    printLIST(head);
    
    insertAtposition(tail,head,1,22);
    printLIST(head);
    
    insertAtposition(tail,head,6,28);
    printLIST(head);
    deleteNode(4,head);
    printLIST(head);
    return 0;
}

