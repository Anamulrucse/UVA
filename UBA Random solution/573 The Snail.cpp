#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H,U,D,F;
    int count,t;
    double k;
    double cu;

    while(scanf("%d",&H)&&H)
    {
        scanf("%d%d%d",&U,&D,&F);
        count=0;
        cu=0;
        t=0;
        k=U;
        while(1)
        {
            count++;
            cu+=k;
            //printf("%f %f\n",cu,k);
            if(cu>H)
            {
                break;
            }
             cu-=D;
            if(cu<0)
            {
                break;
            }
            if(t==0)
            k=k-((F/100.0)*U);
            if(k<0)
            {
                t=1;
                k=0;
            }
        }
        if(cu>=H)
        {
            cout<<"success on day "<<count<<endl;
        }
        else
        {
            cout<<"failure on day "<<count<<endl;
        }
    }
return 0;
}
