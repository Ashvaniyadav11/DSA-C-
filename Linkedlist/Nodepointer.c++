#include<iostream>

using namespace std;

class Node{                 //Linked list node
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};  
void Display(Node* head){
    Node* temp = head;
     while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp = head;
    int n = 0;
     while(temp != NULL){
        n++;
        temp = temp->next;
    }
    return n;
}
void reverseDisplay(Node* head){
    if(head == NULL) return;
    reverseDisplay(head->next);
    cout<<head->val<<" ";
    
}
void  displayrec(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
void insertAtEnd(Node* head ,int val){
    Node* t = new Node(val);
    while(head->next != NULL) head = head->next;
    head->next = t;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Display(a);
    int web = size(a);
    cout<<web<<endl;
    displayrec(a);
    cout<<endl;
    reverseDisplay(a);
    insertAtEnd(a,89);
    Display(a);
    
} 
   
   
   
  
 