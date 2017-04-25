#include<bits/stdc++.h>
using namespace std;
vector<long long int>v1;
vector<int>v2;
bitset<10000010> bs;
void sieve()
{
    bs.set();
    bs[0]=bs[1]=0;
    for(long long int i=2;i<=1001100;i++)
        if(bs[i])
    {
        for(long long int j=i*i;j<=1001100;j+=i)
            bs[j]=0;
        v1.push_back((int)i);
       //cout<<i<<" ";
    }
}
int main()
{
    unsigned long long int low,high,k;

    unsigned long long int N,i,j;
    cin>>N;
    sieve();
    while(N--)
    {
        scanf("%llu%llu",&low,&high);
        int count=0;
        for(i=0;i<sqrt(high)&&v1[i]<1000000;i++)
        {
            k=0;
            for(j=2;k<=high;j++)
            {
                //cout<<v1[i]<<endl;
               k=pow(v1[i],j);
               if(k==0)
                break;
               if(k>=low&&k<=high)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }

return 0;

}
