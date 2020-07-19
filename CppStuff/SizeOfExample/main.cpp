#include <iostream>
#include <climits>

using namespace std;

int main(){
	cout <<"sizeof information"<<endl;
	cout <<"---------------------"<<endl;
	
	
	cout <<"char: "<<sizeof(char)<<" bytes"<<endl;
	cout <<"long long: "<<sizeof(long long)<<" bytes"<<endl;
	
	
	cout <<"long double: "<<sizeof(long double)<<" bytes"<<endl;
	
	cout <<"MIN LONG LONG: "<<LLONG_MIN<<endl;
	return 0;
}