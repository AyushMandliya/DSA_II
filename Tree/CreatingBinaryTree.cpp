#include<iostream>
using namespace std;

class Node{
    public:
    Node *LChild;
    int x;
    Node *RChild;
};

class Tree{
    public:
    Node* Root;
    Tree(){Root=NULL;}
    void CreateTree();
    void PreOrder(Node* p);
    void PostOreder(Node* p);
    void Inorder(Node* p);
    void Level(Node* p);
    void LevelOrder(Node* p);
    void Height(Node* root);

};

class Queue{

private:
    int front;
    int rear;
    int size;
    Node **Q;
public:
    Queue(){front=rear=-1,size=10,Q=new Node* [size];}
    Queue(int size){front=rear=-1,this->size=size,Q=new  Node*[this->size];}
    void EnQueue(Node* x);
    Node* DeQueue();
    void Display(); 
};

void Queue:: EnQueue(Node* x){
    if( rear ==size-1)
    cout<<"Queue is full"<<endl;
    else {
        rear++;
        Q[rear]=x;
    }
}

Node* Queue :: DeQueue(){
    Node* x=NULL;
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
       
return 0;
}