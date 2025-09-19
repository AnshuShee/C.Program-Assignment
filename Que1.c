#include <stdio.h>

int main()
{
    int n;
    printf("enter no. of pattern to print : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("* ");
    }
    printf("\n"); 

    return 0;
}

