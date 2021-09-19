#include<iostream>
#include<climits>
#include <algorithm>
using namespace std;
int main(){

	char arr[20];
	cin>>arr;//"74747"
	int len=strlen(arr);
	int ans=0;	
	ans=(1<<len)-2;//30


	for(int i=len-1,pos=0;i>=0;i--,pos++){
		if(arr[i]=='7'){
			// mujhe kaam karna hai
			ans=ans+(1<<pos);//35+16=51
		}
	}
	cout<<ans+1<<endl;




	return 0;



}