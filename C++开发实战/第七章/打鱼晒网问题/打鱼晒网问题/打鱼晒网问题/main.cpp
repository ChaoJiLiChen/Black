//
//  main.cpp
//  打鱼晒网问题
//
//  Created by Chen on 2019/5/10.
//  Copyright © 2019年 Chen. All rights reserved.
//

#include <iostream>

using namespace std;

void shuru(int *year,int *month,int *day);//接收数据
int juli(int year,int month,int day);//计算距离天数
int boolRun(int year);//是否是闰年

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "hello world!\n";
    //输入现在的日期
    //计算距离了多少天
    //今天是打鱼还是晒网？
    int year;
    int month;
    int day;
    int dayNumber;
    
    shuru(&year,&month,&day);
    cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
    dayNumber = juli(year, month, day);
    cout<<"juli:"<<dayNumber<<endl;
    
    
    
    return 0;
}


void shuru(int *year,int *month,int *day)
{

    
    cout<<"哪一年"<<endl;
    cin>>*year;
    
    cout<<"哪一个月"<<endl;
    cin>>*month;
    
    cout<<"哪一天"<<endl;
    cin>>*day;
    
    
    
    //cout<<*year<<"年"<<*month<<"月"<<*day<<"日"<<endl;
    
}

int juli(int year,int month,int day)
{
    int sum = 0;
    int eryue = 0;
    int ping[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int run[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    for(int i = 2000;i<year;i++)
    {
        if(boolRun(year))
        {
            sum+=366;
            eryue = 1;
        }
        else
        {
            sum +=365;
            eryue = 0;
        }
    }
    for(int m = 0;m<month -1;m++)
    {
        if(eryue==0)
        {
        sum +=run[m];
        }
        if(eryue==1)
        {
            sum +=ping[m];
        }
        
    }
    sum = sum+day;
    
    return sum;
}

int boolRun(int year)
{
    if(((year%4==0)&&year%100 !=0)||year%400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
