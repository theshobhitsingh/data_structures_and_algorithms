#include<iostream>
using namespace std;
class GO{
	public:
		int num;
		public:
	void digisum(){
	int sum=0,d;
	cout<<"Enter the number:";
	cin>>num;
	while(num!=0){
		d=num%10;
		sum=sum+d;
		num=num/10;
	}
	cout<<"The sum of digits is"<<sum;
	
		}
		public:
	void palin(){
		int temp,rev=0,c;
		temp = num;
		while(num!=0)
		{
			c = num%10;
			rev = rev*10+c;
			num=num/10;
		}
		if(rev==temp)
		{
			cout<<"The number is a palindrome.";
		}
		else{
			cout<<"The number is not a palindrome.";
		}
	}
			
};
int main()
{
	GO g;
	g.digisum();
	g.palin();
}
