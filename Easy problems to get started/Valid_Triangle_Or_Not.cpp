#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b,c;
cin>>a>>b>>c;
if(a>b+c || b>a+c || c>a+b)
{
  cout<<"NO";
}
else
{
  cout<<"YES";
}

return 0;
}