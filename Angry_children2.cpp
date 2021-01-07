import java.util.*;

public class Main {

    
    public static void main(String[] args) {
        // Write your code here
Scanner sc=new Scanner(System.in);

int n=sc.nextInt();
long sum[]=new long[n];
int k=sc.nextInt();
long[] arr=new long[n];
for(int i=0;i<n;i++)
{
    arr[i]=sc.nextLong();

}
Arrays.parallelSort(arr);
for(int i=0;i<n;i++)
{
    if(i>=1)
    {
    sum[i]=sum[i-1]+arr[i];
    }
    else 
    {
        sum[i]=arr[i];
    }
}
long cost=0;

for(int i=1;i<k;i++)
{
    cost=cost+(i*arr[i])-sum[i-1];
    
}
long ans=cost;
for(int i=1;i<n-k;i++)
{
cost=cost-2*(sum[k+i-2]-sum[i-1])+(k-1)*(arr[i-1])+(k-1)*(arr[k+i-1]);
if(ans>cost)
{
    ans=cost;
}
}
System.out.println(ans);
    }


}
