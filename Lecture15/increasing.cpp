#include<iostream>
using namespace std;
void incseq(int n){//4 3
	// base case
	// // if(n==1){
	// // 	cout<<1<<endl;
	// // 	return;


	// n=4
	// 1 2 3 4



	// // }
	if(n==0){
		return;
	}


	
	// base case



	// recursive case
	incseq(n-1);// 
	cout<<n<<endl;//1 2 3 4



}
int main(){
	int n;
	cin>>n;//4
	incseq(n);
	




	return 0;
}