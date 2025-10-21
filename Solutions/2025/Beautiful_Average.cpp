#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin>>n;
  int max = 0;
  for (int i = 0;i<n;i++)
  {
    int j;
    cin>>j;
    if (max < j)
    {
      max = j;
    }
  }
  cout<<max<<endl;
}

int main()
{
  int t;
  cin>>t;
  for (int i = 0;i<t;i++)
  {
    solve();
  }
  return 0;
} // problem : https://codeforces.com/problemset/problem/2162/A
