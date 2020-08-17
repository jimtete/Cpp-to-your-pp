#include <iostream>
using namespace std;

int main(){
	int score=0;
	cout<<"Please enter your score(0-100): ";
	cin>>score;
	char letterScore{};
	
	if (score>100 || score<0){
		cout<<"Wrong input, terminating program"<<endl;
		return 0; //-1 for wrong input
	}else{
		if (score>=90) letterScore='A';
		else if (score >=80) letterScore='B';
		else if (score >=70) letterScore='C';
		else if (score >=60) letterScore='D';
		else if (score >=50) letterScore='E';
		else letterScore='F';
	}
	
	cout<<"Your grade is : "<<letterScore<<endl;
	if (letterScore='F') cout<<"Sorry, you have to repeat this class."<<endl;
	
	cout<<"=============================="<<endl;
	cout<<"Welcome to Thessaloniki Shipping service"<<endl;
	cout<<"Please enter the height, depth and length of the package"<<endl;
	int height{0},length{0},depth{0};
	cout<<"Height: ";
	cin>>height;
	cout<<"Length: ";
	cin>>length;
	cout<<"Depth: ";
	cin>>depth;
	
	int volume=0;
	long double cost=2.50;
	if (height<0 || depth<0 || length<0){
		cout<<"Wrong input, terminating program"<<endl;
		return 0;
	}
	if (height>10 || depth>10 || length>10){
		cout<<"Exceeds default dimensions, exiting program"<<endl;
		return 0;
	}
	volume = height*depth*length;
	if (volume>500){
		cost*=1.25;
	}else{
		if (volume>100)cost*=1.1;
	}
	
	cout<<"The volume of the package is: "<<volume<<endl;
	cout<<"Total cost: "<<cost<<"$."<<endl;
	
	
	
	
	
	return 0;
}