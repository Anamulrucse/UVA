#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,j,k;
    int array[10][10];
    int array2[10][10];
    cin>>n;
    while(n--)
    {
        for(i=0;i<5;i++)
        {
            for(j=0;j<=i;j++)
            {
                scanf("%d",&array[i][j]);
            }
        }
        j=0;
        k=0;
        for(i=0;i<9;i++)
        {
            if(i%2==0)
            {
                array2[0][i]=array[4][j];
                j++;
            }
            else
            {
                if(array[3][k]==array[4][j-1]+array[4][j])
                {
                    array2[0][i]=0;
                }
                else
                {
                    array2[0][i]=(array[3][k]-(array[4][j-1]+array[4][j]))/2;
                }
                k++;
            }

        }
        k=9;
        for(i=1;i<9;i++)
        {

            for(j=0;j<k-1;j++)
            {
                array2[i][j]=array2[i-1][j]+array2[i-1][j+1];
            }
            k--;
        }
        k=1;
        for(i=8;i>=0;i--)
        {
            for(j=0;j<k;j++)
            {
                if(j==0)
                cout<<array2[i][j];
                 else
                cout<<" "<<array2[i][j];
            }
            cout<<endl;
            k++;

        }
        }
    return 0;
}
