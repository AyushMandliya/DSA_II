//Stack is all about -> last in first out = LiFo
#include<iostream>
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

class  Stack{
    int top;
    
public:
    int a[MAX];
    Stack(){top=-1;}
    bool Push(int x);
    int Pop();
    int Peek();
    bool isEmpty();
    bool isFull();
};


bool Stack :: Push(int x){
    if(top>=(MAX-1)){
    cout<<"stack overflow";
    return false;
}
    else{
    a[++top]=x;
    cout<<x<<" pushed into the stack"<<endl;
    return true;
    }
}

int Stack :: Pop(){
    if(top<0){
    cout<<"stack underflow";
    return 0;
    }
    else{
    int x=a[top--];
   return x;
    }
}

int Stack :: Peek(){
    if(top<0){
        cout<<"Stack is Empty";
        return 0;
    }
    else{
        int x=a[top];
        return x;
    }
}
 
bool Stack :: isEmpty(){
    return (top<0);
}

int main(){
    class Stack S;
    S.Push(10);
    S.Push(20);
    S.Push(30);
    cout<<S.Pop()<<" Popped from the stack"<<endl;;
    cout<<S.Pop()<<" is the top element of the stack"<<endl;
    while(!S.isEmpty()){
        cout<<S.Peek()<<" ";
        S.Pop();
    }
 
return 0;
}