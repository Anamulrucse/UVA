#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[100][100];
    vector<int>row;
    vector<int>collum;
    int i,j,n,k,z;
    int count1,count2;
    int odd,even;
    while(scanf("%d",&n)&&n)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&array[i][j]);
            }
        }

        for(i=0;i<n;i++)
        {
            count1=0;
            count2=0;
            for(j=0;j<n;j++)
            {
                if(array[i][j]==1)
                    count1++;
                if(array[j][i]==1)
                    count2++;
            }
            row.push_back(count1);
            collum.push_back(count2);

        }
        count1=0;
        count2=0;
        for(i=0;i<n;i++)
        {
            if(row[i]%2)
            {
            count1++;
            z=i+1;
            }

        }
        for(i=0;i<n;i++)
        {
            if(collum[i]%2)
            {
            count2++;
            k=i+1;
            }

        }
        if(count1==1&&count2==1)
        {
            printf("Change bit (%d,%d)\n",z,k);
        }
        else if(count1==0&&count2==0)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<"Corrupt"<<endl;
        }
        row.clear();
        collum.clear();
    }
    return 0;
}
