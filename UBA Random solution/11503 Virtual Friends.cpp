#include<bits/stdc++.h>
using namespace std;
map<string,string>p;
map<string,int>rank;
map<string,int>co;
class UnionFind {
public:
        string findSet(string i) {
             return (p[i] == i) ? i : (p[i] = findSet(p[i])); }

        bool isSameSet(string i, string j)
        {
            return findSet(i) == findSet(j);
        }
        void unionSet(string i, string j) {

            if (!isSameSet(i, j)) { // if from different set
            string x = findSet(i), y = findSet(j);
            if (rank[x] > rank[y]) {
                    if(co[x]>co[y])
            {
                co[x]+=co[y];
                co[y]=co[x];
            }
            else
            {
                co[y]+=co[x];
                co[x]=co[y];

            }

                    p[y] = x;

            }
            // rank keeps the tree short
    else {
            if(co[x]>co[y])
            {
                co[x]+=co[y];
                co[y]=co[x];
            }
            else
            {
                co[y]+=co[x];
                co[x]=co[y];

            }
            p[x] = y;

            if (rank[x] == rank[y])
                rank[y]++;
            }
        }
    }
};
int main()
{
    int n,m;
    string st,st1;
    scanf("%d",&n);
    while(n--)
    {
          UnionFind ob;
        scanf("%d",&m);
        getchar();
        while(m--)
        {


            cin>>st;
            cin>>st1;
            if(p[st]=="")
                {   p[st]=st;
                    co[st]=1;
                }
            if(p[st1]=="")
                {
                    p[st1]=st1;
                    co[st1]=1;
                }
            ob.unionSet(st,st1);
            cout<<co[ob.findSet(st)]<<endl;
        }
        p.clear();
        co.clear();
        rank.clear();

    }
}

