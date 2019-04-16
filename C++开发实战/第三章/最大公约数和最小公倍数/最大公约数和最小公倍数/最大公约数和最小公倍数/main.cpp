//
//  main.cpp
//  最大公约数和最小公倍数
//
//  Created by Chen on 2019/4/16.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

//最大公约数 * 最小公倍数 = num1 * num2
//知道了最大公约数最小公倍数就可以知道了

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "请输入两个正整数\n";
    int num1 = 0;
    int num2 = 0;
    int numgys = 0;
    int tmp= 0;
    cin >> num1 >> num2;
    
    if(num1 < num2)
    {
        int tmpnum = num1;
        num1 = num2;
        num2 = tmpnum;
    }
    if(num1 % num2 ==0)
    {
        numgys = num2;
    }

    tmp = num1 % num2;
    while (tmp)
    {
        num1 = num2;
        num2 = tmp;
        tmp = num1 % num2;
        numgys = num2;
    }
    cout <<numgys<<endl;
    
    
    
    return 0;
}
