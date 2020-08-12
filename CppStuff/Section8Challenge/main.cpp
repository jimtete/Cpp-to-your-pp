#include <iostream>
using namespace std;

int main(){
	/*
	 * 1 Dollar is 100 cents
	 * 1 Quarter is 25 cents
	 * 1 Dime is 10 cents
	 * 1 Nickel is 5 cents
	 * 1 penny is 1 cent*/
	cout<<"Enter the amount of cents: ";
	int cents=0;
	cin>>cents;
	int dollar,quarter,dime,nickel,penny;

	dollar=cents/100;
	cents=cents-dollar*100;
	
	quarter=cents/25;
	cents=cents-quarter*25;
	
	dime=cents/10;
	cents-=dime*10;
	
	nickel=cents/5;
	cents-=nickel*5;
	
	penny=cents;
	
	cout<<"There is a total of "<<dollar<<" dollars \n"
	<<quarter<< " quarters \n"
	<<dime<<" dimes \n"
	<<nickel<<" nickels \n"
	<<penny<<" pennies.";
	
	return 0;
}