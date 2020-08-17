#include <iostream>
using namespace std;

int main(){
	
	int n{0};
	cout<<"Enter a number between 10 and 100: ";
	cin>>n;
	if (n>=10 & n<=100){
		cout<<"The number is between 10 and 100"<<endl;
		int diff{n-10};
		cout<<"The number "<<n<<" is "<<diff<<" greater than 10"<<endl;
	}
	
	
	
	return 0;
}