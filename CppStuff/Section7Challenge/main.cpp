#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	//Creating first vectors
	vector<int>vector1={};
	vector<int>vector2={};
	
	//Adding data to vector 1
	vector1.push_back(10);
	vector1.push_back(20);
	cout<<"Vector 1 has two elements: {"<<vector1.at(0)<<", "<<vector1.at(1)<<"} and size: "<<vector1.size()<<endl;
	
	//Adding data to vector 2
	vector2.push_back(100);
	vector2.push_back(200);
	cout<<"Vector 2 has two elements: {"<<vector2.at(0)<<", "<<vector2.at(1)<<"} and size: "<<vector2.size()<<endl;
	
	//Initializing 2D vector and data.
	vector<vector <int>>vector2D={};
	vector2D.push_back(vector1);
	vector2D.push_back(vector2);
	cout<<"The elements of the 2D Vector are: \n{"<<vector2D.at(0).at(0)<<", "<<vector2D.at(0).at(1)<<"},\n{"
	<<vector2D.at(1).at(0)<<", "<<vector2D.at(1).at(1)<<"}."<<endl;
	
	
	//Changing vector 1 and comparing the differences
	vector1.at(0)=1000;
	cout<<"The elements of the 2D Vector are: \n{"<<vector2D.at(0).at(0)<<", "<<vector2D.at(0).at(1)<<"},\n{"
	<<vector2D.at(1).at(0)<<", "<<vector2D.at(1).at(1)<<"}."<<endl;
	cout<<"Vector 1 has two elements: {"<<vector1.at(0)<<", "<<vector1.at(1)<<"} and size: "<<vector1.size()<<endl;
	return 0;
}