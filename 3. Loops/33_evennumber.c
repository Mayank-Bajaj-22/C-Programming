#include <stdio.h>
int main(){
    int n;
    printf("Enater a nunmber : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2);{
        printf("%d",n);
    }
    return 0;
}