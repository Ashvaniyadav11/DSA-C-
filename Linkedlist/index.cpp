#include<iostream>

using namespace std;

class Student{
    public:
    string name;
    int rno;
    float per;

    Student(string name,int rno , float per){
        this->name = name;
        this->rno = rno;
        this->per = per;

    }
};
void change(Student &s){
    s->name = "Harsh";
}
int main(){
    Student s("Ashvani",23,9.67);
    cout<<s.name<<endl;

    Student* ptr = &s;
    ptr->name = "Harsh";
    cout<<s.name<<endl;
}
