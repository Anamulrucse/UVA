#include<bits/stdc++.h>
using namespace std;

int main()
{
    char array[100000];
    list<char>output;
    int l;
    list<char>::iterator it=output.begin();
    while(gets(array)){
            it=output.begin();
        l=strlen(array);
    for(int i=0;i<l;i++){
         if(array[i]=='[')
         it=output.begin();
         else if(array[i]==']')
            it=output.end();
        else output.insert(it,array[i]);
        //else output.insert(it, st[i]);

        }
        for(it=output.begin();it!=output.end();it++)
            cout<<*it;
        printf("\n");
        output.clear();
    }



}
