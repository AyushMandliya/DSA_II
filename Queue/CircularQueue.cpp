#include<iostream>
using namespace std;

class Queue{

private:
    int front;
    int rear;
    int size;
    int *Q;
public:
    Queue(){front=rear=0,size=10,Q=new int [size];}
    Queue(int size){front=rear=-1,this->size=size,Q=new  int[this->size];}
    void EnQueue(int x);
    int DeQueue();
    void Display(); 
};

void Queue:: EnQueue(int x){
    if( (rear+1)%size ==front)
    cout<<"Queue is full"<<endl;
    else {
        rear=(rear+1)%size;
        Q[rear]=x;
    }
}

int Queue :: DeQueue(){
    int x=-1;
    if(front==rear)
    cout<<"Queue is Empty";
    else{
    x=Q[front+1]; 
    front=(front+1)%size; 
    }return x;
}

void Queue:: Display(){
    int i=front+1;
    do{
    cout<<Q[i]<<" ";
    i=(i+1)%size;
    }
    while(i!=(rear+1)%size);
    cout<<endl;
}

int main(){
        Queue q(5);
        q.EnQueue(10);
        q.EnQueue(20);
        q.EnQueue(30);
        q.EnQueue(40);
        q.EnQueue(50);
        q.EnQueue(60);
        q.DeQueue();
        q.Display();
return 0;
}