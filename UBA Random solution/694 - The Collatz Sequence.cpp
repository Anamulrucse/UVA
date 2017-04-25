#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int A,limit,i=0,count,z;
    while(scanf("%lld%lld",&A,&limit)==2)
    {

        if(A<0||limit<0)
            break;
            count=0;
            z=A;
        while(1)
        {
            if(A==1)
            {
                count++;
                break;

            }
            if(A%2==0)
            {
                count++;
                A=A/2;
            }
            else
            {
                count++;
                A=3*A+1;
                if(A>limit)
                    break;
            }
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",++i,z,limit,count);

    }
return 0;
}
