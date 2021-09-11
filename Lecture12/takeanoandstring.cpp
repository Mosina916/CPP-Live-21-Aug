#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5
	cin.ignore();//'/n',' '-->ignore
	// cin.get();
	char arr[100];
	cin.getline(arr,100);//"hello world"


	cout<<n<<endl;//5
	cout<<arr<<endl;//hello world






	return 0;
}