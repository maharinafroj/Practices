

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define debug(x) cerr<<"-"<<#x<<":"<<x<<endl;
#define debugs(x,y) cerr<<"-"<<#x<<":"<<x<<" "<<#y<<":"<<y<<endl;
#define sesh_to return 0;
#define optimise() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const long long MAX = 50000;
long long P[10000];
long long S = 0;
static bool prime[MAX + 1];
void sieve()
{
    prime[0] = true;
    prime[1] = true;

    for (long long i = 2; i <= MAX; i++)
    {
        if (!prime[i])
        {
            P[S++] = i;
            for (long long j = i * i; j <= MAX; j += i)
            {
                prime[j] = true;
            }
        }
    }
}
bool isPrime(int n)
{
    if(n<2)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
int gcd(int x,int y)
{
    return x?gcd(y%x,x):y;

}


int main()
{
    optimise();
   // vector<ll>v;
    ll  t,a,b,i;
     cin>>t;
    //v.clear();
    while(t--)
    {
        cin>>a>>b;
         vector<ll>v;
        for(i=a;i<=b;i++)
        {
            if(isPrime(i))
            {
               v.push_back(i);
            }
        }
        for(auto x:v)
        {
            cout<<x<<endl;
        }
    }

    sesh_to
}

