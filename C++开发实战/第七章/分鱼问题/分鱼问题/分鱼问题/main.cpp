//
//  main.cpp
//  分鱼问题
//
//  Created by Chen on 2019/5/9.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>

using namespace std;

int fenyu(int n);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n = 10;
    int res = fenyu(n);
    cout<<res<<endl;
    return 0;
}


int fenyu(int n)
{
    static int result = 0;
    result++;
    cout<<result<<endl;
    if(n!=0)
    {
        
        fenyu(n -1);
        
    }
 

    
    
    return result;
}
