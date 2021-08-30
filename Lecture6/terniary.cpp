#include<iostream>
using namespace std;
int main(){
	int x=10;


	if(x>5){
		cout<<"X is greater than 5"<<endl; //s1
	}
	else{
		cout<<"x is smaller"<<endl;
	}

	// ternary operator


	// condition?statement 1:statment 2
	x>5?cout<<"X is greater than 5"<<endl:cout<<"x is smaller"<<endl;




	// if(x>5){
	// 	if(x==10){
	// 		cout<<"X is equal to 10"<<endl; //s1

	// 	}
	// 	else{
	// 		cout<<"X is greater than 5"<<endl; //s2
	// 	}
		
	// }
	// else{
	// 	cout<<"x is smaller"<<endl;
	// }



	x>5?x==10?cout<<"X is equal to 10"<<endl:cout<<"X is greater than 5"<<endl:cout<<"x is smaller"<<endl;







	return 0;
}