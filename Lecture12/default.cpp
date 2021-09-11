#include<iostream>
using namespace std;
// int sum(int a,int b){
// 	return a+b;
// }

// int sum2(int a,int b,int c){
// 	return a+b+c;
// }
// int sum3(int a,int b,int c,int d){
// 	return a+b+c+d;
// }


// default arguments

int sum(int a=0,int b=0,int c=0,int d=0,int e=0){
	return a+b+c+d+e;//3+5+0+0+0

}
int main(){

	// default argumets

	// cout<<sum(6,7)<<endl;//13

	// cout<<sum2(4,3,2)<<endl;//9

	// cout<<sum3(2,3,3,1)<<endl;//9


	cout<<sum(3,5)<<endl;//8

	cout<<sum(2,4,1)<<endl;//7

	cout<<sum(6,2,4,1)<<endl;//13














	return 0;
}