//tail recurrsion
#include<iostream>
using namespace std;
void fun(int n)
{
    if (n>0)    //while(n>0)
    {
        cout<<n;
        fun(n-1);   //n--
    }
}
int main(){
    fun(3);
}