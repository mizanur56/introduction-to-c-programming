#include<stdio.h>

// int main()
// {
//     int a ,b ,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b && b>c)
//     {
//         printf("%d",a);
//     }
//     else if(b>a && c>b)
//     {
//         printf("%d",b);
//     }
//     else
//     {
//         printf("%d",c);
//     }
//     return 0;
// }

int main()
{
 int x=5;
 int y=4;

 if(x>=y && x<y+4)
 {
    if(y<5)
    {
        printf("hi ");
    }
    else if(y<10)
    {
        printf("hi ");
    }
 }
 else {
    printf("hello ");
 }

 return 0;
}