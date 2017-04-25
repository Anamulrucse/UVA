#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    vector<int>v1;
    string st;
    scanf("%d",&n);
    getchar();
    map<char,int>p;
    map<int,char>k;
    for(int i=65,j=0;i<=90;i++)
    {
        p[i]=j++;
        p[i+32]=j++;
    }
    while(n--){
        cin>>st;
        for(i=0;i<st.length();i++)
        {
            v1.push_back(p[st[i]]);
            k[p[st[i]]]=st[i];
        }
        st.clear();
        sort(v1.begin(),v1.end());
    do {
            for(i=0;i<v1.size();i++)
            {
                printf("%c",k[v1[i]]);
            }
            printf("\n");

    }while( next_permutation(v1.begin(),v1.end()));
    st.clear();
    v1.clear();
    k.clear();
}
}

