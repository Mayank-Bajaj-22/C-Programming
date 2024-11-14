#include <stdio.h>
int main(){
    int s;
    printf("Enter no. of students : ");
    scanf("%d",&s);
    int c;
    printf("Enter no. of column : ");
    scanf("%d",&c);
    int arr[s][c];
    for(int i=0;i<s;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        // printf("\n");
    }
    for(int i=0;i<s;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}