#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int id;
		int roll;
		public:
			void get(){
				int i,rol;
				string nam;
				cout<<"Enter the id";
				cin>>i;
				cout<<"Enter the roll no.";
				cin>>rol;
				cout<<"Enter the name:";
				cin>>nam;
				id=i;
				roll=rol;
				name=nam;	
			}
			void display(){
				cout<<name<<endl<<id<<endl<<roll;
			}
		};
			int main(){
				student s1;
				s1.get();
				s1.display();
				return 0;
				}
			

