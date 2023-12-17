#include <math.h>

struct Point {
    int x;
    int y;

    // This method added as reference.
    double distance(Point* other) {
        int diff_x = this->x - other->x;
        int diff_y = this->y - other->y;
        int sq_x = diff_x * diff_x;
        int sq_y = pow(diff_y, 2);
        int sum = sq_x + sq_y;
        double answer = sqrt(sum);
        return answer;
    }

    double slope(Point* other){
        double m;
        double diff1 = (other->y - this->y);
        double diff2 = (other->x - this->x);

        m = diff1 / diff2;
        return m;
    }



};

typedef Point point;