#include<iostream>
using namespace std;
int main(){
	int ans=0;
	int n;
	cin>>n; //5

	int no;


	int co=1;
	while(co<=n){ //6<=5
		cin>>no;//3
		ans=ans^no;//0^3-->3^4
		co++; //6

	}
	cout<<ans<<endl;





}