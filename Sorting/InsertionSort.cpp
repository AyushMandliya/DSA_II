#include<iostream>
using namespace std;

void InsertionSort(int A[],int n){
    int i,j,x;
    for (int i = 1; i < n; i++)
    {
        j=i-1;
        x=A[i];
        while(j> -1 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}
int main(){
    int A[]={11,13,7,2,6,9,4,5,10,3},n=10,i;
    InsertionSort(A,n);
    for (int i = 0; i < 10; i++)   
        cout<<A[i]<<endl;
return 0;
}