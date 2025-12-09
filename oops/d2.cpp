#include<iostream>

using namespace std;

class Gun{
    public:
    int ammo;
    int scope;
    int damage;
};

class Player{
    private:
    int health;
    int score;
    int age;
    public:
    bool alive;
    Gun gun;
    Hemlet helmet;
    class Hemlet{
        int hp;
        int level;
      
    public:
    void setHp(int hp){
        this->hp=hp;
    
    }
    void setlevel(int level){
        this->level = level;
    }
    int gethp(){
        return hp;
    }
    int getLevel(){
        return level;
    }
    };
    int get_health(){
        return health;
    }
    int get_score(){
        return score;
    }
    int get_age(){
        return age;
    }
    int get_Alive(){
        return alive;
    
    }
    Gun getgun(){
        return gun;
    }
    void set_health(int health){
        this->health = health;


        //Player::health = health;
        //Player wala health hai 
    }
    void set_score(int score){
        this->score = score;
    }
    void set_age(int age){
        this->age = age;
    }
    void set_Alive(bool alive){
        this->alive = alive;
    }
    void setgun(Gun gun){
        this->gun = gun;
    }

    void sethelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setlevel(level);
        int health = 0;
        if(level == 1){
            health = 25;
        }
        else if(level == 2){
            health = 50;
        }
        else if(level == 3){
            health = 100;
        }
        else{
            cout<<"error is invalid level"<<endl;
        }
        helmet->setHp(health);
        this->helmet = *helmet;
    }
};

int add(Player a , Player b){
    return a.get_score() + b.get_score();
}
Player getMaxscorePlayer(Player a,Player b){
    if(a.get_score() > b.get_score()){
        return a;
    }else {
        return b;
    }
}

int main(){
Player harsh;   // object creation statically
harsh.set_age(19);
harsh.set_health(34);
harsh.set_score(340);
harsh.set_Alive(true);
harsh.setgun(akm);
harsh.sethelmet(2);
Gun gun123 = harsh.getgun();
cout<<gun123.damage<<endl;
cout<<gun123.ammo<<endl;
cout<<gun123.scope<<endl;




Player ragah; //static allocation

ragah.set_age(45);
ragah.set_health(55);
ragah.set_Alive(true);
ragah.set_score(456);
ragah.setgun(awm);
ragah.sethelmet(3);
Player* urfi = new Player;   // Dyanimic allocation   esko *urfi bhi set sub kuch kr sakte hai

Player urffiObject = *urfi;
urffiObject.set_score(345);
urffiObject.set_health(56);

cout<<urffiObject.get_score()<<endl;
cout<<urffiObject.get_health()<<endl;



cout<<add(harsh,ragah)<<endl;
Player sanket = getMaxscorePlayer(harsh,ragah);

cout<<sanket.get_score()<<endl;
cout<<sanket.get_health()<<endl;


Gun akm;
akm.ammo = 100;
akm.damage = 50;
akm.scope = 2;

Gun awm;
awn.scope=150;
awm.ammo = 13;
awm.damage = 300;

}