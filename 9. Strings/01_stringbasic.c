// #include <stdio.h>
// int main(){
//     char arr[5] = {'a','t','l','a','s'};
//     printf("%c",arr[1]);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     // char ch = 'A';
//     char ch = '0';    // 'A' -> 65 , 'a' -> 97 , '0' -> 48 , '9' -> 57 
//     int x = (int)ch;    // typecasting
//     printf("%d",x);
//     return 0;
// }

// character array with null character -> \0  , its a single character
// int -> 4 bytes -> 32 bits -> 2^32 number  [Range -> -2^31  to  2^31 - 1];
// char -> 1 bytes -> 8 bits -> 2^8 char 
// no two character are allwed together except \0 in char arr[];

#include <stdio.h>
int main(){
    char ch = '\0';  // null character
    int x = 0;
    char a = (char)x;
    printf("%d",a);
    return 0;
}