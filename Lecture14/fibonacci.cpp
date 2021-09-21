#include<iostream>
using namespace std;


int fibo(int n){//6   0

	// base case
	if(n==0||n==1){
		return n;

	}
	// recursive case


	return fibo(n-1)+fibo(n-2);//5+3-->8
	// int chotaans1=fibo(n-1);//5-->5
	// int chotaans2=fibo(n-2);//4-->3

	// int badaans=chotaans1+chotaans2;
	// return badaans;



}



// int f(int n){
// 	return 10
// }


// int y(int h){
// 	return 8;
// }



// int main(){
// 	cout<<f(8)<<" "<<y(9)<<endl;

// }

// start
int main(){

	int n;//1
	cin>>n;
	cout<<"position "<<n<<"th fibonacci is "<<fibo(n)<<endl;




	
	return 0;//terminate successfully
}