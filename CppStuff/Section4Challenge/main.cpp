#include <iostream>

int main(){
	
	int favouriteNum;
	std::cout<<"Enter your favourite number between 1 and 100: ";
	
	std::cin>>favouriteNum;
	
	if (favouriteNum>100 || favouriteNum<1){
		return 0;
	}
	
	std::cout<<"Amazing that's my favourite number too!"<<std::endl;
	std::cout<<"No really..., "<<favouriteNum<<" is my favourite number."<<std::endl;
	
	return 0;
}