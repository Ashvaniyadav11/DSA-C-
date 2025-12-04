#include<iostream>
using namespace std;
class Student{
    char name[20];
    int roll;
    int age;
    int mob;
    char address[50];

};
// book class
class Book{
    // private:
    char name;
    int price;
    int number_of_pages;
    
    int countBooks(int p){
        cout<<"Count boook ko call kiya ja rha hai";
        if(price <p){
            return 1;

        }else{
            return 0
        }
    }
    bool Isbookpresent(char book){
        if(name == book){
            return true;
        }else{
            return false;
        }

    }
};

class Player{
    private:
    int score; 
    
    int health;  //data members
     public:
     void set_health(int h){
        cout<<"Health change ki ja rhi hai"<<endl;
        health = h;
     }
     void set_score(int s){
        cout<<"Score change ki ja rhi hai"<<endl;

        score = s;
 
     }
     int getscore(){
        return score;
     }
     int getheath(){
        return health;
     }
    void healthshow(){  // member function
        cout<<"health is "<<health<<endl;
    }
   
};

int main(){
Player amit;   //object

amit.set_health(90);
amit.set_score(290);
// amit.score = 90;
// amit.health = 100;
// amit.healthshow();
//amit.name = "Ashvai Yadav"



cout<<amit.getscore()<<endl;
cout<<amit.getheath()<<endl;

// Player harsh;
// harsh.health = 67;
// harsh.score = 90;

// cout<<harsh.score<<endl;
// cout<<harsh.health<<endl;

// 

Book harrypotter;

harrypotter.name = 'H';
harrypotter.price = 3500;
harrypotter.number_of_pages = 2590;

cout<<harrypotter.countBooks(3600);
cout<<harrypotter.Isbookpresent('H');












}