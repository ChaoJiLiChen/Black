//
//  main.cpp
//  查找成绩不及格的学生
//
//  Created by Chen on 2019/6/6.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>

//创建数组
//判断每个学生的成绩是否及格
//输出

float *search(float(*p)[4]);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    float score[][4] = {{34,56,78,88},{12,45,55,54},{44,67,77,88}};
    
    float *p;
    
    int i , j;
    for(i = 0;i<3;i++)
    {
        p = search(score + i);
        if(p ==*(score + i))
        {
            printf("this student \n");
            for(j = 0;j<4;j++,p++)
            {
                printf("%5.1f",*p);
            }
        }
    }
   
    
    return 0;
}

float *search(float(*p)[4])
{
    int i;
    float *pt;
    pt = *(p + 1);
    for(i = 0; i< 4;i++)
    {
        if(*(*p+i)<60)
        {
            pt = *p;
        }
    }
    return (pt);
}
