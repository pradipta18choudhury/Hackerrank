#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) {
    int i=0;
    long ans=0;
    while(i<n)
    {
        long j=i+1;
        while(j<n && s[i]==s[j])
        {
            j++;
        }
        long length=j-i;
        for(j=length-1;j>=0 && (i+2*length-j)<n;--j)
        {
            if(s[i+2*length-j]==s[i])
            ans++;
            else
            break;
        }
        ans+=(long)length*(length+1)/2;
        i=i+length;
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
