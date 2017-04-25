#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    double s;
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        s=0;
        n-=180000;
        if(n>0)
        {
            if(n>300000)
            {
                n-=300000;
                s+=300000*(10/100.0);
            }
            else
            {
                s+=n*(10/100.0);
                n-=300000;
            }
            if(n>0)
            {
                if(n>400000)
                {
                    n-=400000;
                    s+=400000*(15/100.0);
                }
                else
                {
                    s+=n*(15/100.0);
                    n-=400000;
                }
                    if(n>0)
                    {
                                    if(n>300000)
                                {
                                    n-=300000;
                                    s+=300000*(20/100.0);
                                }
                        else
                            {
                                    s+=n*(20/100.0);
                                    n-=300000;
                            }
                            if(n>0)
                            {
                                s+=n*(25/100.0);
                            }
                    }

            }

        }
        s=ceil(s);
        if(s>2000||s==0)
        printf("Case %d: %.0lf\n",i,s);
        else
        {
            printf("Case %d: %d\n",i,2000);
        }

    }
}
