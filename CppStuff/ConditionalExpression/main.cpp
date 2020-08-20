#include <iostream>
using namespace std;

int main(){
	
//	int num{};
//	cout<<"Enter an integer: ";
//	cin>>num;
//	
//	
//	cout << num << " is " << ((num%2==0)? "even" : "odd")<<endl;
	
	int n1{},n2{};
	cout<<"Enter two integers, seperated by space: ";
	cin>>n1>>n2;
	
	if (n1==n2){
		cout<<"The numbers are the same."<<endl;
	}else{
		cout << "The largest number is: "<<((n1>n2)? n1:n2)<<endl;
		cout << "The smallest number is: "<<((n1>n2)? n2:n1)<<endl;
	}
	
	return 0;
}