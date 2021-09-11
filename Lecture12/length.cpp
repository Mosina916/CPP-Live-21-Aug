#include<iostream>
using namespace std;

// length(char arr[])
int length(char *arr){
	int co=0;//0   "Hi cat\0\n"
	// int i=0;
	
	// while(arr[i]!='\0'){
	// 	co++;//6
	// 	i++;//6

	// }

	for(int i=0;arr[i]!='\0';i++){
		co++;//6

	}


	return co;


}

int main(){
	// int arr[]={1,2,3,4,5};

	char arr[1000];
	cin.getline(arr,100); //"Hi cat\n"

	cout<<"length is : "<<length(arr)<<endl;

	
	return 0;
}