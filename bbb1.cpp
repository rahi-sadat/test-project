#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void RUHAN(){
 ll n;   cin>>n;
vector<ll>v(n);
 for(int i=0;i<n;i++)
{
cin>>v[i];
}
    for(auto x:v)  if(x>=2) cout<<x<<" ";  
    cout<<endl; 
}
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--) RUHAN();
}