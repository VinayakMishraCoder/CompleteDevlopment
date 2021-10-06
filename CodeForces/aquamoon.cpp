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
//     int n,negative=0,possitive=0;
//     cin>>n;
//     vector<pair<int,int>> final;
//     V(int) a,b,c,pt,ng;
//     asc(i,0,n)
//     {
//         int x;
//         cin>>x;
//         a.pb(x);
//     }
//     asc(i,0,n)
//     {
//         int x;
//         cin>>x;
//         b.pb(x);
//     }
//     asc(i,0,n)  c.pb(a[i]-b[i]);
//     asc(i,0,c.size())
//     {
//         if(c[i]>0)
//         {
//             possitive=+c[i];
//             pt.pb(i+1);
//         }
//         else if (c[i]<0)
//         {
//             negative=+abs(c[i]);
//             ng.pb(i+1);
//         }

//     }

//     if(negative==possitive)
//     {  int i=1;
//        while(possitive!=0&&negative!=0)
//        {
//                final.push_back(make_pair(pt[i],ng[i]));
//                i++;
//                possitive--;
//                negative--;
//        }

//        cout<<final.size()<<"\n";

//        for(auto x:final)
//   {
//     cout<<x.first<<" "<<x.second<<endl;
//     }
       
       

//     }

//     else{
//         cout<<-1<<"\n"<<0<<"\n";
//     }

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
         int q,count = 0,sa=0,sb=0;
        cin >> q;
        V(int) d,e;
        vector<pair<int, int>> ans;

        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            d.pb(x);
        }
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            e.pb(x);
        }

        

        for (int i = 0; i < q; i++)
        {
            sa += d[i];
            sb += e[i];
        }

        if (sa != sb)
        {
            cout << -1 << "\n";
            continue;
        }

        bool c = false;
        for (int i = 0; i < q; i++)
        {
            if (d[i] != e[i])
            {
                c = true;
                break;
            }
        }
        if (c == false)
        {
            cout << 0 << "\n";
            continue;
        }

        vector<pair<int, int>> pos;
        vector<pair<int, int>> neg;
        for (int i = 0; i < q; i++)
        {
            if (d[i] - e[i] < 0)
            {
                neg.pb(make_pair(abs(d[i] - e[i]), i + 1));
            }

            else if (d[i] - e[i] > 0)
            {
                pos.pb(make_pair(abs(d[i] - e[i]), i + 1));
            }
        }

        int i = 0, j = 0;
        bool termi = true;

        while (termi)
        {
            neg[j].first--;
            pos[i].first--;
            ans.pb(make_pair(pos[i].second, neg[j].second));
            if (neg[j].first == 0)
            {
                j++;
            }
            if (pos[i].first == 0)
            {
                i++;
            }
            int sum = 0;
            for (auto x : pos)
            {
                sum += x.first;
            }

            if (sum == 0)
            { 
                termi = false;
            }
            count++;
        }

        cout << count << endl;
        for (auto x : ans)
        {
            cout << x.first << " " << x.second << endl;  
        }
}
return 0;
}