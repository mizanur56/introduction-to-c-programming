#include<stdio.h>

int main()
{
    int n;
    int x;
    int even=0,odd=0,positive=0,negative=0,zero=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &x);
    if(x%2==0)
    {
     even++;
    }
    else
    {
        odd++;
    }
    if(x>0)
    {
        positive++;
    }
    else if(x<0)
    {
        negative++;
    }
    else
    {
       zero++;
    }

    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zero: %d\n", zero);
  
    return 0;
}