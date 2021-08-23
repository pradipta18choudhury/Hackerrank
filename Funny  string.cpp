#include<bits/stdc++.h>
using namespace std;

int main()
{
int q;
cin>>q;
while(q--)
{
    
    string s;
    cin>>s;
    string t;
    t=s;
    reverse(t.begin(),t.end());
    int temp=0;
    for(int i=0;i<s.length();i++)
    {
        if((abs(s[i]-s[i+1]))== abs(t[i]-t[i+1]))
        temp++;
        else {
        break;
        }
    }
    if(temp==s.length()-1)
    cout<<"Funny"<<endl;
    else {
    cout<<"Not Funny"<<endl;
    }
}
}
