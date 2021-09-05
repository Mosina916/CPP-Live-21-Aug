#include <iostream>
using namespace std;
//call by refrence //no new variable is created -->refrence create

void updatea(int &x){ //no  new variable is created in the another scope 
		//definition
	x=x+20; //30
	cout<<"value of a inside updatea is "<<x<<endl; //30


}


int main()
{
	int a=10;
	cout<<"value of a is "<<a<<endl; //10

	updatea(a);//invoking
	cout<<"value of a after updatea in main is "<<a<<endl; //30




	// refrence variable

	int arun=10;

	


	return 0;
}


