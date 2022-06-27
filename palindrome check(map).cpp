#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool palindrome(string s)
{
    for(ll i=0,j=s.size()-1; i<j; i++,j--)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
    }
    return true;
}
int main()
{
     ll i,t,k,n,j;

    map<string,int>mp;

    string a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
     cin>>a;
     if(palindrome(a))
        mp[a]++;

    }
    cout<<mp.size()<<endl;
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
