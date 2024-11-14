#include <stdio.h>
int main(){
    int n;
    printf("Enter Percentage : ");
    scanf("%d",&n);
    // more than 80 -> A
    // more than 60 -> B
    // more than 40 -> C

    // if(n>80){
    //     printf("A grade\n");
    // }
    // else if(n>60){
    //     printf("B grade\n");
    // }
    // else if(n>40){
    //     printf("C grade\n");
    // }
    // else{
    //     printf("D grade\n");
    // }

    if(n>80){
        printf("A grade\n");
    }
    else{
        if(n>60){
            printf("B grade\n");
        }
        else{
            if(n>40){
                printf("C grade");
            }
            else{
                printf("D grade");
            }
        }
    }
    return 0;
}