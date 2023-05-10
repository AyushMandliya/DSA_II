#include<iostream>
using namespace std;
/*int sum(int n){
    if(n==0)
    return 0;
    else 
    return sum(n-1)+n;
}*/
int Isum(int n){
    int s=0;
    int i;
    for(int i=1;i<=n;i++)
    s=s+i;
    return s;
}
int main(){
    int r;
    r=Isum(5);
    cout<<r<<endl;
    return 0;
}