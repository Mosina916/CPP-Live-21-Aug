#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; //6-->2 to 5


	int i=2; //initilization
	while(i<=n-1){ //6<=5
		// task;
		if(n%i==0){ //6%5==0
			// i will be dividing this n-->i will be also factor of n
			cout<<"Not prime"<<endl;
			return 0;

		}
		i=i+1; //6

	}

	// i--->5--->n //bahar aayega

	cout<<"prime"<<endl;





	
	return 0;
}