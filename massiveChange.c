#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(void) {
   int j=3; int k=2;
   char a[5][5] = {"abc","def","jhi","jkl"};
   
   for (int i=0;i<=(j/2);i++) {
      for (int d=0; d <= k;d++){
          register int e = j-i; 
      
         a[i][d] = a[i][d]^(a[e][d]);
         a[e][d] = a[i][d]^a[e][d];
         a[i][d] = a[i][d]^a[e][d];
      }
    }

    printf("%s%s%s%s",a[0],a[1],a[2],a[3]);
    return 0;
}


