#include<iostream>
using namespace std;
int NCR(int n,int r){
    if(n==r || r==0)
    return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);
}
int main(){
    cout<<NCR(4,2);
}