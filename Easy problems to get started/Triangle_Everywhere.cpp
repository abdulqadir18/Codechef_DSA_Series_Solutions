#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long a,b,c;
cin>>a>>b>>c;
if(a>b+c || b>a+c || c>a+b)
{
  cout<<-1;
}
else if(a==b && b==c)
{
  cout<<1;
}
else if(a!=b && b!=c && c!=a)
{
  cout<<3;
}
else{
  cout<<2;
}

return 0;
}