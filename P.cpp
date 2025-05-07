#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long row;
    cin>>row;
    for(long long line=row; line>=1; line--)
    {
        for(long long star=line;star>=1;star--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
