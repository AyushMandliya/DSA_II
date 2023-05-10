#include<iostream>
using namespace std;
int fib(int n){
int t0=0,t1=1,s,i;
for(int i=2;i<=n;i++){
    s=t0+t1;
    t0=t1;
    t1=s;
}
return s;
}
int main(){
    cout<<fib(7);
}