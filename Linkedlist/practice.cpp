#include<iostream>

using namespace std;

class Node {
    public:
    int val;
    Node* next;
    // Node Creation step
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

// class Linkedlist{
//     public:

// }
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // node linking step
    a.next=&b;
    b.next=&c;
    c.next=&d;
    
    cout<<a.next->next->next->val<<endl;
    Node* temp = &a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}