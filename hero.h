#ifndef HERO_H
#define HERO_H

#include "math_aid.h"


class Hero{
  public:
    Hero();
    ~Hero();
    void getPictureCoord(Point a,Point b);
    int getHeroPos();
    void nextWalkPos();
    
    void standPos();
    void speedUp();
    void speedDown();
    void checkCollision();
    void runLeft();
    void runRight();
    void nextNormAttackPos();
    void defencePos();
    void posClear();
    Point pt_start;
    Point pt_end;
    int acc;   
    int x;
    int y;
    int x_old;
    int y_old;
    int walk_speed;
     bool is_new_nor_att;  
     int layer_num;
     int health;
     bool is_attack;
     bool is_defence;
     bool is_block;
     bool is_to_left;
  
  private:  
    void nextRunPos();  
    int run_pos;
    int hero_pos;
    int nor_att_pos;
    int walk_pos;
    int max_run_speed;
    bool is_run;
    bool is_walk;
    bool is_stand;  
    
};








#endif
