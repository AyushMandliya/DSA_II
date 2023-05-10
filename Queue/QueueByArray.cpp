#include<iostream>
using namespace std;

class Queue{

private:
    int front;
    int rear;
    int size;
    int *Q;
public:
    Queue(){front=rear=-1,size=10,Q=new int [size];}
    Queue(int size){front=rear=-1,this->size=size,Q=new  int[this->size];}
    void EnQueue(int x);
    int DeQueue();
    void Display(); 
};

void Queue:: EnQueue(int x){
    if( rear ==size-1)
    cout<<"Queue is full"<<endl;
    else {
        rear++;
        Q[rear]=x;
    }
}

int Queue :: DeQueue(){
    int x=-1;
    if(front==rear)
    cout<<"Queue is Empty";
    else{
    x=Q[front+1]; 
    front++; 
    }return x;
}

void Queue:: Display(){
    for (int i = front+1; i <=rear; i++)
    cout<<Q[i]<<" ";   
}

int main(){
        Queue q(5);
        q.EnQueue(10);
        q.EnQueue(20);
        q.EnQueue(30);
        q.EnQueue(40);
        q.DeQueue();
        q.Display();
return 0;
}