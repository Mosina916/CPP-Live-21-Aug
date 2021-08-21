#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no; //5-->2 to n-1-->2 3 4 5


	// n--->2 to no-->10

	int n=2;
	while(n<=no){


		// check n is primt or not

		int i=2; //initilization
	while(i<=n-1){ //3<=4
		// task;
		if(n%i==0){ //6%2==0
			// i will be dividing this n-->i will be also factor of n
			cout<<n<<" Not prime"<<endl;
			// continue
			// i=i+1;
			// return 0;
			break;

		}

		i=i+1; //5
		// cout<<n<<endl;

	}

	// i--->5--->n //bahar aayega
	if(i==n){
		// cout<<"prime"<<endl;
		cout<<n<<"prime"<<endl;

	}



		n=n+1;

	}

	
	return 0;
}