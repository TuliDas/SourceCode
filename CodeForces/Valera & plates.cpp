#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,k,c,i,x;
    while(cin>>n>>m>>k)
    {
        c=0;
        for(i=0; i<n; i++)
        {
            cin>>x;
            if(x==1)
            {
                if(m>0)
                    m--;
                else
                    c++;
            }
            else if(x==2)
            {
                if(k>0)
                    k--;
                else if(m>0)
                    m--;
                else
                    c++;
            }

        }
        cout<<c<<endl;

    }
    return 0;
}

