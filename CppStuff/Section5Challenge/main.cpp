#include <iostream>

using namespace std;

int main(){
	
	int smallRooms=0,largeRooms=0;
	cout<<"Please enter the number of small rooms you would like to be cleaned: ";
	cin>>smallRooms;
	cout<<"Please enter the number of large rooms you would like to be cleaned: ";
	cin>>largeRooms;
	
	const double long priceSmall=25;
	const double long priceLarge=35;
	const double tax=0.06;
	
	cout<<"------------------"<<endl;
	cout<<"Price for small rooms: "<<priceSmall<<endl;
	cout<<"Price for large rooms: "<<priceLarge<<endl;
	double long totalPriceSmall=priceSmall*smallRooms;
	double long totalPriceLarge=priceLarge*largeRooms;
	cout<<"Total price for small rooms: "<<totalPriceSmall<<"$"<<endl;
	cout<<"Total price for large rooms: "<<totalPriceLarge<<"$"<<endl;
	cout<<"------------------"<<endl;
	double long totalPrice=totalPriceLarge+totalPriceSmall;
	cout<<"Total price for all rooms: "<<totalPrice<<"$"<<endl;
	cout<<"Total tax for all rooms: "<<tax*totalPrice<<"$"<<endl;
	cout<<"Estimated cost after tax: "<<totalPrice+tax*totalPrice<<"$"<<endl;
	
	return 0;
}