#include<iostream>
using namespace std;
int main(){
	int no;
	int rev=0;
	cin>>no; //85656

	// while(no>0){
	// 		// 0*10+8%10-->8
	// 	rev=rev*10+no%10;//345%10-->5*10+4=54*10+3=543;
	// no=no/10;//345/10-->34/10-->3/10-->0

	// } 


	// for(initilization condition;condition check;updation){
	// 	// task;

	// }


	for(;no>0;no=no/10){
			rev=rev*10+no%10;

	}
	



	cout<<"reverse is : "<<rev<<endl;



}