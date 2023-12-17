#include <math.h>
#include <iostream>

struct Point {
    int x;
    int y;

    int quadrant(){

        if(x>0 && y>0){
        return 1;
        }
        else if(x<0 && y>0){
        return 2;
        }
        else if(x<0 && y<0){
        return 3;
        }
        else if(x>0 && y<0){
        return 4;
        }
        else if(x==0 && y==0){
        return 0;
        }
        else if(x==0 && y>0){
        return -1;
        }
        else if(x==0 && y<0){
        return -1;
        }
        else if(x<0 && y==0){
        return -1;
        }
        else if(x>0 && y==0){
        return -1;
        }
        }
};

typedef Point point;