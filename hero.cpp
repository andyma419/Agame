#include "hero.h"


Hero::Hero(){
             hero_pos = 0;
             run_pos = 0;
             nor_att_pos = 0;
             walk_pos = 0;
             kick_pos = 0;
             walk_speed = 4;
             max_run_speed = 14;
             acc = walk_speed;
             x = 50;
             y = 200;
             is_walk = false;
             is_run = false;
             is_stand = true;
             is_attack = false;
             is_kick = false;
             is_new_kick = false;
             is_new_nor_att = true;
             is_defence =false;
             is_attacked = false;
             layer_num = 0;
             health=100;
             allow_next_move = true;
          
}

Hero::~Hero(){}


void Hero::getPictureCoord(Point a, Point b){
     pt_start.x =  a.x;
     pt_start.y =  a.y;
     pt_end.x = b.x;
     pt_end.y = b.y;
}

void Hero::nextRunPos(){
     nor_att_pos = 0;
     is_run = true;
     if(run_pos==8) run_pos = 1;
     else run_pos++;
}

void Hero::nextWalkPos(){
     nor_att_pos = 0;
     is_walk = true;
     if(walk_pos==8) walk_pos = 1;
     else walk_pos++;
}

void Hero::nextNormAttackPos(){
     
     if(is_new_nor_att){
       is_attack = true;
       nor_att_pos++;
       if(nor_att_pos==5) 
       is_new_nor_att = false;}            
     
     else {
       is_attack = false;   
       standPos();
     }  
}     

void Hero::nextKickPos(){
    if(is_new_kick){
      is_kick = true;
      kick_pos++;
      if(kick_pos==5)
      is_new_kick = false;}
      else {is_kick = false;
         standPos();}
         
}


void Hero::defencePos(){
  is_defence =true;
  nor_att_pos=0;     
     
}

void Hero::isAttackedPos(){  
  is_attacked = true;     
}



void Hero::standPos(){
     hero_pos = 0;
     run_pos = 0;
     walk_pos = 0;
     nor_att_pos = 0;
     kick_pos = 0;
}



int Hero::getHeroPos(){
    int pos;
    if (is_attacked==true) pos = 28;
    else if(is_run==true) {hero_pos=8; pos=hero_pos+run_pos;}
    else if(is_walk==true) {hero_pos=0; pos=hero_pos+walk_pos;}
    else if(is_defence==true) pos = 22;
    else if(is_attack==true) {hero_pos=16;pos=hero_pos+nor_att_pos;}
    else if(is_kick==true) {hero_pos=22;pos=hero_pos+kick_pos;}
    else pos=0;
    return pos;
}

void Hero::posClear(){
  is_run = false;
  is_walk = false;
  is_attack = false;    
  is_defence = false; 
  is_kick = false;
}

    
void Hero::speedUp(){
 if(acc<max_run_speed) acc++;     
}        

void Hero::speedDown(){
 if(acc>walk_speed) acc--;    
}

void Hero::checkCollision(){
  if(y>280)y=280;
  if(y<170)y=170; 
}    

void Hero::runLeft(){
     speedUp();                                     
     x=x-acc;             
     nextRunPos();   
}

void Hero::runRight(){
     speedUp();
     x=x+acc;
     nextRunPos();     
}

void Hero::walkTo(Point dst){
 if(dst.x<x_old){
   is_to_left = true;
   x = x -  8;
   nextWalkPos();
   if(x<dst.x) x = dst.x;
 }
 else if(dst.x>x_old){
   is_to_left = false;
   x = x + 8;
   if(x>dst.x) x = dst.x; 
   nextWalkPos();
  }
 else {
 standPos();}  
 }



    
