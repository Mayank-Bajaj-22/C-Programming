#include <stdio.h>
int main(){
    // char s1[] = "Physics Wallah";
    // char* s2 = s1;   // s2 is a swallow copy
    // s1[0] = 'M';
    // printf("%s",s2);
    char s1[] = "Physics Wallah";
    char s2[] = "Physics Wallah";
    s2[0] = 'M';
    printf("%s\n",s1);
    printf("%s\n",s2);
    return 0;
}