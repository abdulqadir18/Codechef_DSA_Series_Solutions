#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
for(int i=1; i<=n; i++)
{
  if(i%2==0)
  {
    int x=i;
    for(;i<i+5;i++)
    {
      cout<<i<<" ";
    }
    cout<<"\n";
  }

  else
  {
    int x=i+5;
    for(;i>i-5;i--)
    {
      cout<<i<<" ";
    }
    cout<<"\n";
  }
}

return 0;
}