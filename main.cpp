#include <allegro.h>
#include "math_aid.h"
#include "hero.h"
#include "scene.h"
#include "bullet.h"
#define VOL 100


int main() 
{	   
   //Hero Position
    Point walk_s_r[29];
    Point walk_e_r[29];
    Point walk_s_l[29];
    Point walk_e_l[29];    
    //stand right
    walk_s_r[0].setPoint(10,0);
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
        //kick
    walk_s_r[23].setPoint(410,518);
    walk_s_r[24].setPoint(485,518);  
    walk_s_r[25].setPoint(559,518);
    //walk_s_r[26].setPoint(559,518);
    walk_s_r[26].setPoint(640,518);
    walk_s_r[27].setPoint(712,518);
    // be attacked
    walk_s_r[28].setPoint(10,865);
    
           
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
        //kick
    walk_e_r[23].setPoint(65,75);
    walk_e_r[24].setPoint(65,75);
    walk_e_r[25].setPoint(70,75);
    walk_e_r[26].setPoint(65,75);
    walk_e_r[27].setPoint(65,75);
    // be attacked
    walk_e_r[28].setPoint(65,80);
            
    //stand left
    walk_s_l[0].setPoint(10,0);   
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
    //kick 
    walk_s_l[23].setPoint(410,518);
    walk_s_l[24].setPoint(483,518);
    walk_s_l[25].setPoint(558,518);
    walk_s_l[26].setPoint(638,518);
    walk_s_l[27].setPoint(712,518);

    //be attacked
    walk_s_l[28].setPoint(10,865);
   
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
    // defence
    walk_e_l[22].setPoint(60,80);
    //kick
    walk_e_l[23].setPoint(65,75);
    walk_e_l[24].setPoint(65,75);
    walk_e_l[25].setPoint(70,75);
    walk_e_l[26].setPoint(65,75);
    walk_e_l[27].setPoint(65,75);

    // be attacked
    walk_e_l[28].setPoint(65,80);


     
    //enemy
    int enemy_cnt =50;
    Point dst;
    dst.setPoint(100,100);
    Point enemy_s_r[15];
    Point enemy_e_r[15];
    Point enemy_s_l[15];
    Point enemy_e_l[15]; 
    //stand
    enemy_s_l[0].setPoint(100,10);
    enemy_s_l[1].setPoint(0,265);
    enemy_s_l[2].setPoint(85,265);
    enemy_s_l[3].setPoint(169,265);
    enemy_s_l[4].setPoint(259,265);
    enemy_s_l[5].setPoint(347,265);
    enemy_s_l[6].setPoint(429,265);
    enemy_s_l[7].setPoint(511,265);
    enemy_s_l[8].setPoint(615,265);
    
    enemy_e_l[0].setPoint(68,80);
    enemy_e_l[1].setPoint(70,60);
    enemy_e_l[2].setPoint(70,60);
    enemy_e_l[3].setPoint(70,60);
    enemy_e_l[4].setPoint(70,60);
    enemy_e_l[5].setPoint(70,60);
    enemy_e_l[6].setPoint(70,60);
    enemy_e_l[7].setPoint(70,60);
    enemy_e_l[8].setPoint(70,60);
    
    enemy_s_r[0].setPoint(100,10);
    enemy_s_r[1].setPoint(10,265);
    enemy_s_r[2].setPoint(102,265);
    enemy_s_r[3].setPoint(192,265);
    enemy_s_r[4].setPoint(277,265);
    enemy_s_r[5].setPoint(358,265);
    enemy_s_r[6].setPoint(444,265);
    enemy_s_r[7].setPoint(526,265);
    enemy_s_r[8].setPoint(620,265);
    
    enemy_e_r[0].setPoint(68,80);
    enemy_e_r[1].setPoint(70,60);
    enemy_e_r[2].setPoint(70,60);
    enemy_e_r[3].setPoint(70,60);
    enemy_e_r[4].setPoint(70,60);
    enemy_e_r[5].setPoint(70,60);
    enemy_e_r[6].setPoint(70,60);
    enemy_e_r[7].setPoint(70,60);
    enemy_e_r[8].setPoint(70,60);
     
    
    //enemy_s_r[0]
    //enemy_e_r[0]
    
    
    //bullet
    Point bullet_s_l;
    Point bullet_e_l;
    Point bullet_s_r;
    Point bullet_e_r;
    bullet_s_l.setPoint(700,965);
    bullet_e_l.setPoint(100,35);
    bullet_s_r.setPoint(700,965);
    bullet_e_r.setPoint(100,35);
    
    Bullet my_bullet;
    my_bullet.life = true;
    my_bullet.counter = 0;
   
    
   
    BITMAP *hero;
    BITMAP *hero_back;
    BITMAP *enemy;
    BITMAP *enemy_back;
    BITMAP *scene; 
    BITMAP *scene2;
    BITMAP *setting;
    
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
    SAMPLE *scream = load_sample("scream.wav");
    SAMPLE *sound_kick = load_sample("kick.wav");
     if(sound_nor_att==0) allegro_message("sound file error");
    
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1100, 360, 0, 0);
    hero      = load_bitmap("hero.bmp",NULL);
    hero_back = load_bitmap("hero2.bmp",NULL);
    enemy     = load_bitmap("hero3.bmp",NULL);
    enemy_back= load_bitmap("hero3_back.bmp",NULL);
    scene     = load_bitmap("scene.bmp",NULL);
    scene2    = load_bitmap("scene2.bmp",NULL);   
    setting   = load_bitmap("setting.bmp",NULL);
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
      off_set = 0;
	  clear_keybuf();
	  acquire_screen();
	  my_hero.posClear();
	  my_enemy.posClear();
		  
	  
	  /********receive key start**********/  
	  if(key[KEY_C]) 
	  //setting
	  { release_screen();
        while(!key[KEY_B]){
         clear_keybuf();     
         acquire_screen();                      
         //blit(scene2,buffer,0,0,0,0,1100,360); 
         textprintf_ex(setting,font,190,200,makecol(0,0,0),makecol(255,255,255),"Level: 1");
         textprintf_ex(setting,font,190,215,makecol(0,0,0),makecol(255,255,255),"Health: 100");
         //textprintf_ex(setting,font,190,230,makecol(0,0,0),makecol(255,255,255),"Level");
         blit(setting,buffer,0,0,384,0,332,360);                  
         blit(buffer,screen,0,0,0,0,1100,360);      
         release_screen();                
         rest(100);	
         clear_bitmap(buffer);
       }                    
         acquire_screen();
      }
	  	  
	     	  
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
      if(!key[KEY_F])  my_hero.is_new_kick = true;
       
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
          if(my_hero.getHeroPos()==17) play_sample(sound_nor_att,VOL,VOL,1000,0);
        }                 
        else if(key[KEY_F]){
          my_hero.nextKickPos(); 
          if(my_hero.getHeroPos()==25) play_sample(sound_kick,30,30,1000,0);
        }  
        else {
          my_hero.standPos();
          my_hero.is_new_nor_att = true;
          my_hero.is_new_kick = true;
        }
      }   
      
      /*****receive key end******/
      
      
      
      
      //enemy AI
      if(my_hero.x<my_enemy.x) my_enemy.is_to_left = true;
      else my_enemy.is_to_left = false;
      //my_enemy.standPos();
      enemy_cnt--;
      if(enemy_cnt==0){dst.x = rand()%500; enemy_cnt = 50;}
      my_enemy.walkTo(dst);     
      
            
      //my_enemy.y = my_enemy.y + (rand()%14-7);
      //check collision  
      if(my_scene.checkCollision(my_hero)){
        my_hero.y = my_hero.y_old;                                                                       
      }  
      
      if(my_scene.checkCollision(my_enemy)){
        my_enemy.y = my_enemy.y_old;                                    
      }
               
      // enemy fire bullet
      if(my_bullet.counter!=50){
        if(my_bullet.counter==0) {my_bullet.bullet_pos.y = my_enemy.y + 30; my_bullet.is_to_left = my_enemy.is_to_left;}
        if(my_bullet.is_to_left) my_bullet.bullet_pos.x = my_enemy.x - 50-my_bullet.counter*20;
        else my_bullet.bullet_pos.x = my_enemy.x + 30+ my_bullet.counter*20;
        my_bullet.counter++;
      }
      else {my_bullet.counter=0; my_bullet.life=true;}
          
      //my_enemy.y = my_enemy.y+(rand()%3-1)*2;
      //my_enemy.x = my_enemy.x+(rand()%3-1)*4;
      
       if(my_scene.checkCollision(my_hero,my_bullet)){
                                                       
          if(my_bullet.life==true&&my_hero.is_block==false) {
            my_hero.health = my_hero.health- 10;
            my_hero.isAttackedPos();
            my_hero.counter_is_started = true;
            my_hero.move_counter=10;
            play_sample(scream,VOL,VOL,1000,0);}                                            
                                                                                                       
       }
       if(my_hero.counter_is_started) {
         my_hero.move_counter--;
         my_hero.x = my_hero.x_old;
         my_hero.y = my_hero.y_old;
         if(my_hero.move_counter==0) {
           my_hero.is_attacked = false;
           my_hero.counter_is_started = false;
           }
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
      if(my_hero.y+40<=my_bullet.y) my_bullet.layer_num = 2;
      else my_bullet.layer_num = -1;
      
      my_scene.chooseScene(my_hero);
      if(my_scene.scene_num==1){
        blit(scene,buffer,0,0,0,0,1100,360);
      }
      if(my_scene.scene_num==2){
        blit(scene2,buffer,0,0,0,0,1100,360);                        
      }      
      
      
      /********Display******************/
     if(my_hero.layer_num<my_bullet.layer_num){
       if(my_bullet.is_to_left)
       if(my_bullet.life)masked_blit(enemy_back,buffer,bullet_s_l.x,bullet_s_l.y,my_bullet.bullet_pos.x,my_bullet.bullet_pos.y,bullet_e_l.x,bullet_e_l.y);
       if(!my_bullet.is_to_left) 
       if(my_bullet.life)masked_blit(enemy,buffer,bullet_s_r.x,bullet_s_r.y,my_bullet.bullet_pos.x,my_bullet.bullet_pos.y,bullet_e_r.x,bullet_e_r.y);  
     }
      
      if(my_hero.layer_num<my_enemy.layer_num){
        if(my_enemy.is_to_left){
      my_enemy.getPictureCoord(enemy_s_l[my_enemy.getHeroPos()],enemy_e_l[my_enemy.getHeroPos()]);
      masked_blit(enemy_back,buffer,my_enemy.pt_start.x,my_enemy.pt_start.y,my_enemy.x,my_enemy.y,my_enemy.pt_end.x,my_enemy.pt_end.y);}
        else{
      my_enemy.getPictureCoord(enemy_s_r[my_enemy.getHeroPos()],enemy_e_r[my_enemy.getHeroPos()]); 
      masked_blit(enemy,buffer,my_enemy.pt_start.x,my_enemy.pt_start.y,my_enemy.x,my_enemy.y,my_enemy.pt_end.x,my_enemy.pt_end.y);}  
      }
      textprintf_ex(buffer,font,900,230,makecol(0,0,0),makecol(255,255,255),"index:%d",my_hero.getHeroPos());
      textprintf_ex(buffer,font,900,240,makecol(0,0,0),makecol(255,255,255),"Hero Health:%d",my_hero.health);
      textprintf_ex(buffer,font,900,250,makecol(0,0,0),makecol(255,255,255),"Enemy Health:%d",my_enemy.health);
      textprintf_ex(buffer,font,900,260,makecol(0,0,0),makecol(255,255,255),"Hero x:%d y:%d",my_hero.x,my_hero.y);
      textprintf_ex(buffer,font,900,270,makecol(0,0,0),makecol(255,255,255),"Enemy x:%d y:%d",my_enemy.x,my_enemy.y);
      textprintf_ex(buffer,font,900,270,makecol(0,0,0),makecol(255,255,255),"Bullet x:%d y:%d",my_bullet.bullet_pos.x,my_bullet.bullet_pos.y);
      
       //textprintf_ex(buffer,font,900,280,makecol(0,0,0),makecol(255,255,255),"Index %d %d %d",my_enemy.getHeroPos(),my_enemy.pt_start.x,my_enemy.pt_start.y);
          
      if(my_hero.is_to_left){
        my_hero.getPictureCoord(walk_s_l[my_hero.getHeroPos()],walk_e_l[my_hero.getHeroPos()]);  
        if(my_hero.getHeroPos()==19||my_hero.getHeroPos()==20) off_set = -20;
                  
        masked_blit(hero_back, buffer, my_hero.pt_start.x,my_hero.pt_start.y,my_hero.x+off_set,my_hero.y,my_hero.pt_end.x,my_hero.pt_end.y);
      }
      else {   
        my_hero.getPictureCoord(walk_s_r[my_hero.getHeroPos()],walk_e_r[my_hero.getHeroPos()]);                            
        masked_blit(hero, buffer, my_hero.pt_start.x,my_hero.pt_start.y,my_hero.x,my_hero.y,my_hero.pt_end.x,my_hero.pt_end.y);
      }
      
     if(my_hero.layer_num>my_bullet.layer_num){
       if(my_bullet.is_to_left)
       if(my_bullet.life)masked_blit(enemy_back,buffer,bullet_s_l.x,bullet_s_l.y,my_bullet.bullet_pos.x,my_bullet.bullet_pos.y,bullet_e_l.x,bullet_e_l.y);
       if(!my_bullet.is_to_left) 
       if(my_bullet.life)masked_blit(enemy,buffer,bullet_s_r.x,bullet_s_r.y,my_bullet.bullet_pos.x,my_bullet.bullet_pos.y,bullet_e_r.x,bullet_e_r.y);  
     }
      
      if(my_hero.layer_num>my_enemy.layer_num){
        if(my_enemy.is_to_left) {
      my_enemy.getPictureCoord(enemy_s_l[my_enemy.getHeroPos()],enemy_e_l[my_enemy.getHeroPos()]);
      masked_blit(enemy_back,buffer,my_enemy.pt_start.x,my_enemy.pt_start.y,my_enemy.x,my_enemy.y,my_enemy.pt_end.x,my_enemy.pt_end.y); } 
        else{
         my_enemy.getPictureCoord(enemy_s_r[my_enemy.getHeroPos()],enemy_e_r[my_enemy.getHeroPos()]);
         masked_blit(enemy,buffer,my_enemy.pt_start.x,my_enemy.pt_start.y,my_enemy.x,my_enemy.y,my_enemy.pt_end.x,my_enemy.pt_end.y); }
      }
        
	  blit(buffer,screen,0,0,0,0,1100,360);
	  clear_bitmap(buffer);
	  release_screen();
	  is_move=false;
	  
      if(my_scene.checkCollision(my_hero,my_bullet)){
                                                                                                                                       
         my_bullet.life=false;
                                                      
       }
      rest(100);
      
      		
	}
	
	destroy_bitmap(hero);
	destroy_bitmap(hero_back);
	destroy_bitmap(scene);	
	return 0;
}
END_OF_MAIN();









