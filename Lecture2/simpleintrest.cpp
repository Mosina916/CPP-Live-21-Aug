#include<iostream>
using namespace std;
int main(){
	// si=p*r*t/100;

	int p,r,t; //integer
	cin>>p>>r>>t; //20 10 20

	// float si=(p*r*t)/100; //4000/100=40 //10/100=0.1
	// float si=(p*r*t)/100.0; //4000/100=40 //10/100=0.1

	float si=(p*r*t*1.0)/100; //4000/100=40 //10/100=0.1

		// float si=(p*r*t*1.0)/100.0; //4000/100=40 //10/100=0.1
	cout<<"simple intrest is "<<si<<endl;




	return 0;
}