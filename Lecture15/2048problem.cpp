#include<iostream>
using namespace std;
string s[]={"zero","one","two","three","four","five","six","seven","Eight","Nine"};
void problem2048rev(int n){

	// base case
	if(n==0){
		return;
	}


	// recursive case
	int digit=n%10;//2048%10-->8   204%10-->4   20%10-->0   2%10-->2
	cout<<s[digit]<<" ";// Eight  four zero two
	problem2048rev(n/10);//2048/10-->204/10-->20 20/10-->2/10-->0



}


void problem2048(int n){//204
	// base case
	if(n==0){
		return;
	}


	// recursive case
	problem2048(n/10); //2048/10 -->204
	int digit=n%10;//2%10-->2  20%10-->0  204%10-->4  2048%10
	cout<<s[digit]<<" ";// two zero four eight




}


int main(){
	int n;
	cin>>n;//2048

	problem2048rev(n);

	cout<<endl;


	// problem2048(n);

	// cout<<endl;







	return 0;
}