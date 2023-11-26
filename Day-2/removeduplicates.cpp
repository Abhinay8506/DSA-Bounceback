#include<bits/stdc++.h>

#include <iostream>

using namespace std;
int removeduplicates(vector<int>&v){
    int i=1;
    int n=v.size();
    for(int j=1;j<n;j++){
        if(v[j]!=v[j-1]){
            v[i++]=v[j];
            
        }
    }
    return i;
    
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
    int s=removeduplicates(v);
    for(int i=0;i<s;i++){
        cout<<v[i]<<' ';
    }

    return 0;
}
