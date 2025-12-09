#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Linkedlist {
    public:
    Node* head;
    Node* tail;
    int size;

public:
    Linkedlist() {   // constructor
        
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val) {
        Node* temp = new Node(val);

        if(size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;        // FIXED
        }
        size++;
    }
    void insertAthead(int val) {
        Node* temp = new Node(val);

        if(size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head = temp;        // FIXED
        }
        size++;
    }
    void insertAtindex(int idx,int val) {
        Node* temp = new Node(val);
        if(idx<0 || idx>size ) cout<<"Invalid index"<<endl;
        else if(idx == 0) insertAthead(val);
        else if (idx == size) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for (int i = 1; i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getatIdx(int idx){
        if(idx<0 || idx >= size){
            cout<<"Invlid index"<<endl;
            return -1;
        }
        else if(idx == 0) return head->val;
        else if(idx == size - 1) return tail->val;
        else{
            Node* temp = head;
            for(int i = 1; i<= idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAthead(){
        if(size== 0){
            cout<<"list is epty"<<endl;
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size== 0){
            cout<<"list is epty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(size ==0){
            cout<<"List is Empty"<<endl;
            return;
        }
        else if(idx <0 || idx>= size){
            cout<<"Invalid "<<endl;
            return;
        }else if(idx==0)  return deleteAthead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp = head;
             for (int i = 1; i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }

        
    }

    void display() {
        Node* temp = head;     // FIXED
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);

    ll.display();
    cout<<ll.size<<endl;
    ll.insertAthead(23);
    ll.display();
    ll.insertAtindex(2,80);
    ll.display();
    cout<<ll.getatIdx(-3);
    ll.deleteAthead();
    cout<<endl;
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(1);
    ll.display();


    
}
