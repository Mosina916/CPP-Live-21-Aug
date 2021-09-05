#include <iostream>
using namespace std;
// int facto(int n);


int facto(int n){ //3!


	int ans=1;

	int i=1;

	while(i<=n){
		ans=ans*i; //1*1-->1*2-->2*3-->6*4-->24
		i=i+1;//5

	}


	return ans; //6


}

int ncrvalue(int n,int r){ //n-->5 r-->2
	// n!/(r!*(n-r)!)
	int fans=(120/(2*facto(n-r))); //10

	return fans;
}





int main(){

	int n,r;
	cin>>n>>r; //5 2

	if(n>=r){
		cout<<"Value of ncr is : "<<ncrvalue(n,r)<<endl;

	}

	


	return 0;

}





