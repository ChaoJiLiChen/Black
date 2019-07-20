//
//  main.cpp
//  猜数字
//
//  Created by Chen on 2019/7/16.
//  Copyright © 2019 Chen. All rights reserved.
//


//输出主界面程序
//接收用户输入
//判断 并进行输出 对次数计数

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <curses.h>
#include <stdio.h>
#include <unistd.h>

using namespace std;

typedef struct Num
{
    int num1;
    int num2;
    int num3;
    int num4;
}Num;


void show();
void step(char choose);
void game();
int getnum(Num &num);
int comparison(Num rignt,Num get);

Num creat_num();


int main(int argc, const char * argv[])
{
    while (1)
    {
        show();
        char choose = ' ';
        scanf("%c",&choose);
        step(choose);
    }
    return 0;
}

/***********************************************************************************************
 *函数名 ：show
 *函数功能描述 ：输出提示信息
 *函数参数 ：无
 *函数返回值 ：无
 *作者 ：JackCui
 *函数创建日期 ：20190717
 *函数修改日期 ：
 *修改人 ：
 *修改原因 ：
 *版本 ：
 *历史版本 ：
 ***********************************************************************************************/

void show()
{
    system("clear");
    printf("\n\n\n           1.开始游戏\n");
    printf("\n\n           2.游戏规则\n");
    printf("\n\n           3.结束游戏\n");
}


/***********************************************************************************************
 *函数名 ：step
 *函数功能描述 ：选择程序步骤
 *函数参数 ：char choose
 *函数返回值 ：无
 *作者 ：JackCui
 *函数创建日期 ：20190717
 *函数修改日期 ：
 *修改人 ：
 *修改原因 ：
 *版本 ：
 *历史版本 ：
 ***********************************************************************************************/
void step(char choose)
{
    switch (choose) {
        case '1':
            game();
            break;
        case '2':
            system("clear");
            cout<<"规则："<<endl;
            cout<<"1.输入一个四位数"<<endl;
            cout<<"2.A为完全猜对的数字个数，B为猜对数字但是位置错误的个数"<<endl;
            cout<<"3.根据提示继续猜"<<endl;
            sleep(3);
            break;
        case '3':
            exit(0);
        default:
            break;
    }
}


/***********************************************************************************************
 *函数名 ：game
 *函数功能描述 ：游戏开始
 *函数参数 ：char choose
 *函数返回值 ：无
 *作者 ：JackCui
 *函数创建日期 ：20190717
 *函数修改日期 ：
 *修改人 ：
 *修改原因 ：
 *版本 ：
 *历史版本 ：
 ***********************************************************************************************/
void game()
{
    
    Num num;
    Num get_num;
    int result = 1;
    int count = 0;
    num = creat_num();
  //  cout <<num.num1 <<" "<<num.num2 <<" "<<num.num3 <<" "<<num.num4 <<" "<<endl;
    
    while(result)
    {
        ++count;
        cout<<"输入4个一位的数字 中间用空格隔开"<<endl;
        getnum(get_num);
        result = comparison(num,get_num);
    }
    printf("恭喜你猜对了！\n");
    if(count == 1)
    {
        printf("厉害啊！\n");
    }
    if(count == 1)
    {
        printf("厉害啊！\n");
    }
    if(count <= 5 && count > 1)
    {
        printf("可以了！\n");
    }
    if(count <= 10 && count > 5)
    {
        printf("加油啊！\n");
    }
    cout <<num.num1 <<" "<<num.num2 <<" "<<num.num3 <<" "<<num.num4 <<" "<<endl;
    cout<<"count:"<<count<<endl;
    sleep(3);
    
}


/***********************************************************************************************
 *函数名 ：creat_num
 *函数功能描述 ：生成结果数字
 *函数参数 ：无
 *函数返回值 ：无
 *作者 ：JackCui
 *函数创建日期 ：20190717
 *函数修改日期 ：
 *修改人 ：
 *修改原因 ：
 *版本 ：
 *历史版本 ：
 ***********************************************************************************************/
Num creat_num()
{
    Num num;
    int right_answer1 = 0;
    int right_answer2 = 0;
    int right_answer3 = 0;
    int right_answer4 = 0;
    srand((unsigned)time(NULL));
    
    while(1)
    {
        if(right_answer1 == right_answer2 ||right_answer1 == right_answer3 || right_answer1 == right_answer4 || right_answer2 == right_answer3 || right_answer2 == right_answer4 || right_answer3 == right_answer4)
        {
            right_answer1 = rand()%10;
            right_answer2 = rand()%10;
            right_answer3 = rand()%10;
            right_answer4 = rand()%10;
            
        }
        else
            break;
    }
    
    num.num1 = right_answer1;
    num.num2 = right_answer2;
    num.num3 = right_answer3;
    num.num4 = right_answer4;
    
    return num;
    
}

int getnum(Num &num)
{
    cin >>num.num1;
    cin >>num.num2;
    cin >>num.num3;
    cin >>num.num4;
    
    return  0;
}


/***********************************************************************************************
 *函数名 ：comparison
 *函数功能描述 ：比较输入结果和正确结果是否一致
 *函数参数 ：无
 *函数返回值 ：无
 *作者 ：JackCui
 *函数创建日期 ：20190720
 *函数修改日期 ：
 *修改人 ：
 *修改原因 ：
 *版本 ：
 *历史版本 ：
 ***********************************************************************************************/

int comparison(Num rignt,Num get)
{
    int numA = 0;
    int numB = 0;
    
    if(rignt.num1 == get.num1 && rignt.num2 == get.num2 && rignt.num3 == get.num3 && rignt.num4 == get.num4)
    {
        return 0;
    }
    else
    {
        
        if(rignt.num1 == get.num1)
        {
            ++numA;
        }
        if(rignt.num2 == get.num2)
        {
            ++numA;
        }
        if(rignt.num3 == get.num3)
        {
            ++numA;
        }
        if(rignt.num4 == get.num4)
        {
            ++numA;
        }
        
        if(get.num1 == rignt.num2 ||get.num1 == rignt.num3||get.num1 == rignt.num4)
        {
            ++numB;
        }
        if(get.num2 == rignt.num3 ||get.num2 == rignt.num4 || get.num2 == rignt.num1)
        {
            ++numB;
        }
        if(get.num3 == rignt.num4||get.num3 == rignt.num1 || get.num3 == rignt.num2)
        {
            ++numB;
        }
        if(get.num4 == rignt.num1||get.num4 == rignt.num2 || get.num4 == rignt.num3)
        {
            ++numB;
        }
        printf("%dA%dB",numA,numB);
    }
    
    return 1;
    
}
