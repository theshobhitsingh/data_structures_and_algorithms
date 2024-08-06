#include<stdio.h>
int main(){
	int a=10,b=20,c,d;
	printf("pre-incrementing value of a=%d\n",++a);
	printf("pre-decrementing value of b=%d\n",--b);
	printf("pre-incrementing value of b=%d\n",++b);
	printf("pre-decrementing value of a=%d\n",--a);
	printf("post-incrementing value of a=%d\n",a++);
	printf("post-decrementing value of a=%d\n",a--);
	printf("post decrementing value of b=%d\n",b--);
	printf("value of a=%d\n",a);
	printf("value of b=%d\n",b);
	return 0;
}
