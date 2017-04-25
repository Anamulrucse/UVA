#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    int array[101];
    array[0]=0;
    for(i=1;i<=100;i++)
        array[i]=(array[i-1]+i*i);


        while(scanf("%d",&n)&&n)
        {
            cout<<array[n]<<endl;
        }
        return 0;
}
