#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(scanf("%d",&n)&&n){

            map<int,int>p;
            int visited[n];
            vector<int>adjlist[n];
            int bicolo=1;
            int source;
            int M;
            scanf("%d",&M);
                for(int i=0;i<M;i++){
                        int a,b;
                        scanf("%d%d",&a,&b);
                        if(i==0)
                            source=a;
                        adjlist[a].push_back(b);
                        adjlist[b].push_back(a);
                    }

                    memset(visited,0,sizeof visited);
                    visited[source]=1;
                    queue<int>bfs;
                    bfs.push(source);
                    p[source]=0;

                    while(!bfs.empty()){
                        int u=bfs.front();
                        bfs.pop();
                        for(int i=0;adjlist[u].size()>i;i++){
                            int v=adjlist[u][i];
                            if(!visited[v]){
                                visited[v]=1;
                                bfs.push(v);
                                if(p[u]==0)
                                    p[v]=1;
                                else
                                    p[v]=0;
                                }
                            else
                                if(p[u]==p[v])
                            {
                                bicolo=0;
                                break;
                            }
                      }
                      if(bicolo==0)
                        break;
                    }
                if(bicolo)
                    cout<<"BICOLORABLE."<<endl;
                else
                    cout<<"NOT BICOLORABLE."<<endl;
            p.clear();
            bfs=queue<int>();
            for(int i=0;i<=n;i++)
            {
                adjlist[i].clear();
            }


        }

}
