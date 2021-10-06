#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    stack<pair<int, int>> s;
    s.push({intervals[0][0],intervals[0][1]});
    for (int i = 1; i < intervals.size(); i++)
    {
        pair<int,int> p;
        p=s.top();
        if(p.second>=intervals[i][0])
        {
            p.second=intervals[i][1];
            s.pop();
            s.push(p);
        }
        else{
            s.push({intervals[i][0],intervals[i][1]});
        }
    }
    int sd=s.size();
    vector<vector<int>> v;
    while(!s.empty())
    {
        pair<int,int> p;
        p=s.top();
        vector<int> tr;
        tr.push_back(p.first);
        tr.push_back(p.second);
        s.pop();
        v.push_back(tr);
    }
     return v;
}
int main()
{

    return 0;
}