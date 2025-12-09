#include<iostream>
using namespace std;

class Gun{
public:
    int ammo;
    int scope;
    int damage;
};

class Helmet {          // corrected spelling
private:
    int hp;
    int level;
public:
    void setHp(int hp){
        this->hp = hp;
    }
    void setLevel(int level){
        this->level = level;
    }
    int getHp(){
        return hp;
    }
    int getLevel(){
        return level;
    }
};

class Player{
private:
    int health;
    int score;
    int age;

public:
    bool alive;
    Gun gun;
    Helmet helmet;

    int get_health(){ return health; }
    int get_score(){ return score; }
    int get_age(){ return age; }
    bool get_Alive(){ return alive; }
    Gun getgun(){ return gun; }

    void set_health(int health){ this->health = health; }
    void set_score(int score){ this->score = score; }
    void set_age(int age){ this->age = age; }
    void set_Alive(bool alive){ this->alive = alive; }
    void setgun(Gun gun){ this->gun = gun; }

    void setHelmet(int level){
        Helmet h;
        h.setLevel(level);

        int health = 0;
        if(level == 1) health = 25;
        else if(level == 2) health = 50;
        else if(level == 3) health = 100;
        else cout<<"Invalid helmet level\n";

        h.setHp(health);
        this->helmet = h;
    }
    int getHelmet(){
        return helmet;
    }
};

int add(Player a , Player b){
    return a.get_score() + b.get_score();
}

Player getMaxscorePlayer(Player a,Player b){
    return (a.get_score() > b.get_score()) ? a : b;
}

int main(){

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    Gun awm;
    awm.scope = 150;
    awm.ammo = 13;
    awm.damage = 300;

    Player harsh;
    harsh.set_age(19);
    harsh.set_health(34);
    harsh.set_score(340);
    harsh.set_Alive(true);
    harsh.setgun(akm);
    harsh.setHelmet(2);

    Gun gun123 = harsh.getgun();
    cout<<gun123.damage<<endl;
    cout<<gun123.ammo<<endl;
    cout<<gun123.scope<<endl;

    Helmet helmet123 = = harsh.getHelmet();
    cout<<helmet123.getHp()<<end;

    Player ragah;
    ragah.set_age(45);
    ragah.set_health(55);
    ragah.set_Alive(true);
    ragah.set_score(456);
    ragah.setgun(awm);
    ragah.setHelmet(3);

    Player* urfi = new Player;
    Player urffiObject = *urfi;
    urffiObject.set_score(345);
    urffiObject.set_health(56);

    cout<<urffiObject.get_score()<<endl;
    cout<<urffiObject.get_health()<<endl;

    cout<<add(harsh,ragah)<<endl;

    Player sanket = getMaxscorePlayer(harsh,ragah);
    cout<<sanket.get_score()<<endl;
    cout<<sanket.get_health()<<endl;

    return 0;
}
