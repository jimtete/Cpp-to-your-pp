#include <iostream>
using namespace std;

int main(){
	int n=0;
	int target=100;
	cout<<"Please enter a number: ";
	cin>>n;
	if (n>target){
		cout<<"The number you enter is greater by "<<n-target<<" from the target."<<endl;
	}else{
		if (n<target){
			cout<<"The number you enter is greater by "<<target-n<<" from the target."<<endl;
		}else{
			cout<<"The number you entered is the same with the target"<<endl;
		}
	}
	
	return 0;
}