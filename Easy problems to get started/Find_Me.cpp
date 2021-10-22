#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,k;
cin>>n>>k;
vector <int> a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
}

int ans=-1;
for(int i=0; i<n; i++)
{
  if(a[i]==k)
  {
    ans=1;
    break;
  }
}

cout<<ans;
return 0;
}