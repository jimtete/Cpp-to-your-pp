#include <iostream>

using namespace std;

int main(){
	
	cout<<"Please enter a number between 1 and 100:";
	int n{0};
	cin>>n;
	
	if (n>100||n<1){
		cout<<"Number out of boundries!"<<endl;
		return 2; //Number out of boundries;
	}
	
	if (n>=50){
		cout<<"Number above 50"<<endl;
	}else if(n>25){
		cout<<"Number above 25 and below 50"<<endl;
	}else{
		cout<<"Number below 25"<<endl;
	}
	
	return 0;
}