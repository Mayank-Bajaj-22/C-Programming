// #include <stdio.h>
// int main(){
//     char arr[] = {'H','e','l','l','o','\0'};
//     int i = 0;
//     while(arr[i] != '\0'){
//         printf("%c",arr[i]);
//         i++;
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     char ch = '\0';  // null character
//     int x = 0;
//     char a = (char)x;
//     printf("%d",a);
//     return 0;
// }


#include <stdio.h>
int main(){
    char str[] = "College Wallah is best\0";   // automatically bhi \0 lga deta h 
    int i = 0; 
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}