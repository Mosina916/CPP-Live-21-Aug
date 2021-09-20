#include<iostream>
using namespace std;
#define ll long long int
ll N,M,X,Y;

bool kyamaimidnoofstudentskoscholarshipdepaarahi(int mid){
	// treq<=tcoumerepasshai-->return true
	return mid*X<=M+(N-mid)*Y;//4*2<=5+(4-4)*1-->8<=5

}
int main(){
	
	cin>>N>>M>>X>>Y;//4 5 2 1

	// N-->total student
	// M-->total coupons available at cb
	// X-->coupons required to get 100% scholarship
	// Y-->no of coupons student need to return if he/she perform badluy

	int s=0;
	int e=N;//4
	int ans;

	while(s<=e){
		int mid=(s+e)/2;//(4+4)/2-->4

	if(kyamaimidnoofstudentskoscholarshipdepaarahi(mid)==true){
		ans=mid;//3
		s=mid+1;//4


	}
	else{
		e=mid-1;//3
	}

	}

	cout<<ans<<endl;
	






	return 0;
}