// #include <stdio.h>
// int main(){
//     char str[] = "College Wallah";
//     // str = "Physics Wallah";  // individual char can like as shown below
//     // printf("%s",str);
//     str[0] = 'p';
//     printf("%s",str);
//     return 0;
// }

// In normal initilization , we can modify individual characters but not the entire string.
// Pointer initilization , we can modify entire string but not the individual characters.

// #include <stdio.h>
// int main(){
//     char* ptr = "College Wallah";
//     // ptr[0] = 'p';
//     // printf("%s",ptr);
//     ptr = "Physics Wallah";
//     printf("%s",ptr);
//     return 0;
// }

#include <stdio.h>
int main(){
    char str = "College Wallah";
    char* ptr = str;
    ptr = "Physics Wallah";
    printf("%s",ptr);
    return 0;
}