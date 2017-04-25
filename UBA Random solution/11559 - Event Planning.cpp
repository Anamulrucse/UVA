#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,B,H,w,i,j;
    int c_h,b_w;
    int min;
    int s;
    while(scanf("%d%d%d%d",&N,&B,&H,&w)==4)
    {
        min=B+1;
        for(i=0;i<H;i++)
        {
            cin>>c_h;
            for(j=0;j<w;j++)
            {
                cin>>b_w;
                if(N<=b_w)
                {
                    s=c_h*N;
                    if(s<min)
                        min=s;
                    //cout<<"s= "<<s<<endl;
                }
            }

        }
        if(min<=B)
            cout<<min<<endl;
        else
            cout<<"stay home"<<endl;
    }
}
