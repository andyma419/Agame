#include <allegro.h>
#include "math_aid.h"
#include "hero.h"
#include "scene.h"



int main() 
{	   
   //Hero Position
    Point walk_s_r[23];
    Point walk_e_r[23];
    Point walk_s_l[23];
    Point walk_e_l[23];    
    //stand right
    walk_s_r[0].setPoint(0,0);
    //walk right
    walk_s_r[1].setPoint(120,0);
    walk_s_r[2].setPoint(180,0);
    walk_s_r[3].setPoint(249,0);
    walk_s_r[4].setPoint(315,0);
    walk_s_r[5].setPoint(376,0);
    walk_s_r[6].setPoint(439,0);
    walk_s_r[7].setPoint(505,0);
    walk_s_r[8].setPoint(570,0);
    walk_s_r[9].setPoint(0,85);
    walk_s_r[10].setPoint(83,85);
    walk_s_r[11].setPoint(169,85);
    walk_s_r[12].setPoint(244,85);
    walk_s_r[13].setPoint(313,85);
    walk_s_r[14].setPoint(398,85);
    walk_s_r[15].setPoint(475,85);
    walk_s_r[16].setPoint(547,85);
    walk_s_r[17].setPoint(0,515);
    walk_s_r[18].setPoint(67,515);
    walk_s_r[19].setPoint(132,515);
    walk_s_r[20].setPoint(229,515);
    walk_s_r[21].setPoint(318,515);
    
    //defence right
    walk_s_r[22].setPoint(10,1084);
          
    //stand right  
    walk_e_r[0].setPoint(60,80);
    //walk right
    walk_e_r[1].setPoint(60,80);
    walk_e_r[2].setPoint(70,80);
    walk_e_r[3].setPoint(60,80);       
    walk_e_r[4].setPoint(60,80);
    walk_e_r[5].setPoint(60,80);
    walk_e_r[6].setPoint(65,80);
    walk_e_r[7].setPoint(70,80);
    walk_e_r[8].setPoint(60,80);
    walk_e_r[9].setPoint(70,65);
    walk_e_r[10].setPoint(70,65);
    walk_e_r[11].setPoint(70,65);
    walk_e_r[12].setPoint(70,65);
    walk_e_r[13].setPoint(70,65);
    walk_e_r[14].setPoint(70,65);
    walk_e_r[15].setPoint(70,65);
    walk_e_r[16].setPoint(70,65);
    //normal attack
    walk_e_r[17].setPoint(65,75);
    walk_e_r[18].setPoint(65,75);
    walk_e_r[19].setPoint(90,75);
    walk_e_r[20].setPoint(75,75);
    walk_e_r[21].setPoint(65,75);
    //defence
    walk_e_r[22].setPoint(60,80);     
    //stand left
    walk_s_l[0].setPoint(0,0);   
    //walk left
    walk_s_l[1].setPoint(116,0);
    walk_s_l[2].setPoint(180,0);
    walk_s_l[3].setPoint(243,0);
    walk_s_l[4].setPoint(304,0);
    walk_s_l[5].setPoint(361,0);
    walk_s_l[6].setPoint(431,0);
    walk_s_l[7].setPoint(492,0);
    walk_s_l[8].setPoint(563,0); 
    walk_s_l[9].setPoint(0,85);  
    walk_s_l[10].setPoint(90,85);  
    walk_s_l[11].setPoint(173,85);  
    walk_s_l[12].setPoint(254,85);  
    walk_s_l[13].setPoint(331,85);  
    walk_s_l[14].setPoint(405,85);  
    walk_s_l[15].setPoint(485,85);  
    walk_s_l[16].setPoint(562,85);  
    walk_s_l[17].setPoint(0,515);
    walk_s_l[18].setPoint(52,515);
    walk_s_l[19].setPoint(137,515);
    walk_s_l[20].setPoint(225,515);
    walk_s_l[21].setPoint(329,515);
    //defence
    walk_s_l[22].setPoint(17,1084);
   
    //stand left
    walk_e_l[0].setPoint(60,80);  
    //walk left
    walk_e_l[1].setPoint(60,80);
    walk_e_l[2].setPoint(70,80);
    walk_e_l[3].setPoint(60,80);       
    walk_e_l[4].setPoint(60,80);
    walk_e_l[5].setPoint(60,80);
    walk_e_l[6].setPoint(65,80);
    walk_e_l[7].setPoint(70,80);
    walk_e_l[8].setPoint(60,80);
    walk_e_l[9].setPoint(70,65);
    walk_e_l[10].setPoint(70,65);
    walk_e_l[11].setPoint(70,65);
    walk_e_l[12].setPoint(70,65);
    walk_e_l[13].setPoint(70,65);
    walk_e_l[14].setPoint(70,65);
    walk_e_l[15].setPoint(70,65);
    walk_e_l[16].setPoint(70,65);
       //normal attack
    walk_e_l[17].setPoint(65,75);
    walk_e_l[18].setPoint(65,75);
    walk_e_l[19].setPoint(90,75);
    walk_e_l[20].setPoint(75,75);
    walk_e_l[21].setPoint(65,75);
    walk_e_l[22].setPoint(60,80);
    
   
     
    //enemy
    Point enemy_s_r[5];
    Point enemy_e_r[5];
    Point enemy_s_l[5];
    Point enemy_e_l[5]; 
    //stand
    enemy_s_l[0].setPoint(100,0);
    enemy_e_l[0].setPoint(68,80);
    //enemy_s_r[0]
    //enemy_e_r[0]
    
    
    //bullet
    Point bullet_s_l;
    Point bullet_e_l;
    bullet_s_l.setPoint(700,965);
    bullet_e_l.setPoint(100,35);
    Point bullet_pos;
    bool bullet_life = true;
    int bullet_cnt=0;
    
   
    BITMAP *hero;
    BITMAP *hero_back;
    BITMAP *enemy;
    BITMAP *enemy_back;
    BITMAP *scene; 
    BITMAP *scene2;
    
    Hero my_hero;
    Hero my_enemy;
    Scene my_scene;
    bool is_move =false;  
    my_hero.is_to_left = false;
    my_enemy.is_to_left = true;
    my_enemy.x=500;
    
    
	allegro_init();
	install_keyboard();
    set_color_depth(32);  
    install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL) ;
    SAMPLE *sound_nor_att = load_sample("nor_att.wav");
     if(sound_nor_att==0) allegro_message("sound file error");
    
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1100, 360, 0, 0);
    hero      = load_bitmap("hero.bmp",NULL);
    hero_back = load_bitmap("hero2.bmp",NULL);
    enemy     = load_bitmap("hero3.bmp",NULL);
    enemy_back= load_bitmap("hero3_back.bmp",NULL);
    scene     = load_bitmap("scene.bmp",NULL);
    scene2    = load_bitmap("scene2.bmp",NULL);   
    BITMAP *buffer = NULL;
    buffer = create_bitmap(1100,360);
    int off_set = 0;
    
		
	// start the loop 
	while (!key[KEY_ESC]){
      my_hero.is_block = false;
      my_hero.x_old = my_hero.x;
      my_hero.y_old = my_hero.y;
      my_enemy.x_old = my_enemy.x;
      my_enemy.y_old = my_enemy.y;
      //play_sample(sound_nor_att,255,128,1000,0);
      off_set = 0;
	  clear_keybuf();
	  acquire_screen();
	  my_hero.posClear();
		  
	  
	  /********receive key start**********/  
      if(key[KEY_UP]){
        is_move = true;
        my_hero.y=my_hero.y-4;
        if(!key[KEY_A]) my_hero.nextWalkPos();
      }
       if(key[KEY_DOWN]){
        is_move = true;   
        my_hero.y=my_hero.y+ 4;
        if(!key[KEY_A]) my_hero.nextWalkPos();
      }
       if(key[KEY_LEFT])  {  
                                
           my_hero.is_to_left = true;
           if(key[KEY_A]){  
            my_hero.runLeft();        
      }
           else{
             my_hero.speedDown();
             my_hero.x=my_hero.x-my_hero.acc;   
             if(is_move == false) my_hero.nextWalkPos();          
           }
           is_move = true;
      }
       if(key[KEY_RIGHT]) {
     
           my_hero.is_to_left = false;                 
           if(key[KEY_A]){
             my_hero.runRight();      
           }
           else{
             my_hero.speedDown();  
             my_hero.x=my_hero.x+my_hero.acc;    
             if(is_move == false) my_hero.nextWalkPos();
           }
           is_move = true;
      }
      
      if(!key[KEY_S]) my_hero.is_new_nor_att = true;
       
      //do other actions when no move command is received     
      if(is_move==false) {
        //defence
        
        if (key[KEY_D]){
        my_hero.defencePos();   
        my_hero.is_block = true;                              
        }                                     
        //normal attack                  
        else if(key[KEY_S]){
          my_hero.nextNormAttackPos();
          if(my_hero.getHeroPos()==17) play_sample(sound_nor_att,255,255,1000,0);
        }                 
        else {
          my_hero.standPos();
          my_hero.is_new_nor_att = true;
        }
      }   
      
      /*****receive key end******/
      //my_enemy.y = my_enemy.y + (rand()%14-7);
      //check collision  
      if(my_scene.checkCollision(my_hero)){
        my_hero.y = my_hero.y_old;                                                                       
      }  
      
      if(my_scene.checkCollision(my_enemy)){
        my_enemy.y = my_enemy.y_old;                                    
      }
      
      
      if(my_scene.checkCollision(my_hero,my_enemy)){
        my_hero.x = my_hero.x_old;
        my_hero.y = my_hero.y_old;
      }
      
      
      if(my_hero.x<my_enemy.x) my_enemy.is_to_left = true;
      else my_enemy.is_to_left = false;
      
      
         
      
      // enemy fire bullet
      if(bullet_cnt!=30){
        if(bullet_cnt==0)bullet_pos.y = my_enemy.y + 40;
        bullet_pos.x = (my_enemy.x - 50)-bullet_cnt*20;    
        bullet_cnt++;}
      else {bullet_cnt=0; bullet_life=true;}
          
      //my_enemy.y = my_enemy.y+(rand()%3-1)*2;
      //my_enemy.x = my_enemy.x+(rand()%3-1)*4;
      
       if(my_scene.checkCollision(my_hero,bullet_pos)){
                                                       
          if(bullet_life==true&&my_hero.is_block==false) my_hero.health = my_hero.health- 10;                                               
                                                       
         bullet_life =false;
                                                      
       }
      
      
      // check if attack is valid
      int att_range=0;
      att_range = my_enemy.x - my_hero.x;     
      if(att_range>=-70&&att_range<=50&&fabs(my_hero.y-my_enemy.y)<=10){
      if(my_hero.is_attack)
      my_enemy.health --;                             
       }
           
      if(my_hero.y>=my_enemy.y) {my_hero.layer_num=0;my_enemy.layer_num=1;}
      else  {my_hero.layer_num=1;my_enemy.layer_num=0;}
      
      my_scene.chooseScene(my_hero);
      if(my_scene.scene_num==1){
        blit(scene,buffer,0,0,0,0,1100,360);
      }
      if(my_scene.scene_num==2){
        blit(scene2,buffer,0,0,0,0,1100,360);                        
      }      
      
      
      /********Display******************/
     
      if(bullet_life)masked_blit(enemy_back,buffer,bullet_s_l.x,bullet_s_l.y,bullet_pos.x,bullet_pos.y,bullet_e_l.x,bullet_e_l.y);
      my_enemy.standPos();
      
      my_enemy.getPictureCoord(enemy_s_l[my_enemy.getHeroPos()],enemy_e_l[my_enemy.getHeroPos()]);
      
      if(my_hero.layer_num<my_enemy.layer_num){
        if(my_enemy.is_to_left)
      masked_blit(enemy_back,buffer,my_enemy.pt_start.x,my_enemy.pt_start.y,my_enemy.x,my_enemy.y,my_enemy.pt_end.x,my_enemy.pt_end.y);
        else
      masked_blit(enemy,buffer,my_enemy.pt_start.x,my_enemy.pt_start.y,my_enemy.x,my_enemy.y,my_enemy.pt_end.x,my_enemy.pt_end.y);  
      }
      textprintf_ex(buffer,font,900,240,makecol(0,0,0),makecol(255,255,255),"Hero Health:%d",my_hero.health);
      textprintf_ex(buffer,font,900,250,makecol(0,0,0),makecol(255,255,255),"Enemy Health:%d",my_enemy.health);
      textprintf_ex(buffer,font,900,260,makecol(0,0,0),makecol(255,255,255),"Hero x:%d y:%d",my_hero.x,my_hero.y);
      textprintf_ex(buffer,font,900,270,makecol(0,0,0),makecol(255,255,255),"Enemy x:%d y:%d",my_enemy.x,my_enemy.y);
          
      if(my_hero.is_to_left){
        my_hero.getPictureCoord(walk_s_l[my_hero.getHeroPos()],walk_e_l[my_hero.getHeroPos()]);  
        if(my_hero.getHeroPos()==19||my_hero.getHeroPos()==20) off_set = -20;
                  
        masked_blit(hero_back, buffer, my_hero.pt_start.x,my_hero.pt_start.y,my_hero.x+off_set,my_hero.y,my_hero.pt_end.x,my_hero.pt_end.y);
      }
      else {   
        my_hero.getPictureCoord(walk_s_r[my_hero.getHeroPos()],walk_e_r[my_hero.getHeroPos()]);                            
        masked_blit(hero, buffer, my_hero.pt_start.x,my_hero.pt_start.y,my_hero.x,my_hero.y,my_hero.pt_end.x,my_hero.pt_end.y);
      }
      
        
      if(my_hero.layer_num>my_enemy.layer_num){
        if(my_enemy.is_to_left) 
      masked_blit(enemy_back,buffer,my_enemy.pt_start.x,my_enemy.pt_start.y,my_enemy.x,my_enemy.y,my_enemy.pt_end.x,my_enemy.pt_end.y);  
        else
         masked_blit(enemy,buffer,my_enemy.pt_start.x,my_enemy.pt_start.y,my_enemy.x,my_enemy.y,my_enemy.pt_end.x,my_enemy.pt_end.y);  
      }
        
	  blit(buffer,screen,0,0,0,0,1100,360);
	  clear_bitmap(buffer);
	  release_screen();
	  is_move=false;
      rest(100);		
	}
	
	destroy_bitmap(hero);
	destroy_bitmap(hero_back);
	destroy_bitmap(scene);
	
	
	return 0;
}
END_OF_MAIN();
