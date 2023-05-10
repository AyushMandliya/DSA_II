#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//koi sa bhi datatype daal sakte hai
void Printvec(vector<int>&v){                   //&v  -> matlab refrence pass kar rehe hai to ans 7 9 6 aayega
    cout<<"Size of vector : "<<v.size()<<endl;         //tc -> O(1) isse vector ki size pata chalti hai
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }v.push_back(6);
    cout<<endl;   
}

int main(){
    //int a[10];    already memory reserved     static
   /* vector<int>v;   //memory reserved on the time at which we declare our work      dynamic size
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
         int x;
         cin>>x;
         v.push_back(x);  //tc=O(1)
    }
    Printvec(v);
   */
    vector<int>v;        //v(10,4); matlab 10 number dalne hai jinki value 4 hai
    v.push_back(7);      //last main value dalta hai.  tc->O(1)
    v.push_back(9);
    //v.pop_back();     //last main se value nikalta hai . tc->O(1)
    //Printvec(v);
    vector<int>v2=v;    //tc->O(n)   //&v  -> yaha bhi kr sakte hai ,refrence pass to ans-> 7 9 3 6 aayega
    v2.push_back(3);       
    Printvec(v); 
    Printvec(v);
    Printvec(v2);
return 0;
}