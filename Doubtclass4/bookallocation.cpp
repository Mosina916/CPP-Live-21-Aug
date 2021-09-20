#include<iostream>
using namespace std;


bool kyamidkicapabilitysesaaribooksreadhosaktihai(int *books,int n,int m,int capability){
	int student=1;
	int current=0;


	// 10 20 30 40

	for (int i = 0; i <n; ++i)
	{

		if(current+books[i]>capability){//60+40>60
		// book read nahi kar sakta
			student++;//2
			current=books[i];//40
			if(student>m){
				return false;
			}



		}
		else{
			// book read kar sakta hai

			current=current+books[i];//0+10-->10+20-->30+30-->60
		}
	}


	return true;
}



int bookallocation(int *books,int n,int m){


	int totalpages=0;
	for (int i = 0; i < n; ++i)
	{
		totalpages=totalpages+books[i];
	}

	// totalpages= 100
	int s=books[n-1];

	int e=totalpages;

	int ans;


	//loop
	while(s<=e){


		int mid=(s+e)/2;//(40+69)/109/2-->54


	if(kyamidkicapabilitysesaaribooksreadhosaktihai(books,n,m,mid)==true){

		ans=mid;//60
		e=mid-1;//70-1-->69

	}
	else{
		s=mid+1;


	}


	}


	return ans;


	





}
int main(){
	
	int t;
	cin>>t;
	while(t--){
	int n,m;
	cin>>n>>m;
	int books[1000];

	// n-->t books
	// m-->t students
	for (int i = 0; i <n; ++i)
	{
		cin>>books[i];
	}

	cout<<bookallocation(books,n,m)<<endl;




	}
	









	return 0;
}