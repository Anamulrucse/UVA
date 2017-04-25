#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0;
    long long int b=1;
    long long int array[100];
    long long int n,c;
    for(int i=1;i<=80;i++)
    {
        c=a+b;
        a=b;
        array[i]=c;
        b=c;

    }
    while(scanf("%lld",&n)&&n)
    {
        cout<<array[n]<<endl;

    }
}
