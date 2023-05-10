#include<iostream>
using namespace std;/*
int pow(int m,int n)
if(n==0)
return ;
else return m*pow(m,n-1)*/
    int pow1(int m,int n){
    if(n==0)
    return 1;
    else if(n%2==0)
        return pow1(m*m,n/2);
        else return m*pow1(m*m,(n-1)/2);
    }
int main(){
    int r=pow1(2,3);
    cout<<r<<endl;
}