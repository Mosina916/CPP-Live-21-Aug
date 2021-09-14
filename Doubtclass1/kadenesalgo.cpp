#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;//2

	int arr[1000000];

	while(t--){
		int n;
		cin>>n;//4
		for (int i = 0; i <n; ++i)
		{
			cin>>arr[i];
		}


		// kadenes algo

		// 1 2 3 4 //-10 5 10
		int cs=0,ms=0;
		for(int i=0;i<n;i++){ //3
			cs=cs+arr[i];//0+5-->5+10-->15
			if(cs<0){
				cs=0; //0
			}
			ms=max(ms,cs);//max(0,1)-->15

		}


		cout<<ms<<endl;


	}




	return 0;
}