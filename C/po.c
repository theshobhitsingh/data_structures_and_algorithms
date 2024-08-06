#include <string.h>    
int main(){    
  char str1[20],str2[20];    
  printf("Enter 1st string: ");    
  gets(str1);//reads string from console    
  printf("Enter 2nd string: ");    
  gets(str2);    
  if(strcmp(str1,str2)==0)    
      printf("Strings are equal");    
  else    
      printf("Strings are not equal");    
 return 0;    
}   

