#include <iostream>

using namespace std;

int main(){
	char letter;
	cout<<"Enter a letter: ";
	cin>>letter;
	switch (letter){
		case 'a':
		case 'A': cout<<"You need a 90 or above, study hard."<<endl;
		break;
		case 'b':
		case 'B':cout<<"You need a 80-89, go study."<<endl;
		break;
		case 'c':
		case 'C':cout<<"You need a 70-79 for an average grade."<<endl;
		break;
		case 'd':
		case 'D':cout<<"You need a 60-69, you should aim higher."<<endl;
		break;
		case 'f':
		case 'F':
		{
			char confirm{};
			cout<<"Are you sure: (Y/N)";
			cin>> confirm;
			if (confirm=='y' || confirm=='Y') cout<<"Ok, I guess you didn't study."<<endl;
			else if (confirm=='n' || confirm=='N')cout<<"Good- go study!"<<endl;
			else cout<<"Illegal input, kys."<<endl;
		}
		break;
		default: cout<<"Sorry, that is not a valid grade."<<endl;
		break;
	}
	
	enum Direction {
		left,right,up,down
	};
	
	Direction head {down};
	switch (head){
		case left:
			cout<<"Going left"<<endl;
			break;
		case right:
			cout<<"Going right"<<endl;
			break;
		default:
			cout<<"Ok"<<endl;
	}
	
	return 0;
}