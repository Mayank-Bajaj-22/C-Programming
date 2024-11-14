// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[] = "College Wallah is best";
//     // printf("%s",str);
//     puts(str);   // puts for printing only for strings
//     puts("Hello Everyone");
//     return 0;
// }


#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    // scanf("%s",str);   // no & for string   // only the first word will be considered
    // scanf("%[^\n]s",str);
    gets(str);   // entire sentence can be input
    printf("Your input was : %s",str);
    return 0;
}