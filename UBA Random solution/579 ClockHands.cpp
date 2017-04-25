#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H,M;
    double s,h,m;
    while(scanf("%d:%d",&H,&M)&&(H||M))
    {
        if(H==12)
            H=0;
        h=(H*5)+((5*M)/60.0);
        m=M;
        //cout<<h<<" "<<m<<endl;
        s=abs(h-m)*6;
        if(s>180)
        {
            printf("%.3lf\n",360-s);
        }
        else
        {
            printf("%.3lf\n",s);
        }


    }
}
