#include<iostream>
using namespace std;
void toh(int n,char src,char helper,char dest){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	toh(n-1,src,dest,helper);//3-->2
	cout<<"move the disk "<<n<<" from "<<src<<" to "<<dest<<endl;
	toh(n-1,helper,src,dest);

}


int main(){
	int n;
	cin>>n;//3
	toh(n,'A','B','C');


	return 0;
}