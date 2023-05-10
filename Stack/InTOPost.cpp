#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
class Stack{
private:
    Node *top;
public:
    Stack(){top=NULL;}
    void Push(int x);
    int Pop();
    void Display();
    int Pre(char x);
    int IsOperand(char x);
    char InToPost(char *InFix);
};

void  Stack :: Push(int x){
    Node*t=new Node;
    if(t==NULL)
    cout<<"Stack is Full";
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

int Stack :: Pop(){
    int x=-1;
    if(top==NULL)
    cout<<"Stack is Empty";
    else{
        x=top->data;
        Node*t=top;
        top=top->next;
        delete t;
    }
    return x;
}

void Stack :: Display(){
    Node*p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    } cout<<endl;
}

int Stack :: Pre(char x){
    if(x=='+' || x=='-')
    return 1;
    else if (x == '*' || x== '/')
    return 2;
    return 0;
}

int Stack :: IsOperand(char x){
    if(x=='+' || x=='-' || x == '*' || x== '/' )
    return 0;
    else return 1;
}

char Stack :: InToPost(char *InFix){
    int i=0,j=0;
    char *PostFix;
    int len=strlen(InFix);
    PostFix=new char(len+2);

    while(InFix[i]!='\0'){
        if(IsOperand(InFix[i]))
        PostFix[j++]=InFix[i++];
        else {
            if(Pre(InFix[i])>Pre(top->data))
            Push(InFix[i++]);
            else{
            PostFix[j++]=Pop();    
            }
        }
    }
    while(top!=NULL)
    PostFix[j++]=Pop();
    PostFix[j]='\0';
    return PostFix;
}

int main(){
    Stack stk;
    char *InFix="a+b*c";
    stk.Push('#');
    char *PostFix=InToPost(InFix);
    cout<<PostFix<<endl;

return 0;
}