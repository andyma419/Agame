#ifndef BULLET_H
#define BULLET_H
#include "math_aid.h"

class Bullet{
  public:
    Bullet();
    ~Bullet();
    int x;
    int y;
    Point bullet_pos;
    bool life;
    int counter;
    bool is_to_left;
    int layer_num;

    
};

#endif
