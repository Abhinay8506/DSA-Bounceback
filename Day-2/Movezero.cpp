#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void movezero(vector<int>&v){
    int n=v.size();
    int i=0;
    for(int j=0;j<n;j++){
        if(v[j]!=0){
            swap(v[i],v[j]);
            i++;
        }
        
    }
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    int item;
    for(int i=0;i<n;i++){
        cin>>item;
        v.push_back(item);
    }
    movezero(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
