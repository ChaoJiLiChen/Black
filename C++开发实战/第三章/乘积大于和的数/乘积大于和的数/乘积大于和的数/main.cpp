//
//  main.cpp
//  乘积大于和的数
//
//  Created by Chen on 2019/4/16.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "开始!\n";
    for(int i = 10; i <= 99 ; i++)
    {
        int ge = i % 10;
        int shi = i / 10;
        if((ge * shi)>(ge + shi))
        {
            cout <<i <<endl;
        }
        
    }
    return 0;
}
