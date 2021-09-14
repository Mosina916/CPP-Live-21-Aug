#include<iostream>
#include<cmath>
using namespace std;
int height[1000000],le[1000000],ri[1000000];

int main(){

	int t,n;
	cin>>t;//2
	while(t--){
		// task
		cin>>n;//6
		for (int i = 0; i <n; ++i)
		{
			cin>>height[i];
		}


		le[0]=height[0];
		for(int i=1;i<n;i++){
			le[i]=max(height[i],le[i-1]);
		}


		ri[n-1]=height[n-1];


		for(int i=n-2;i>=0;i--){
			ri[i]=max(height[i],ri[i+1]);
		}


		int water=0;

		for(int i=0;i<n;i++){
		water=water+min(le[i],ri[i])-height[i]; //6


		}

		cout<<water<<endl;





	}



	


	return 0;
}