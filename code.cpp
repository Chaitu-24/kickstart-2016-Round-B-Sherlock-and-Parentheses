#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    long int l,r;
    cin>>n;
    for(int i=0;i<n;i++)
    {   long int m;
        long double p;
        cin>>l>>r;
        if(l<r)
        m=l;
        else
        m=r;
        p=(m*(m+1))/2;
     printf("Case #%d: %.0Lf\n",i+1,p);
     
    }
    return 0;
}
