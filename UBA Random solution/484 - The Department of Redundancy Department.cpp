#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int a[100000];
    string s;
    vector<int>v1;
    map<int,int>p;
    while(getline(cin,s)){
		istringstream is(s);
		N = 0;

		while(is>>a[N]) ++N;
		for(int i=0;i<N;i++)
        {
            p[a[i]]++;
            if(p[a[i]]==1)
            {
                v1.push_back(a[i]);
            }
        }


    }
     for(int i=0;i<v1.size();i++)
        {
           cout<<v1[i]<<" "<<p[v1[i]]<<endl;
        }
}
