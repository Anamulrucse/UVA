#include<bits/stdc++.h>
using namespace std;



    int N =1000000, status[1000000];
int main() {
        int i, j, sqrtN,n,count;
            for( i = 2; i <= N; i++ ) status[i] = 0;
        sqrtN = int( sqrt((double) N ));


                for( i = 3; i <= sqrtN; i += 2 ) {
                if( status[i] == 0 ) {

                for( j = i * i; j <= N; j += i + i )
                        status[j] = 1;
                        }
                }
            while(scanf("%d",&n)==1&&n)
            {
                count=0;
                for(i=2;i<=n/2;i++)
                {
                    if((i%2||i==2)&&((n-i)%2))
                    {
                        if(status[i]==0&&status[n-i]==0)
                        {
                            cout<<n<<":"<<endl;
                            cout<<i<<"+"<<n-i<<endl;
                            count=1;
                            break;
                        }
                    }
                }
                if(n==4)
                {
                    cout<<n<<":"<<endl;
                            cout<<"2"<<"+"<<"2"<<endl;
                            count=1;
                }
                if(count==0)
                    {
                        cout<<n<<":"<<endl;
                        cout<<"NO WAY!"<<endl;
                    }



            }
        return 0;
}



