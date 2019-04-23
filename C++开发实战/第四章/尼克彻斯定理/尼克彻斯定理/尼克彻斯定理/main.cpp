//
//  main.cpp
//  尼克彻斯定理
//
//  Created by Chen on 2019/4/23.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
using namespace std;

void findnum(int num)
{
    int sum = num * num * num;
    int result = 0;
    
    cout <<sum <<endl;
    int chushi = num * num - num + 1;
    cout<<sum <<"=" ;
    for(;result != sum;chushi+=2)
    {
        result  += chushi;
        cout<<chushi<<"+";
        
        
    }
}




int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int num;
    cin>>num;
    
    findnum(num);
    return 0;
}
