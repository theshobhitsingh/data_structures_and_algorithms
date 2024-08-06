#include<stdio.h>    //Structure                                              
#include<string.h>  
struct employee{
	int code;
	char name[100];
	char designation[100];
	int salary;
	char department[100];
	char city[100];
}emp[100];
int main(){
	int i,n;
	printf("Enter the number of Employees:");
	scanf("%d",&n);
	printf("Enter the employee information:\n");
	for(i=0;i<n;i++){
		printf("Enter the code:");
		scanf("%d",&emp[i].code);
		printf("Enter the name:");
		scanf("%s",&emp[i].name);
		printf("Enter the designation:");
		scanf("%s",&emp[i].designation);
		printf("Enter the salary:");
		scanf("%d",&emp[i].salary);
		printf("Enter the department:");
		scanf("%s",&emp[i].department);
		printf("Enter the city:");
		scanf("%s",&emp[i].city);	
	}
	printf("Display the record of Employees:\n");
		for(i=0;i<n;i++){
		printf("Code %d\n",emp[i].code);
		printf("Name %s\n",emp[i].name);
		printf("Post %s\n",emp[i].designation);
		printf("Salary %d\n",emp[i].salary);
		printf("Department %s\n",emp[i].department);
		printf("City %s\n",emp[i].city);
	}
}
