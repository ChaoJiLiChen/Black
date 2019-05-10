//
//  main.cpp
//  利用ceil函数
//
//  Created by Chen on 2019/5/10.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    double shuru;
    cout<<"请输入一个数"<<endl;
    cin>>shuru;
    
    double result = ceil(shuru);
    cout<<result<<endl;
    
    return 0;
}
