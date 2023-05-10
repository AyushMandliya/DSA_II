#include<iostream>
using namespace std;
int main(){
   /* char A[]="finding";
    int H[26],i;
    for(i=0;A[i]!='\0';i++){
        H[A[i]-97]+=1;
    }
    for(i=0;i<26;i++){
        if(H[i]>1)
       { cout<<i+97<<endl;
        cout<<H[i]<<endl;}
    }*/
    char A[]="finding";
    long int H=0,x=0,i;
    for ( i = 0; A[i] !='\0';i++){
    x=1;
    x=x<<A[i]-97;
    if(x & H>0){
    cout<<A[i]<<" is duplicate";
    }
    else 
    H= x :: H;
    }

return 0;
}