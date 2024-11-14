// int a(25);   // from declaration of array corect declaration is int a[25];

#include <stdio.h>
int main(){
int size = 10,b[size];
//printf("%d",size);
b[0] = 2;
printf("%d",b[0]);
return 0;
}

// int c = {0,1,2}   // wrong array declaration