#include<stdio.h>

int main(void) {
    char a[4] = "abc";
    a[0] = a[0]^a[2]; 
    a[2] = a[0]^a[2]; 
    a[0] = a[0]^a[2];
   printf("%s",a);
}

