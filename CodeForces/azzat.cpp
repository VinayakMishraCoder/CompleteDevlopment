// #include <bits/stdc++.h>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;
// #define asc(i,x,n) for(I i=x;i<n;i++)
// #define dsc(i,x,n) for(I i=x;i>=n;i--)
// #define W(t) int t;cin>>t;while(t--)
// #define U unsigned
// #define I long long int
// #define S string
// #define C char
// #define D long double
// #define A auto
// #define B bool
// #define pb push_back
// #define V(x) vector<x>
// #define mod 1000000007
// int main()
// {
// ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// W(t)
// {
//     double n;
//     cin>>n;
//     V(double) a,b;
//    long double sum=0,ans;
//     asc(i,0,n) 
//     {
//         double x;
//         cin>>x;
//         a.pb(x);
//     }
//     sort(a.begin(),a.end());
//     asc(i,0,n-1)
//     {
//         sum=sum+a[i];
//     }
//     ans=(sum/(a.size()-1)) + a[n-1];
//    cout <<fixed<<setprecision(9)<<ans<<endl;

// }
// return 0;
// }
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
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
W(t)
{
    int a,b,ran=0,count=0;
    cin>>a>>b;
    bool flag=true;
    V(int) arr;
    // vector<vector<int>> s;
    int s[a+1][a+1]={0};
    asc(i,0,a)
    {
        int x;
        cin>>x;
        arr.pb(x);
    }
  
    
        for(int i=0;i<a-1;i++)
        { 
            //   cout<<"*"<<endl;
            if(arr[i+1]-arr[i]>0)
            {
                //   s[ran].pb(arr[i+1]);
                //   s[ran].pb(arr[i]);
                s[ran][i+1]=arr[i+1];
                s[ran][i]=arr[i];                    
                //   i++;
            }
           
            else{
                if(flag==false) ran++;
                
                // s[ran].pb(arr[i]);
                s[ran][i]=arr[i];     
                flag=false;
            }
            // cout<<s.size()<<" ";
        }
        // cout<<endl;
        asc(i,0,a)
        {
           if(s[i][0]==0)
           {
               count++;
           }   
        }

        if(count==b) cout<<"YES\n";
        else cout<<"NO\n";
        cout<<count<<endl;

    
}
return 0;
}