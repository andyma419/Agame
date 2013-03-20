#ifndef MATH_AID_H
#define MATH_AID_H

class Point{
  public:
    Point();
    Point(int col_x,int col_y);
    ~Point();
    void setPoint(int col_x,int col_y);
    
    int x;
    int y;
};

int fabs(int x);




#endif
