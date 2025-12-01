#include "Spirit.h"

// Construtor da classe Spirit

Spirit::Spirit(int h, int s, int i, int sp, string n, string bt){

    hp = h;
    strength = s;
    intelligence = i;
    speed = sp;
    nature = n;
    bodyType = bt;
}

// Metodos get

int Spirit::getHp(){
    return hp;
}
int Spirit::getStrength(){
    return strength;
}
int Spirit::getIntelligence(){
    return intelligence;
}
int Spirit::getSpeed(){
    return speed;
}
string Spirit::getNature(){
    return nature;
}
string Spirit::getBodyType(){
    return bodyType;   
}

 //Metodos set

void Spirit::setHp(int h){
    hp = h;
 }
void Spirit::setStrength(int s){
    strength = s;
}
void Spirit::setIntelligence(int i){
    intelligence = i;
}
void Spirit::setSpeed(int sp){
    speed = sp;
}
void Spirit::setNature(string n){
    nature = n;
}
void Spirit::setBodyType(string bt){
    bodyType = bt;
}

