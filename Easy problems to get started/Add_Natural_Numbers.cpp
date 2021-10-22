#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long n;
cin>>n;
long sm=0;
for(long i=1; i<=n; i++)
{
  sm+=i;
}
cout<<sm;
return 0;
}
