#include<iostream>
using namespace std;
int main(){
	int i=1;
	while(i<=10){
		if(i==6){
			i=i+1; //3+1=4
			// continue; //infinite loop 


		}
		cout<<i<<endl; //1  2 4 5
		i=i+1; //5+1=6
	}
	cout<<endl;



	return 0;
}