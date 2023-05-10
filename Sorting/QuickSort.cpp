#include<iostream>
using namespace std;

void Swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int A[],int l,int h){
    int pivot=A[l];
    int i=l,j=h;
    do
    {
        do { i++; } while (A[i]<=pivot);
        do { j--; } while (A[j]>pivot);
        if(i<j)Swap(&A[i],&A[j]);
    } 
    while (i<j);
    Swap(&A[l],&A[j]);
    return j;
}

void QuickSort(int A[],int l,int h){
    int j;
    if(l<h){
        j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);

    }
}

int main(){
    int A[]={11,13,7,12,16,9,24,5,10,3,INT32_MAX},i;
    QuickSort(A,0,10);
    for ( i = 0; i < 10; i++)
    {
        cout<<A[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}