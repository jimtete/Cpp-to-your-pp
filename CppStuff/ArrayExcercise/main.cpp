#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	//Introduction
	cout<<"=====Introduction====="<<endl;
//	int testScores[5]{95,90,100,76,55};
//	cout<<testScores[0]<<endl;
//	cout<<testScores[1]<<endl;
//	cin>>testScores[0];
//	cout<<testScores[0]*2<<" is the double of the number you entered"<<endl;


	//Accessing data
	cout<<"=====Accessing data====="<<endl;
	char vowels[]={'a','e','i','o','u'};
	cout << "\nThe first vowel is: "<<vowels[0]<<endl;
	cout << "The last vowel is: "<<vowels[4]<<endl;
	
	long double hiTemps[]={35,35.2,36.2,33.9};
	cout <<"\n The first high temperature is: "<<hiTemps[0]<<endl;
	hiTemps[0]=37.2;
	cout <<"The first high temperature has changed to: "<<hiTemps[0]<<endl;


	//Multi-dimensional arrays
	cout<<"=====Multi-dimensional arrays====="<<endl;
	const int rows = 3;
	const int cols = 4;
	int movieRating[rows][cols]{
		{0,2,4,1},
		{3,2,2,3},
		{5,4,3,4}
	};
	cout<<"First reviwer, third movie: "<<movieRating[0][2]<<endl;
	cout<<"Third reviwer, fourth movie: "<<movieRating[2][3]<<endl;
	cout<<"Change rating: ";
	cin>>movieRating[2][3];
	cout<<"Third reviwer, fourth movie changed his rating into: "<<movieRating[2][3]<<endl;
	
	
	//Vectors introduction
	cout<<"\n=====Vectors introduction====="<<endl;
	vector<int>testScores {100,95,99,87,70};
	cout<<"Vector's size: "<<testScores.size()<<endl;
	cout<<"Third test score is: "<<testScores.at(2)<<endl;
	cout<<"Changing third score into 44*2"<<endl;
	testScores.at(2)=44*2;
	cout<<"Third score has changed into: "<<testScores.at(2)<<endl;
	cout<<"Adding one more score into the vector..."<<endl;
	testScores.push_back(75);
	cout<<"New score is: "<<testScores.at(5)<<endl;
	cout<<"New size is: "<<testScores.size()<<endl;
	
	
	//Two dimensional vectors
	cout<<"\n=====Two dimensional vectors====="<<endl;
	vector <vector <int>> movieRating2{
		{2,2,3,4},
		{1,3,3,3},
		{3,2,2,5}
	};
	cout<<"Here are the movie rating from the first critic: "<<endl;
	cout<<movieRating2[0][0]<<", "<<movieRating2[0][1]<<", "<<movieRating2[0][2]<<", "<<movieRating2[0][3]<<", "<<endl;
	
	
	return 0;
}