#include <stdio.h>
int main(){
    int ram, shyam, ajay;
    printf("Enter 1st age : ");
    scanf("%d",&ram);
    printf("Enter 2nd age : ");
    scanf("%d",&shyam);
    printf("Enter 3rd age : ");
    scanf("%d",&ajay);
    if(ram<shyam && ram<ajay){
        printf("Ram is youngest %d",ram);
    }
    if(shyam<ram && shyam<ajay){
        printf("Shyam is youngest %d",shyam);
    }
    if(ajay<ram && ajay<shyam){
        printf("Ajay is youngest %d",ajay);
    }
    return 0;
}