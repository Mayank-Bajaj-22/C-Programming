// #include <stdio.h>
// #include <string.h>
// int main(){
//   char* str = "Mayank Bajaj";  // \0 bhi length me include hoga
//   int x = strlen(str);
//   printf("%d",x);
//   return 0;
// }


#include <stdio.h>
#include <string.h>
int main(){
  char s1[12] = "Mayank Bajaj";
  char s2[12] = "";
  strcpy(s2,s1);
  printf("%s",s2);
  return 0;
}


// strlen(char* str)  ->  Returns the length of string
// strcpy(char* s1, char* s2)  ->  Copies the contents of string s2 to s1
// strcat(char* s1, char* s2)  ->  Concat s1 string with s2 and stores the result in s1
// strcmp(char* s1, char* s2)  ->  Compares the two strings
// strncpy(char* s1, char* s2, int len)  ->  Copy substring of size len starting from s1 character pointer into s2