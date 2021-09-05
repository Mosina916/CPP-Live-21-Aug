#include <iostream>
using namespace std;


// int facto(int n){ //4!=4*3*2*1


// 	int ans=1;

// 	int i=1;

// 	while(i<=n){
// 		ans=ans*i; //1*1-->1*2-->2*3-->6*4-->24
// 		i=i+1;//5

// 	}


// 	return ans;


// }


// forward decleartion

int facto(int n);



int main(){

	int x;
	cin>>x; //5


	cout<<"Factorial "<<facto(x)<<endl;

	return 0;

}



int facto(int n){ //4!=4*3*2*1


	int ans=1;

	int i=1;

	while(i<=n){
		ans=ans*i; //1*1-->1*2-->2*3-->6*4-->24
		i=i+1;//5

	}
	return ans;


}


