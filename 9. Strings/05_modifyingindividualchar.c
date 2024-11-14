#include <stdio.h>
int main(){
    char str[] = "Mayank Bajaj";
    str[0] = 'M';
    str[2] = 97;
    printf("%c\n",str[0]);
    printf("%d\n",str[2]);
    printf("%c",str[2]);
    return 0;
}


// arr[i] = *(arr + i) = *(i + arr) = i[arr]  , this all give same results