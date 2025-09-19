#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
for (int i = 0; i < n; i++) {
    printf("%c\t", 'A' + i);
    
}
return 0;
}