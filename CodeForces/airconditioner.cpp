#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define asc(i,x,n) for(I i=x;i<n;i++)
#define dsc(i,x,n) for(I i=x;i>=n;i--)
#define W(t) int t;cin>>t;while(t--)
#define U unsigned
#define I long long int
#define S string
#define C char
#define D long double
#define A auto
#define B bool
#define pb push_back
#define V(x) vector<x>
#define mod 1000000007

V(int) search(int a[],int t[],int k,int n,int current,int min)
{
     if(n==0||k==0)
     {
         return ans.pb(0);
     }
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

W(t)
{
    int n,k,min=INT_MAX;
    cin>>n>>k;
    int a[k+1],t[k+1];
    V(int) ans;
    for(int i=1;i<=k;i++)
    {
        cin>>a[i];
    }
     for(int i=1;i<=k;i++)
    {
        cin>>t[i];
    }

    search(a,t,k,n,0,0);
 
   
}
return 0;
}