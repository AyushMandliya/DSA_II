#include<iostream>
using namespace std;
//sparse matrix
/*
 3 column representation    --------
 represent in the row ,column,element 

 compressed sparse matrix   --------
 A=[3,8,10,4,2,6,9,5]
 IA[0,1,3,3,4,4,5,6,8]
 JA[8,3,6,1,3,4,2,5]

*/

class element{
    public:
    int i;
    int j;
    int x;
};

class sparse{
    private:
    int m;
    int n;
    int num;
    element *ele;
    public:
    sparse(int m,int n,int num)
    {
        this ->m=m;
        this ->n=n;
        this ->num=num;
        ele=new element [this->num];
    }
    ~sparse(){
        delete[]ele;
    }
    void read(){
        cout<<"Enter all non-zero elements :";
        for (int i = 0; i < num; i++)
        cin>>ele[i].i>>ele[i].j>>ele[i].x;
    }

    void display(){
        int k=0;
        for (int  i = 0; i < m; i++)
        {
            for (int  j = 0; j < n; j++)
            {
                if(ele[k].i==i && ele[k].j==j)
                cout<<ele[k++].x<<" ";
                else 
                cout<<"0 ";
            }
            cout<<endl;
        }
        
    }
};


int main(){
        sparse s1(5,5,5);
        s1.read();
        s1.display();
return 0;
}
