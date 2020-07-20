#include <iostream>

int main(){
	int favouriteNumber;
	std::cout<<"Give me your favourite number between 1 and 100: ";
	
	std::cin >> favouriteNumber;
	
	std::cout<< favouriteNumber << std::endl;
	
	std::cout << "That is my favourite number too"<< std::endl;
	
	return 0;
}