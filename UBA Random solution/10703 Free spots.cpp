#include<bits/stdc++.h>
using namespace std;
int array[501][501];
int main()
{
 int w,h,n,x1,y1,x2,y2;
 int i,j;
 int a,b,c,d;
 int count;
 while(scanf("%d%d%d",&w,&h,&n)&&(n||(w&&h)))
 {
     for(i=0;i<h;i++)
     {
         for(j=0;j<w;j++)
         {
             array[i][j]=0;
         }
     }
     while(n--)
     {
         scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
         a=(x1>x2)?x2:x1;
         b=(x1<x2)?x2:x1;
         c=(y1>y2)?y2:y1;
         d=(y1<y2)?y2:y1;

         for(i=c-1;i<d;i++)
         {
             for(j=a-1;j<b;j++)
             {
                 array[i][j]=1;
             }
         }

     }
     count=0;
     for(i=0;i<h;i++)
     {
         for(j=0;j<w;j++)
         {
            if(array[i][j]==0)
                count++;
         }

     }
    if(count==0)
        cout<<"There is no empty spots."<<endl;
    else if(count==1)
        cout<<"There is one empty spot."<<endl;
    else
        printf("There are %d empty spots.\n",count);
 }
 return 0;

}
