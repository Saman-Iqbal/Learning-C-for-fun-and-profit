#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number =");
    scanf("%d", &x);
    if(x >= 1) {
        printf("Natural Number");
    }
    else {
        printf("Not Natural Number");
    }
}