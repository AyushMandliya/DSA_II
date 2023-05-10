#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *Next;
}*front=NULL,*rear=NULL;

void EnQueue(int x){
    struct Node *t;
    t=new struct Node;
    if(t==NULL)
    cout<<"Queue is Full \n";
else{
    t->data=x;
    t->Next=NULL;
    if(front==NULL)
    front=rear=t;
    else{
        rear->Next=t;
        rear=t;
        }
    }
}

int DeQueue(){
    int x=-1;
    struct Node* t;
if(front==NULL)
cout<<"Queue is Empty \n"<<endl;
else{
    x=front->data;
    t=front;
    front=front->Next;
    free(t);
}
return x;
}

void Display(){
    struct Node* p=front;
    while(p){
        cout<<p->data <<" ";
        p=p->Next;
    }cout<<endl;
}

int main(){
    EnQueue(10);
    EnQueue(20);
    EnQueue(30);
    EnQueue(40);
    EnQueue(50);
    DeQueue();
    Display();

return 0;
}