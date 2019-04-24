//
//  main.cpp
//  取出最大和最小
//
//  Created by Chen on 2019/4/24.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

void minAndMax(float O1, float O2,float O3,float O4);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    float O1 = 0;
    float O2 = 0;
    float O3 = 0;
    float O4 = 0;
    
    cin>>O1>>O2>>O3>>O4;
    minAndMax(O1,O2,O3,O4);
    
    return 0;
}

void minAndMax(float O1, float O2,float O3,float O4)
{
    float min = 0;
    float max = 0;
    if(O1>O2)
    {
        max = O1;
    }
    if(O3 > max)
    {
        max = O3;
    }
    if(O4 > max)
    {
        max = O4;
    }
    cout <<"max:"<<max<<endl;
    
    if(O1<O2)
    {
        min = O1;
    }
    if(O3 < min)
    {
        min = O3;
    }
    if(O4 < min)
    {
        min = O4;
    }
    cout <<"min:"<<min<<endl;
}
