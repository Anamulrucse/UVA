#include<bits/stdc++.h>
using namespace std;
struct st
{
    char ch;
    string c;
    int len;
    string s;
};
bool compare(st ob1,st ob2)
{
    if(ob1.ch==ob2.ch){
        return ob1.c<ob2.c;

    }else return ob1.ch<ob2.ch;

}
int main()
{
     st ob;
     string a[100];
    string k,v2;
    vector<st>v1;
    vector<string>v;
    int n,t,max,z,l,m;
    int row;
    double row_d;

    while(scanf("%d",&n)==1)
    {
        t=n;
        getchar();
        max=0;
        while(t--)
        {
            getline(cin,k);
            ob.ch=k[0];
            ob.c=k;
            ob.len=k.length();
            ob.s=k;
            if(ob.len>max)
                max=ob.len;
            v1.push_back(ob);
            k.clear();

        }
    sort(v1.begin(),v1.end(),compare);
    max+=2;
    l=max;
    //cout<<l<<endl;
    max=60/max;
    if(l*max+l-2==60)
        max++;
    row_d=n/double(max);
    row=ceil(row_d);

    //cout<<row<<endl;
    z=0;
    m=1;

            for(int i=0;i<n;i++)
            {
                k+=v1[i].s;
                if(z>=row){

                    z=0;
                    m++;
                }
                a[z]+=k;
                t=abs(l-k.length());
                for(int j=1;j<=t;j++)
                    a[z]+=" ";
                    z++;
                k.clear();



            }
    cout<<"------------------------------------------------------------"<<endl;
            for(int i=0;i<row;i++)
            {
                cout<<a[i]<<endl;
                a[i].clear();

            }
        v1.clear();

        }

    }


