#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a,b,c;
cin>>a;
cin>>b;
cin>>c;
if((a>b && a<c)|| (a<b && a>c))
{
  cout<<a;
}
else if((b>a && b<c)|| (b<a && b>c))
{
  cout<<b;
}
else
{
  cout<<c;
}

return 0;
}