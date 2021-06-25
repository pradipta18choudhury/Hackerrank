#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
int curr1[26]={0},curr2[26]={0};
int count=0;
    for(int i=0;a[i]!='\0';i++)
    
        curr1[a[i]-'a']++;
    for(int j=0;b[j]!='\0';j++)
    
        curr2[b[j]-'a']++;
    
    for(int k=0;k<26;k++)
    {
        count+=abs(curr1[k] - curr2[k]);
    }
return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
