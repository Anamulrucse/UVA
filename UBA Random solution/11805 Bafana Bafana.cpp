#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,j,count;
    int N,K,P;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&N,&K,&P);
        count=0;
        for(j=K;P>count;j++)
        {
             //cout<<j<<endl;
            count++;
            if(j==N)
                j=0;
                //count++;

        }
        printf("Case %d: %d\n",i,j);

    }
return 0;
}
