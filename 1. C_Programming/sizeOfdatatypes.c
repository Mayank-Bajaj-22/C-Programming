#include <stdio.h>
int main(){
    short a = 32768;
    printf("%d",a);
    return 0;
}


// short can store -32768 to +32767   -> 2 bytes  ->  16 bits
// 8 bits -> 1 byte
// n bits -> 2^n numbers can store 
// 16 bits -> 2^16 numbers can store
// int can store before -32768 to +32767

// int data type -> 4 bytes -> 32 bits -> 2^32 numbers

// short  -2^15  to  2^15 - 1
// int  -2^31  to  2^31 - 1    // float
// long long  -2^63  to  2^63 - 1
// char 1 bytes -> 8 bits -> 2^8 numbers -> 256 numbers

// float can store upto 6 decimals 