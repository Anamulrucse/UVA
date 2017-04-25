#include<bits/stdc++.h>
using namespace std;
 vector<int>rank;
vector<int>p;
    class UnionFind {

    public:


UnionFind(int N) {
                rank.assign(N, 0);
                p.assign(N, 0);
                for (int i = 0; i < N; i++) p[i] = i;
                 }
        int findSet(int i) {
             return (p[i] == i) ? i : (p[i] = findSet(p[i])); }

        bool isSameSet(int i, int j)
        {
            return findSet(i) == findSet(j);
        }
        void unionSet(int i, int j) {

            if (!isSameSet(i, j)) { // if from different set
            int x = findSet(i), y = findSet(j);
            if (rank[x] > rank[y]) p[y] = x; // rank keeps the tree short
    else {
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
    int i,j;
    int cas=0;
    set<int>s;

    while(scanf("%d%d",&n,&m)&&(n&&m))
    {
        UnionFind ob(n+1);
        while(m--)
        {
            scanf("%d%d",&i,&j);
            ob.unionSet(i,j);
        }
        for(i=1;i<=n;i++)
            s.insert(ob.findSet(i));
    printf("Case %d: %d\n",++cas,s.size());
    s.clear();
    }



    }



