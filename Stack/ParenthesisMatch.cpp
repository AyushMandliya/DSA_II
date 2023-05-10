#include<iostream>
using namespace std;
class Node{
public:
    char data;
    Node *next;
};
class Stack{
private:
    Node *top;
public:
    Stack(){top=NULL;}
    void Push(char x);
    char Pop();
    void Display();
    int IsBalanced(char *exp);

};

void  Stack :: Push(char x){
    Node*t=new Node;
    if(t==NULL)
    cout<<"Stack is Full";
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

char Stack :: Pop(){
    char x=-1;
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

int Stack :: IsBalanced(char *exp){
    int i;
    for(i=0;exp[i]!='\0';i++){
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
        Push(exp[i]);  
        else if(exp[i]==')'|| exp[i]==']' ||exp[i]=='}'){
            if(top==NULL)
            return 0;
            Pop();
        }
  }
  if(top==NULL)
  return 1;
  else 
  return 0;

}

int main(){
    Stack stk;
   char *exp = "{(a+b)*(c-d})";
    cout<<stk.IsBalanced(exp);
return 0;
}