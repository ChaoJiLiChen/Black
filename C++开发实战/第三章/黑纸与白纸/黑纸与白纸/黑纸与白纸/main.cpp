//
//  main.cpp
//  黑纸与白纸
//
//  Created by Chen on 2019/4/16.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>
#include <stdio.h>
    
    int main()
    {
        int a, b, c, d, e;
        for(a=0; a<=1; a++){
            for(b=0; b<=1; b++){
                for(c=0; c<=1; c++){
                    for(d=0; d<=1; d++){
                        for(e=0; e<=1; e++){
                            if( ((a && b+c+d+e==3) || (!a && b+c+d+e!=3)) && ((b && a+c+d+e==0) || (!b && b+c+d+e!=0)) && ((c && a+b+d+e==1) || (!c && a+b+d+e!=1)) && ((d && a+b+c+e==4) || (!d && a+b+c+e!=4)) ){
                                printf("0-黑纸\t1-白纸\n\n");
                                printf(" a是%d\n b是%d\n c是%d\n d是%d\n e是%d\n", a, b, c, d, e);
                            }
                        }
                    }
                }
            }
        }
        return 0;
    }

