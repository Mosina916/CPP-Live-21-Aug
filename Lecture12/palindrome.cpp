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

bool ispalindrome(char *arr){
	int i=0;//0
	int j=length(arr)-1;//8

// loop
	while(i<j){
		if(arr[i]!=arr[j]){
		return false;

	}


	i++;
	j--;
}
	

	return true;
	


}

int main(){

	char arr[10000];
	cin.getline(arr,100); //"abcecba"

	if(ispalindrome(arr)){//true /false
		cout<<"yes palindrome"<<endl;

	}
	else{
		cout<<"not palindrome"<<endl;
	}

	
	return 0;
}