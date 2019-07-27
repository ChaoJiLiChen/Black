//
//  main.cpp
//  计算平面上两点之间的距离
//
//  Created by Chen on 2019/7/27.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

class Point
{
public:
    double x;
    double y;
    
    Point();
    Point(double x,double y);
    double Calculation(Point& p);
};

int main(int argc, const char * argv[]) {

    Point a(3.3,4.4);
    Point b(6.3,8.4);
    cout <<a.Calculation(b)<<endl;
    
    return 0;
}

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(double x,double y)
{
    this->x = x;
    this->y = y;
}

double Point::Calculation(Point &p)
{
    double x = p.x - this->x;
    double y = p.y - this->y;
    double res = sqrt(x * x + y *y);
    return res;
    
}
