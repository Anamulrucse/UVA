#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,z=0;
    int count;
    while(scanf("%d",&n)==1)
    {
        if(n<0)
        break;
        i=1;
        count=0;
        while(1)
        {
            if(n<=i)
            break;
            i*=2;
            count++;
        }
        printf("Case %d: %d\n",++z,count);

    }
}
