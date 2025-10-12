#include<stdio.h>

int main()
{
    char X;
    scanf("%c",&X);
    if(X>='0' && X<='9') {
        printf("IS DIGIT");
    } else {
        printf("ALPHA\n");
        if(X>='A' && X<='Z') {
            printf("IS CAPITAL");
        } else if(X>='a' && X<='z') {
            printf("IS SMALL");
        }

    }
    return 0;
}