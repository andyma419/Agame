#include "scene.h"

Scene::Scene(){
  scene_num = 1;
                                
}

Scene::~Scene(){
}

void Scene::chooseScene(Hero& hero){
  if(hero.y>280) hero.y=280;
  if(hero.y<170) hero.y=170; 
  if(hero.x>1080) {
    if(scene_num==1){scene_num = 2; hero.x=50;}
    else if(scene_num==2)hero.x=1080;
  }
  else if(hero.x<20){
    if(scene_num==2){scene_num = 1; hero.x=1050;}
    else if(scene_num==1)hero.x=20;
  }            
}

bool Scene::checkCollision(Hero& hero){
     if(hero.y>280||hero.y<170) return  true;
     else return false;    
}

bool Scene::checkCollision(Hero& hero1, Hero& hero2){
     int y_off_pos = fabs(hero1.y-hero2.y);
     if((hero1.x>=(hero2.x-20))&&hero1.x<=(hero2.x+30)&&y_off_pos<=10) 
     return true;
     else return false;
}

bool Scene::checkCollision(Hero& hero, Bullet& bullet){
     int y_off_pos = bullet.bullet_pos.y - hero.y;
     int x_off_pos = bullet.bullet_pos.x - hero.x;
     if(bullet.is_to_left&&x_off_pos>=-30&&x_off_pos<=35&&y_off_pos>=0&&y_off_pos<=40)return true;
     if(!bullet.is_to_left&&x_off_pos<=-30&&x_off_pos>=-70&&y_off_pos>=0&&y_off_pos<=40)return true;
     
     //else return false;     
     return false;
}










