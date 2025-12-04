#include<iostream>
using namespace std;

int main(){
    // int x =4;
    // int y = 45;
    // int* p1 = &x;
    // int* p2 = &y;

    // cout<<*p1 + *p2<<endl;

    int x =4;
    int y = 45;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"enter first Number : "<<endl;
    cin>>*p1;
    cout<<"enter second Number : "<<endl;
    cin>>*p2;
    cout<<x + y;
    
}