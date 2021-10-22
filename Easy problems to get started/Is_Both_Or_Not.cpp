#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
if(n%5==0 && n%11==0)
{
  cout<<"BOTH";
  return 0;
}
else if(n%5==0 || n%11==0)
{
  cout<<"ONE";
  return 0;
}
else
{
  cout<<"NONE";
}

return 0;
}