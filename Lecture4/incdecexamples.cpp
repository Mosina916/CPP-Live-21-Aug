#include<iostream>
using namespace std;
int main(){

	// int a=0;
	// int b=0;
	// if(a>0&&b++){ //b++ will not get exexcuted
	// 	a=a+1;
	// }
	// else{
	// 	b=b+1; //0+1
	// }


	// cout<<a<<endl; //0
	// cout<<b<<endl; //1


	// int a=0;
	// int b=0; //1
	// if(0&&a>=0){ 
	// 	a=a+1;
	// }
	// else{
	// 	b=b+1; //0+1
	// }


	// cout<<a<<endl; //0
	// cout<<b<<endl; //1


	// int a=0;
	// int b=11;  //2
	// if(b++&&a>0){ 
	// 	a=a+1;
	// }
	// else{
	// 	b=b+1; //0+1
	// }


	// cout<<a<<endl; //0 1 0 
	// cout<<b<<endl; //3 2 2



	int a=0;
	int b=11; //12
	if(++b&&a>0){ 
		a=a+1;
	}
	else{
		b=b+1; //0+1
	}


	cout<<a<<endl; //1  1
	cout<<b<<endl; //12 13

















	return 0;
}