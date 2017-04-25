#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    queue<int>q;
    priority_queue<int>Pq;
    int n;
    int p,value;
    int s_T,q_T,pq_T;
    while(scanf("%d",&n)!=EOF)
    {
        s_T=0;
        q_T=0;
        pq_T=0;
        while(n--)
        {
            scanf("%d",&p);
            if(p==1){
                scanf("%d",&value);
                s.push(value);
                q.push(value);
                Pq.push(value);

            }
            if(p==2)
            {
                scanf("%d",&value);
                if(s.empty()){
                  if(s.empty())
                s_T=1;
                if(q.empty())
                q_T=1;
                if(Pq.empty())
                pq_T=1;
                continue;
                }

               if(s.top()!=value)
                s_T=1;
                if(q.front()!=value)
                q_T=1;
                if(Pq.top()!=value)
                pq_T=1;
                s.pop();
                q.pop();
                Pq.pop();
            }

        }
         if(s_T==1&&q_T==1&&pq_T==1)
        {
            cout<<"impossible"<<endl;
        }
        else if(s_T==0&&q_T==1&&pq_T==1)
        {
            cout<<"stack"<<endl;
        }
        else if(s_T==1&&q_T==0&&pq_T==1)
        {
            cout<<"queue"<<endl;
        }
        else if(s_T==1&&q_T==1&&pq_T==0)
        {
            cout<<"priority queue"<<endl;
        }
        else
        {
            cout<<"not sure"<<endl;
        }
         //cout<<s.top()<<endl;

        s=stack<int>();
        q=queue<int>();
        Pq=priority_queue<int>();
        //cout<<s.size()<<endl;

    }

}
