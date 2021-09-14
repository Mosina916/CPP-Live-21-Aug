#include<iostream>
#include<cmath>
using namespace std;
int countdigits(int no){
	// no-->314/10-->31

	int co=0;

// loop
	while(no>0){
		co++;//3
	no=no/10;//314/10-->31/10--->3/10-->0


	}


	return co;
	





}
int main(){
	int t;
	cin>>t;//2

	int arr[200];

	while(t--){
		int n;
		cin>>n;//4
		for (int i = 0; i <n; ++i)
		{
			cin>>arr[i];
		}

		// arr=54 546 548 60


		for(int i=0;i<=n-2;i++){
			for(int j=0;j<=n-2-i;j++){
				int a=arr[j]; //62 314
				int b=arr[j+1];
				int digitsina=countdigits(a); //2
				int digitsinb=countdigits(b); //3
				long long int no1=a*pow(10,digitsinb)+b; //62*(1000)+314-->62314
				long long int no2=b*pow(10,digitsina)+a; //314*(100)+62-->31462
				if(no1>no2){
					swap(arr[j],arr[j+1]);
				}
			}

		}


		// reverse print
		for(int i=n-1;i>=0;i--){
			cout<<arr[i];
		}


		cout<<endl;



		// t--;






	}





	return 0;
}