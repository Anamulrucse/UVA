#include<bits/stdc++.h>
using namespace std;
class Unionfind
{
    vector<int>p;
    vector<int>rank;

public:
    Unionfind(int N)
    {
        rank.assign(N,0);
         p.assign(N,0);
         for(int i=0;i<N;i++)
            p[i]=i;

    }
    int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
    bool isSameSet(int i,int j)
    {
        return (findSet(i)==findSet(j));
    }
    void unionSet(int i,int j)
    {
        if(!isSameSet(i,j))
        {
            if (!isSameSet(i, j)) { // if from different set
                int x = findSet(i), y = findSet(j);
                if (rank[x] > rank[y]) p[y] = x; // rank keeps the tree short
                else { p[x] = y;
                if (rank[x] == rank[y]) rank[y]++;}
            }

        }
    }

};
int main()
{
    int n,t;
    int array[3];
    int success,unsuccess;
    int an;
    char ch;
    string st,st1;
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&t);
        Unionfind ob(t+1);
        getchar();
        success=0;
        unsuccess=0;
        while(getline(cin,st))
        {
            if(st.length()==0)
               break;
                ch=st[0];
                for(int i=1;i<st.length();i++)
                    st1+=st[i];

                st.clear();
                an=0;
                istringstream is(st1);
                  while(is>>array[an]) ++an;

                    st1.clear();

                    if(ch=='c')
                    {
                        ob.unionSet(array[0],array[1]);
                    }

                    if(ch=='q')
                    {
                        if(ob.isSameSet(array[0],array[1]))
                        success+=1;
                        else
                            unsuccess+=1;
                    }


        }
        if(n!=0)
            printf("%d,%d\n\n",success,unsuccess);
        else
            printf("%d,%d\n",success,unsuccess);
    }



}
