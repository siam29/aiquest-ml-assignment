#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
   //vector<pair<int , int > >v;
   vector<int> v[n+1];
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x>=0)x=x%k;
        if(x==0)cout<<i<<" ";
        else
        v[x].push_back(i);
        //v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end());

    for(int i=n-1;i<n;i++){
        for(int j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
      }
    cout<<endl;
    }
  }
 
