//
//  main.cpp
//  利用hypot求直角三角形斜边
//
//  Created by Chen on 2019/5/8.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    float bian1;
    float bian2;
    float xie;
    
    cout<<"输入两个边的长度"<<endl;
    cin>>bian1>>bian2;
    xie = hypot(bian1, bian2);
    cout<<xie<<endl;
    
    
    return 0;
}
