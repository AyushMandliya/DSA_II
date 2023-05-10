#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   pair<int , string >p;
   // p=make_pair(2,"Ayush");
    p={2,"Ayush"};
    //pair<int , string > &p1=p;
    pair<int , string > &p1=p;
    p1.first=5;
    cout<<p.first<<" "<<p.second<<endl;
    pair<int ,int >p_array[3];
    p_array[0]={1,2};
    p_array[1]={3,4};
    p_array[2]={4,5};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
         }
       /* pair<int ,string>p;
        cin>>p.first;
        cout<<p.first;*/
    
    
};