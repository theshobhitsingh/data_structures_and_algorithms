#include<stdio.h>

struct std{
	int roll_n,classn;
	char name[20];
	struct std_add{
		int lan,add;
	}S2;
}S1;
int main()
{
	printf("Enter the details");
	scanf("%d %s%d",&S1.roll_n,&S1.name,&S1.classn);
	printf("\n");
	scanf("%d %d",&S1.S2.add,&S1.S2.lan);
	printf("%d %s %d \n",S1.roll_n ,S1.name,S1.classn);
	printf("%d %d",S1.S2.add,S1.S2.lan);
	return 0;
}


