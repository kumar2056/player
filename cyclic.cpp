
#include <iostream>

using namespace std;

int main()
{
    int a[10000],b,c,d,v;
    cin>>b>>c;
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<c;i++)
    {
        
        d=b-1;
        v=a[d];
        while(d!=0)
        {
            a[d]=a[d-1];
            d=d-1;
        }
        a[0]=v;
    }
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
    }
