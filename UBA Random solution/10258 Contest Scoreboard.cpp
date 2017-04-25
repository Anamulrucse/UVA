#include<bits/stdc++.h>
using namespace std;

struct st
{
    int a,b,c;
    int k[11];
    int d[11];
};
bool compare(st ob1,st ob2)
{
    if(ob1.a==ob2.a){
            if(ob1.b==ob2.b){
                return ob1.c<ob2.c;

            }else return ob1.b<ob2.b;


    }else return ob1.a>ob2.a;
}


int main()
{
    int N;
    char ch;
    int a[5];
    string t;
    vector<int>v1;
    int T_N,P_N,P_T;
    int n,i,j;
    scanf("%d",&n);
    getchar();
    getline(cin,t);
    while(n--)
    {

        vector<st>v(105);
        for(i=0;;i++)
        {
            getline(cin,t);
                if(t.length()==0)
                        break;
            ch=t[t.length()-1];


		istringstream is(t);
		N = 0;

		while(is>>a[N]) ++N;

		T_N=a[0];
		P_N=a[1];
		P_T=a[2];
        v[T_N].c=T_N;
		if(ch=='C')
        {
            if(v[T_N].k[P_N]==0)
            {
                v[T_N].a++;
                v[T_N].k[P_N]=1;

            v[T_N].b+=P_T+v[T_N].d[P_N];
            }

        }
        if(ch=='I')
        {
            v[T_N].d[P_N]+=20;

        }
}
    sort(v.begin(),v.end(),compare);
   for(i=0;i<=104;i++)
   {
       if(v[i].c!=0)
       cout<<v[i].c<<" "<<v[i].a<<" "<<v[i].b<<endl;

   }
   v.clear();
   if(n!=0)
    printf("\n");

    }
}

