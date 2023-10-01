#include<iostream>
using namespace std;
class calculator
{
	public:
		int n;
		void add();
		void sub();
		void div();
		void mul();
		void mod();
};
void calculator::add()
{
	int num,sum=0;
	cout<<"Enter how many numbers do you want to add : ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	   cout<<"Enter the "<<(i)<<" number : ";
	   cin>>num;
	   sum=sum+num;
	}
	cout<<"Addition of numbers : "<<sum<<endl;
}
void calculator::sub()
{
     int num1,num2,z;
    cout<<"Enter the first number :";
    cin>>num1;
    cout<<"Enter the second number :";
    cin>>num2;
    z=num1-num2;
	cout<<"Substraction of numbers : "<<z<<endl;
}

void calculator::mul()
{
	int num,z=1;
	cout<<"Enter how many numbers do you want to multiply : ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	   cout<<"Enter the "<<(i)<<" number : ";
	   cin>>num;
	   z=z*num;
	}
	cout<<"Multiplication of numbers : "<<z<<endl;
}
void calculator::div()
{
	float num1,num2;
	float z;
    cout<<"Enter the first number :";
    cin>>num1;
    cout<<"Enter the second number :";
    cin>>num2;
    z=num1/num2;
	cout<<"Division of numbers : "<<z<<endl;
}
void calculator::mod()
{
	 int num1,num2;
	  int z;
    cout<<"Enter the first number :";
    cin>>num1;
    cout<<"Enter the second number :";
    cin>>num2;
    z=num1%num2;
	cout<<"Modulus of numbers : "<<z<<endl;
}
int main()
{
	
	calculator ob;
	int ch;
	while(1)
	{
		cout<<"1 Addition"<<endl;
		cout<<"2 Substraction"<<endl;
		cout<<"3 Multiplication"<<endl;
		cout<<"4 Division"<<endl;
		cout<<"5 Modulus"<<endl;
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
	   {
		case 1 :ob.add();
		        break;
		        
		case 2 : ob.sub();
		         break;
		case 3 : ob.mul();
		         break;
		case 4 :ob.div();
		        break;
		case 5 : ob.mod();
		        break;
	   }
	}
	
}


