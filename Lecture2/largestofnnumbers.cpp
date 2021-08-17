// three nos different from each other
#include<iostream>
#include<climits>
using namespace std;
int main(){

	// int n,no;
	// int largest=INT_MIN;
	// cin>>n; //4
	// int co=1; //1 
	// while(co<=n){//5<=4
	// 	cin>>no; //2
	// 	if(no>largest){
	// 		largest=no; //6
	// 	}

	// 	co=co+1;


	// }
	// cout<<"Largest of "<<n<<" nos is "<<largest<<endl;


	int n,no;

	cin>>n; //4


	cin>>no; //3

	int largest=no; //3

	int co=1; //1 
	while(co<=n-1){//2<=4
		cin>>no; //2
		if(no>largest){



			largest=no; //6
		}

		co=co+1;


	}
	cout<<"Largest of "<<n<<" nos is "<<largest<<endl;







	
	return 0;
}