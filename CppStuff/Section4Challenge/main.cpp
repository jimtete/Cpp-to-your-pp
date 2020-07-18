#include <iostream>


using namespace std;
//using std::cout;
//using std::cin;
//using std::endl;

int main(){
	
	int favouriteNum;
	cout<<"Enter your favourite number between 1 and 100: ";
	
	cin>>favouriteNum;
	
	if (favouriteNum>100 || favouriteNum<1){
		return 0;
	}
	
	cout<<"Amazing that's my favourite number too!"<<endl;
	cout<<"No really..., "<<favouriteNum<<" is my favourite number."<<endl;
	
	return 0;
}