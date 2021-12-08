#include<iostream>
using namespace std;
int minden(int *coins,int amount,int n){//{1,7,15};
	// base case
	if(amount==0){
		return 0;
	}
	
	// recursive case
	int ans=INT_MAX;

	for(int i=0;i<n;i++){

	if(amount-coins[i]>=0){//8-3-->5
		int chotaamt=amount-coins[i];//8-3-->5
		int chotaans=minden(coins,chotaamt,n);//5
		if(chotaans!=INT_MAX&&chotaans<ans){//5<3
			ans=chotaans+1;//2+1

		}


	}

}
return ans;

}



// top down
int topdownminden(int *coins,int amount,int n,int *arr){//{1,7,15};
	// base case
	if(amount==0){
		return arr[amount]=0;
	}
	
	// calculate karne se pehle check
	if(arr[amount]!=-1){
		return arr[amount];
	}
	// recursive case
	int ans=INT_MAX;

	for(int i=0;i<n;i++){

	if(amount-coins[i]>=0){//8-3-->5
		int chotaamt=amount-coins[i];//8-3-->5
		int chotaans=topdownminden(coins,chotaamt,n,arr);//5
		if(chotaans!=INT_MAX&&chotaans<ans){//5<3
			ans=chotaans+1;//2+1

		}


	}

}
// return karne se pehle store
return arr[amount]=ans;

}


int bottomupminden(int *coins,int amount,int n){
	int *arr=new int[amount+1];

	for (int i = 0; i <=amount; ++i)
	{
		arr[i]=INT_MAX;
	}

	// top down ka base case is initilization condition here

	arr[0]=0;

	for(int rup=1;rup<=amount;rup++){//3
		for(int i=0;i<n;i++){
		if(rup-coins[i]>=0){//1-1>=0
			int chotaamt=rup-coins[i];//2-1-->1
			arr[rup]=min(arr[chotaamt]+1,arr[rup]);
		}

	}


	}

	cout<<endl<<"bottomupminden array : "<<endl;
	for (int i = 0; i <=amount; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int fans=arr[amount];
	delete[]arr;
	return fans;


}
int main(){
	int coins[]={1,7,10};
	int n=sizeof(coins)/sizeof(int);
	int amount;//15
	cin>>amount;

	int *arr=new int[amount+1];//16
	for (int i = 0; i <=amount; ++i)
	{
		arr[i]=-1;
	}


	cout<<"minimum denomination top down : "<<topdownminden(coins,amount,n,arr)<<endl;


	for (int i = 0; i <=amount; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	cout<<"minimum denomination bottom up : "<<bottomupminden(coins,amount,n)<<endl;


	cout<<"minimum denomination: "<<minden(coins,amount,n)<<endl;



	return 0;
}