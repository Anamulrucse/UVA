#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[22];
    int boo[22];
    int n,m,c,max,t,s;
    int k=1;
    while(scanf("%d%d%d",&n,&m,&c)&&(n||m||c))
    {

        for(int i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        max=0;
        memset(boo, 0, sizeof boo);
        s=0;
        for(int i=1;i<=m;i++)
        {
            cin>>t;
            if(boo[t]==0)
            {
                s+=array[t-1];
                boo[t]=1;

            }
            else
            {
                boo[t]=0;
                s-=array[t-1];
            }
            if(max<s)
                max=s;
        }
        cout<<"Sequence "<<k++<<endl;
        if(c<max)
        {
            printf("Fuse was blown.\n");
        }
        else
        {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n",max);

        }

    printf("\n");

    }
}
