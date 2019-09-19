#include <iostream>
using namespace std;

int main()
{
    int i=0,j=0,k=0,x=0,rem=0,sum=0,count=0;
    cin >> i >> j >> k;
    for(i; i<=j; i++)
    {
        x=i;
        while(x!=0)
        {
            rem=x%10;
            sum=(sum*10)+rem;
            x=x/10;
        }
        if(abs(i-sum)%k==0)
            count=count+1;
        sum=0;
    }
    cout << count;
    return 0;
}
