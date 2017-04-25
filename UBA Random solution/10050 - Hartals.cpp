#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[3655];
    int T,N,array1[105],k,i;
    int count=0;
    cin>>T;
    while(T--)
    {
        scanf("%d",&N);
        scanf("%d",&k);
        for(i=0;i<k;i++)
        {
            scanf("%d",&array1[i]);
        }
        memset(array,0,sizeof(array));
        count=0;
        for(i=6;i<=N;i=i+6)
        {
            array[i]=1;
            array[++i]=1;

        }
        for(i=0;i<k;i++)
        {
            for(int j=array1[i];j<=N;j+=array1[i])
            {
                //cout<<array[j]<<endl;
                if(array[j]==0)
                   {
                       count++;
                    array[j]=1;
                   }

            }
        }
        cout<<count<<endl;

    }

}
