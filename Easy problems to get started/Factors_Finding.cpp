#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int x=1e6+2;
vector <int> a(x);
for(int i=0; i<x; i++)
{
  a[i]=-1;
}

int cnt=0;
for(int i=1; i<=n; i++)
{
  if(n%i==0)
  {
    a[cnt]=i;
    cnt++;
  }
}
cout<<cnt<<"\n";
for(int i=0; i<cnt; i++)
{
  cout<<a[i]<<" ";
}

return 0;
}