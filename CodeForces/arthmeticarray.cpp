#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum==n)
        {
            cout<<0<<" \n";
        }
        else if(sum>n)
        {
            cout<<sum-n<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
        
    }
}