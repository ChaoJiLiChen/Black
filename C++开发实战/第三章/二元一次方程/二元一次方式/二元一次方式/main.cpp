//
//  main.cpp
//  二元一次方式
//
//  Created by Chen on 2019/4/17.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>

int exgcd(int a, int b, int &x, int &y);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    
    int a, b, x = 0, y = 0;
    
    scanf("%d %d",&a, &b);
    
    int gcd = exgcd(a,b,x,y);
    
    printf("%d %d %d\n", gcd, x, y);
    
    
    return 0;
    
    
    
}


int exgcd(int a, int b, int &x, int &y)
{
    
    if(b>a)
        return exgcd( b,  a,  y,  x);
    
    if(b==0)
    {
        x = 1, y = 0;
        return a;
    }
    int r=exgcd(b, a%b, x, y);
    
    int temp = x;
    
    x = y;
    
    y = temp - (a/b) * y;
    
    return r;
    
}
