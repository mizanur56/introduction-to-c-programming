#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    int first_digit = num/1000;
    if(first_digit %2 == 0)
    {
        printf("even");
    } else {
        printf("odd");
    }
    return 0;
}