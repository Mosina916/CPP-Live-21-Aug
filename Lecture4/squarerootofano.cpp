#include<iostream>
using namespace std;
int main(){

	int no,times;
	cin>>no>>times; //14 2


	// no=8;
	// cout<<no*no<<endl;


	// cout<<3*3<<endl;


	int count=1;
	float inc=1;

	float i=0;

	while(count<=times+1){  //1<=2

// ----------------------------------------------
		// kaam karga ek baar

	while(i*i<=no){ //3

		i=i+inc; //3
	}
	i=i-inc; //3


// ----------------------------------------------

	// cout<<i<<endl;
	
	count=count+1; //3+1=4
	inc=inc/10; //1/10=0.1;



	}

	cout<<"square root is "<<i<<endl;


	




	return 0;
}