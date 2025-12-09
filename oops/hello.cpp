#include<iostream>

using namespace std;

// Gun class
class Gun{
    public:
    int ammo;
    int scope;
    int damage;
};

class Player{
    private:
    int score;
    int hp;
    int age;
    public:
    bool alive;
    Gun gun;

    void setAge(int age){
        this->age = age;
    }
    void setHp(int hp){
        this->hp = hp;
    }
    void setScore(int score){
        this->score = score;
    }
    void SetAlive(int alive){
        this->alive = alive;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int getHp(){
        return hp;
    }
    int getAlive(){
        return alive;
    }
    Gun getGun(){
        return gun;
    }
};

int playeScoreAdder(Player a ,Player b){
    return a.getScore() + b.getScore();
}

int main(){
    Gun awm;
    awm.ammo = 12;
    awm.damage = 200;
    awm.scope = 2;


    Player Prajjwal;
    Prajjwal.setAge(23);
    Prajjwal.setScore(45);
    Prajjwal.setHp(300);
    Prajjwal.setGun(awm);
    
    Gun g = Prajjwal.getGun();
    cout<<Prajjwal.getHp()<<endl;
    cout<<Prajjwal.getScore()<<endl;
    cout<<Prajjwal.getAge()<<endl;
    cout<<g.ammo<<endl;
    cout<<g.damage<<endl;
    cout<<g.scope<<endl;
    



    Player Dhruv;
    Dhruv.setAge(22);
    Dhruv.setScore(36);
    Dhruv.setHp(200);

    cout<<playeScoreAdder(Prajjwal,Dhruv)<<endl;
    

}