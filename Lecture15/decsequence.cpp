#include<iostream>
using namespace std;
void decseq(int n){
	// base case
	// if(n==1){
	// 	cout<<1<<endl;
	// 	return;



	// }
	if(n==0){
		return;
	}


	// recursive case
	cout<<n<<endl;//6 5 4 3 2 1
	decseq(n-1);//5 4 3 2 1 0



}
int main(){
	int n;
	cin>>n;//6
	decseq(n);
	




	return 0;
}