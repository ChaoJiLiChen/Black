//
//  main.cpp
//  类_找出最高分
//
//  Created by Chen on 2019/7/22.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>
using namespace std;



class Student
{
public:
    int num;
    int score;
    char name[20];
    
    Student();
    int compare(Student *stu,int stu_num);
    
};

int init(Student *stu ,int stu_num);

int main(int argc, const char * argv[])
{
    Student *max = new Student;
    int stu_num = 0;
    cout <<"一共有多少个学生"<<endl;
    cin >>stu_num;
    
    static Student *stu = new Student[stu_num];
    
    init(stu ,stu_num);
    max->compare(stu, stu_num);
    cout<<"成绩最好的学生是："<<max->name<<" 学号是："<<max->num<<" 成绩是:"<<max->score<<endl;
    
    return 0;
}

int init(Student *stu ,int stu_num)
{
    for (int i = 0;i<stu_num;i++)
    {
        string name = "";
        cout<<"第"<<i+1<<"名学生的姓名"<<endl;
        cin>>name;
        strcpy(stu[i].name, name.c_str());
        cout<<"第"<<i+1<<"名学生的学号"<<endl;
        cin>>stu[i].num;
        cout<<"第"<<i+1<<"名学生的成绩"<<endl;
        cin>>stu[i].score;
    }
    return 0;
}

Student::Student()
{
    memset(name,0,20);
    num = 0;
    score = 0;
    
}

int Student::compare(Student *stu,int stu_num)
{
    for(int i = 0;i<stu_num;i++)
    {
        if(stu[i].score > score)
        {
            num = stu[i].num;
            score = stu[i].score;
            strcpy(name,stu[i].name);
        }
    }
    return 0;
}
