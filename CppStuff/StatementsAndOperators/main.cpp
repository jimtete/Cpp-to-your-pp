#include <iostream>

using namespace std;

int main(){
	
	
	//65. The assignment operator::
	long int n1=100;
	long int n2=200;
	
//	n1=n2;
	
	cout<<"n1 is: "<<n1<<endl;
	cout<<"n2 is: "<<n2<<endl;
	
	cout<<endl;
	
	//66. Arithmetic operators::
//	cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
	
	long int result=n1+n2;
	cout<<n1<<" + "<<n2<<" = "<<result<<endl;
	
	result=n1-n2;
	cout<<n1<<" - "<<n2<<" = "<<result<<endl;
	
	result=n1*n2;
	cout<<n1<<" * "<<n2<<" = "<<result<<endl;
	
	result=n1/n2;
	cout<<n1<<" / "<<n2<<" = "<<result<<endl;
	
	result=n1%n2;
	cout<<n1<<" % "<<n2<<" = "<<result<<endl;
	
	n1=10;n2=3;
	
	result=n1%n2;
	cout<<n1<<" % "<<n2<<" = "<<result<<endl;
	
	cout<<"5.0/10.0 = "<<5.0/10.0<<endl;
	
	//Convert EURO to USD
	const double usdToEurRatio=1.19;
	long double euros=100;
	long double dollars=100;
	
	cout<<"100 dollars are: "<<euros/usdToEurRatio<<" euro."<<endl;
	cout<<"100 euro are: "<<dollars*usdToEurRatio<<" dollars."<<endl;
	
	
	
//67. Increment and Decrement
cout<<"-----------------------"<<endl;

	int counter=10;
	int result2{0};
	
	cout <<"Counter: "<<counter<<endl;
	
	result2=++counter+10;
	cout<<"Counter: "<<counter<<endl;
	cout<<"Result: "<<result2<<endl;
	
	
//68. Mixed Expressions and Compressions
cout<<"-----------------------"<<endl;
	
	long int a,b,c,total;
	a=16;b=33;c=100;
	total=a+b+c;
	
	long double avg=0;
	
	avg=static_cast<double>(total)/3;
	//avg=(double)(total)/3;old style
	cout<<"The sum of the three numbers is: "<<total<<endl;
	cout<<"The average of the three numbers is: "<<avg<<endl;
	

//69. Testing for equality
cout<<"-----------------------"<<endl;

	cout<<boolalpha;
	bool state{false};
	bool noState{false};
	
	a=15;b=16;//Change em
	
	state=(a==b);
	noState=(a!=b);
	cout<<"Equals: "<<state<<endl;
	cout<<"Not equals: "<<noState<<endl;
	
//70. Relational operators
cout<<"-----------------------"<<endl;
	a=10;b=20;
	cout<<a<<" > "<<b<<" : "<< (a>b)<<endl;
	cout<<a<<" >= "<<b<<" : "<< (a>=b)<<endl;
	cout<<a<<" <= "<<b<<" : "<< (a<=b)<<endl;
	cout<<a<<" < "<<b<<" : "<< (a<b)<<endl;
	
	cout<<"-----------------------"<<endl;
//71. Logical operators
	cout<<"Enter a number between "<<a<<" and "<<b<<": ";
	cin>>c;
	bool withinBounds=0;
	withinBounds=c>=a&&c<=b;
	cout<<"Is number "<<c<<" between "<<a<<" and "<<b<<" : "<<withinBounds<<endl;
	
	return 0;
}