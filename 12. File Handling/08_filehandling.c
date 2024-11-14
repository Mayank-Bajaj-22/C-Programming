// memory reallocation
#include <stdio.h>
int main(){
  // FILE* ptr = fopen("mayank.txt","r");
  // char str[100];
  // while(fgets(str,100,ptr) != NULL) printf("%s",str);

  FILE* ptr = fopen("Bajaj.txt","w");
  char str[] = "Hlo! My Dear Linkedin Family";
  fputs(str,ptr);

  fclose(ptr);
  return 0;
}