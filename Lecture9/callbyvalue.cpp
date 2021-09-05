#include <iostream>
using namespace std;
//call by value

void updatea(int a){ //a new variable is created in the another scope which gets destroyed
	// once the function task is over so hence all the changes that happen in the variable are 
	// not reflected in the main
	a=a+20; //30
	cout<<"value of a inside updatea is "<<a<<endl; //30


}


int main()
{
	int a=10;
	cout<<"value of a is "<<a<<endl; //10

	updatea(a);
	cout<<"value of a after updatea in main is "<<a<<endl;
	


	return 0;
}


