#include <stdio.h>
#include <string.h>

int main () {
   char s[] = "PSITISGREAT";
   char temp;

   int i, j;
   int n = strlen(s);

   printf("String before sorting - %s \n", s);

   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (s[i] > s[j]) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
         }
      }
   }
   
   printf("String after sorting  - %s \n", s);
   return 0;
}
