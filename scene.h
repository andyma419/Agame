#ifndef SCENE_H
#define SCENE_H

#include "hero.h"
#include "bullet.h"

class Scene{
  public:
    Scene();
    ~Scene();
    void chooseScene(Hero& hero);
    
    //check collision with the scene   
    bool checkCollision(Hero& hero);
    
    //check collision with  another hero
    bool checkCollision(Hero& hero1,Hero& hero2);
    
    //check collision with bullet
    bool checkCollision(Hero& hero,Bullet& bullet);
    int scene_num;
    
    
    
    
           
};

#endif
