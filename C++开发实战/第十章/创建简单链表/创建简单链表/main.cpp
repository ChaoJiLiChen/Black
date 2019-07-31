//
//  main.cpp
//  创建简单链表
//
//  Created by Chen on 2019/7/30.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>

using namespace std;

//需要实现增删改查 初始化 获取当前状态 构造函数和拷贝构造函数

class Node
{
private:
    int data;
    Node *next;


public:
    static Node* head ;
    static Node* tail ;
    
    Node(int data);//初始化

    static void Add(Node * nod);
    static void Add(int data);

    static void Del(int data);

    static void Find();

    void GetMessage();

};

Node* Node::head = NULL;
Node* Node::tail = NULL;

int main(int argc, const char * argv[]) {

    cout<<"hello"<<endl;
    Node *n1 = new Node(3);
    Node *n2 = new Node(4);
    Node::Add(n1);
    Node::Add(n2);
    Node::Add(5);
    Node::Find();
    cout<<"---------"<<endl;
    Node::Del(3);
    Node::Find();
    
    
    
    return 0;
}



Node::Node(int data)
{
    this->data = data;
    this->next = NULL;
}

void Node::Add(Node * nod)
{
    if(Node::head == NULL)
    {
        Node::head = nod;
        Node::tail = nod;
    }
    tail->next = nod;
    tail = nod;
}


void Node::Add(int data)
{
    if(Node::head == NULL)
    {
        Node::head = new Node(data);
        Node::tail = new Node(data);
    }
    Node * node = new Node(data);
    Node::Add(node);
}

void Node::Find()
{
    if(head != NULL)
    {
       
    }
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->data<<endl;
        tmp = tmp->next;
    }
}


void Node::Del(int data)
{
    //如果链表为空
    
    
    //如果第一个就是
    Node *ptmpH = head;
    if(head->data == data)
    {
        head = head->next;
        delete ptmpH;
        
    }
    
    Node *tmp = head->next;
    
    while(tmp != NULL)
    {
        if(tmp->data == data)
        {
            ptmpH->next = ptmpH->next->next;
            delete tmp;
            break;
        }
        tmp = tmp->next;
        ptmpH = ptmpH->next;
    }
}
