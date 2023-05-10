#include<iostream>
using namespace std;
int main(){
 char A[]="Ayush";
    char B[6];
    int i,j;
    for( i=0; A[i]!='\0'; i++){}
    i=i-1;
    for( j=0; i>=0; i--, j++)
   { B[j]=A[i]; }
   B[j]='\0';
   if (A[i]==B[j])
   cout<<"palindrome"<<endl;
   else
    cout<<"not palindrome"<<endl;
   cout<<B;
return 0;
}