#include <iostream>
using namespace std;
int main(){
	
	int age{0};
	cout<<"Please enter your age: ";
	cin>>age;
	if (age>18) cout<<"Is adult"<<endl;
	else cout<<"Is not adult"<<endl;
	
	return 0;
}