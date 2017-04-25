#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        cin>>st;
        sort(st.begin(),st.end());
        do
        {
            cout<<st<<endl;

        }while(next_permutation(st.begin(),st.end()));
        printf("\n");
    }

}
