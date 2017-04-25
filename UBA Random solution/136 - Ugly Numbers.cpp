#include<bits/stdc++.h>
using namespace std;
int ugli(long long int n)
{
    while(n!=1)
    {
        if(n%2==0)
            n/=2;
        else if(n%3==0)
            n/=3;
        else if(n%5==0)
            n/=5;
        else
            return 0;
    }
    return 1;


}
int main()
{
    long long int i;
    int count=1;
    for(i=2;count!=1500;i++)
    {
        if(ugli(i)==1)
            count++;
            //cout<<count<<endl;
    }
cout<<i<<endl;
    cout<<count<<endl;
}

