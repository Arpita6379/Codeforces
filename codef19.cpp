#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int ans=0;
        ans=a;
        long int rem=b%3;
        ans+=b/3;
        if(rem==1&&c<2)
            cout<<"-1"<<endl;
       else if(rem==2&&c<1)
            cout<<"-1"<<endl;
        else
        {
            c=c+rem;
        ans+=c/3;
        int r=c%3;

        if(r!=0)
            ans++;
        cout<<ans<<endl;
        }
    }

}
