# include<bits/stdc++.h>
using namespace std;
int b[26]={0};

int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k;

cin>>n>>k;
char a[n];
for (int  i = 0; i < n; i++)
{
    cin>>a[i];
}

for (int i = 0; i < 26; i++)
{
    b[int(a[i])-97]++;
}
sort(b,b+26);
int sum=0;
for (int i = 25; i >= 0; i--)
{
    if((k-b[i])>0)
    {
        sum=sum+(b[i]*b[i]);
        k=k-b[i];
    }
    else if((k-b[i])==0)
    {
        sum=sum+(b[i]*b[i]);
        break;
    }
}

 cout<<sum<<endl;


return 0;
}