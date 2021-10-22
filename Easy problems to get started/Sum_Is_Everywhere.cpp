#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int od=0,ev=0;
for(int i=1; i<=n*2; i+=2)
{
  od=od+i;
}
for(int i=2; i<=n*2; i+=2)
{
  ev=ev+i;
}
cout<<od<<" "<<ev;
return 0;
}