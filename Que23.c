#include<stdio.h>
int main(){

    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        for(int k=0; k<i; k++){
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }


    return 0;
}