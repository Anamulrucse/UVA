#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;
    int n,q;
    int t,item,z=0;
    int mid,min,max;
    while(scanf("%d%d",&n,&q)&&(n||q))
    {
        v1.push_back(-1);
        while(n--)
        {
            cin>>t;
            v1.push_back(t);

        }
        sort(v1.begin(),v1.end());
        printf("CASE# %d:\n",++z);
        while(q--){
                cin>>item;
                min=1;
                max=v1.size();
                mid=(min+max)/2;

            while(min<=max&&v1[mid]!=item)
            {
                if(item<v1[mid])
                    max=mid-1;
                else
                    min=mid+1;
                mid=int((max+min)/2);
            }

            if(v1[mid]==item){
                    while(v1[mid]!=-1)
                    {

                      if(v1[mid]!=v1[mid-1])
                        break;
                        mid--;
                    }
                printf("%d found at %d\n",item,mid);
            }
            else
                printf("%d not found\n",item);


    }
    v1.clear();
}
}
