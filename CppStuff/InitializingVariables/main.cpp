#include <iostream>
#include <string>


using namespace std;

int main(){
	
//	string stringExample("Enter the width of the room: ");
//	cout<<stringExample;
//	int width{0};
//	cin>>width;
//	cout<<"Enter the height of the room: ";
//	int height{0};
//	cin>>height;
//	
//	cout<<width*height<<" square meters is the area of the room"<<endl;

	cout<<"How many rooms would you like cleaned: ";
	int rooms=0;
	cin>>rooms;
	const double long price=35;
	const double tax = 0.06;
	
	cout<<"Total estimate per room: "<<price<<"$"<<endl;
	cout<<"Total price of all rooms: "<<price*rooms<<"$"<<endl;
	cout<<"Total estimated tax: "<<tax*price*rooms<<"$"<<endl;
	
	cout<<"Total estimate after tax: "<<price*rooms+tax*price*rooms<<"$"<<endl;
	
	
	return 0;
}