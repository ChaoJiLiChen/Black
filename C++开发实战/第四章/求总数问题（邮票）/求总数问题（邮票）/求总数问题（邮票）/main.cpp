//
//  main.cpp
//  求总数问题（邮票）
//
//  Created by Chen on 2019/4/19.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a,b,c,x,sum;
    for(x=1;x<6;x++)
    {
        if(10605%(28-5*x)==0)
        {
            sum=10605/(28-5*x);
            a=a*sum/10;
            b=x*sum/7;
            c=303;
            printf("%d\n%d %d %d",sum,a,b,c);
        }
        
        
    }
  
   
    return 0;
}
