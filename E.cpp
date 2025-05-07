
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long a,n,mn =-10;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
       if(a>mn)mn=a;
    }
     cout<<mn<<endl;
        }
