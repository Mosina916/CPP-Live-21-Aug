#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[1000000];

	cin>>n; //4
	int ans=0;
	// 4 3 1 4
	for (int i = 0; i <n; ++i)//4
	{
		/* code */

		cin>>arr[i];//4
		ans=ans^arr[i];//0^4-->4^3-->7^1-->6^4-->2

	}


	int xorofall=ans;//2-->3^1

	int temp=ans;//2




	int pos=0;

	// loop
	while(temp>0){
		if((temp&1)>0){//1&1
		// ussi pos pe 1 hai
		break;


	}
	else{
		pos++;//1
		temp=temp>>1;//1


	}

	}


	// pos-->1

	int mask=(1<<pos);//1-->10-->2
	int res2=0;
	 // 4 3 1 4

	for (int i = 0; i <n; ++i)
	{
		if((arr[i]&mask)==0){//4&2
			// uss corresponding bit pe 0 hai
			res2=res2^arr[i];//0^4-->1

		}
	}

	// res2-->1


	int res3=xorofall^res2;//3^1-->2^1-->3'

	cout<<min(res2,res3)<<" "<<max(res2,res3)<<endl;






	return 0;
}