#include "math_aid.h"

Point::Point(){
  x=0;
  y=0;               
}

Point::Point(int col_x,int col_y){
  x = col_x;
  y = col_y;                                    
}

Point::~Point(){}


void Point::setPoint(int col_x,int col_y){
     x = col_x;
     y = col_y;
}

int fabs(int x){
  if(x<0) x=-x; 
  return x;      
}
