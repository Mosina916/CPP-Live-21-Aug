#include<iostream>
using namespace std;
int nstaircase(int n){ //1  //0
	// base case
	if(n==0){
		return 1;
	}

	if(n<0){
		return 0;
	}

	// recursive case
	return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);

}


// generalization
int nstaircase2(int n,int maxsteps){ //4
	// base case
	if(n==0){
		return 1;
	}

	if(n<0){
		return 0;
	}

	// recursive 
	int sum=0;

	for(int i=1;i<=maxsteps;i++){
		sum=sum+nstaircase2(n-i,maxsteps);

	}


	return sum;


}


int main(){

	// maxsteps=3

	int n,maxsteps;
	cin>>n>>maxsteps;
	// cout<<"Total ways "<<nstaircase(n)<<endl;


	cout<<"Total ways "<<nstaircase2(n,maxsteps)<<endl;

	



	return 0;
}