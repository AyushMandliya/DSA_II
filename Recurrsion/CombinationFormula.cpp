#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)return 1;
    return fact(n-1)*n;
}
int c(int n,int r){
    int t1,t2;
    t1=fact(n);
    t2=fact(r)*fact(n-r);
    return t1/t2;    
}
int main(){
    cout<< c(4,2);
}