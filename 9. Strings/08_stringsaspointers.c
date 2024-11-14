#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "College Wallah";
    char* ptr = str;  //  ptr now points to str[0]
    int i = 0;
    while(*ptr != '\0'){
        printf("%c",*ptr);
        ptr++;  // 1 bytes only difference
        i++;
    }
    return 0;
}
// ptr -> stands for address
// *ptr -> value fetech

// char str[] = "Physics Wallah";
// printf("%s",str);
// str = "College Wallah";  // error 