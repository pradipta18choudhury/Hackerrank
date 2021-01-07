#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

long countWaysToMakeChange(long denominations[], long numDenominations, long value){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
    long x,y;
    long output[value+1][numDenominations+1];
    for(long i=0;i<(numDenominations+1);i++)
        output[0][i]=1;
    
    for(long i=1;i<value+1;i++)
    {
        for(long j=0;j<numDenominations;j++)
        {
             x = (i-denominations[j] >= 0) ? output[i - denominations[j]][j] : 0; 
  
            // Count of solutions excluding S[j] 
            y = (j >= 1) ? output[i][j - 1] : 0; 
  
            // total count 
            output[i][j] = x + y; 
        }
    }
    return output[value][numDenominations - 1];
}


int main(){

    long value;
  cin >> value;


  long numDenominations;
  cin >> numDenominations;
  long* denominations = new long[numDenominations];
  for(long i = 0; i < numDenominations; i++){
    cin >> denominations[i];
  }
  
  cout << countWaysToMakeChange(denominations, numDenominations, value);
  cout<<endl;

  return 0;

}

