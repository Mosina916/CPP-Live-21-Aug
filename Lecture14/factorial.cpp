#include<iostream>
using namespace std;

int facto(int n){//0
	// base  case// stop condition
	if(n==0){
		return 1;

	}


	// if(n==1){
	// 	return 1;

	// }


	// recursive case

	return n*facto(n-1);//fact(3)


	// with storing 
		// with the help of above two steps calculate the ans

	// int chotaans=facto(n-1);//pure assumption  fact(3)-->6
	// int badaans=n*chotaans;//4*6-->24

	// return badaans;


	// without storing 


}
// start
int main(){
	int n;
	cin>>n;//4
	cout<<"Factorial of "<<n<<" is "<<facto(n)<<endl;


	return 0;//terminate successfully
}