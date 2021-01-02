#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int i=1;
    for(i=1;i<=n;i++)
    {
        int space=1;
        while(space<=n-i)
        {
            cout<<" ";
            space++;
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
