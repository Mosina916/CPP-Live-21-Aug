#include<iostream>
#include<climits>
#include <algorithm>
using namespace std;
int main(){



	int t;
	cin>>t;
	int rprice[10000];

	while(t--){
		int n;
		cin>>n;

		for (int i = 0; i <n; ++i)
		{
			cin>>rprice[i];
		}
		// 10 2 6 8 4
		int money;
		cin>>money;
		sort(rprice,rprice+n);//2 4 6 8 10

		int opt1,op2,min=INT_MAX;
		for(int i=0;i<=n-2;i++){
			for(int j=i+1;j<n;j++){
				if(rprice[i]+rprice[j]==money){
					int diff=rprice[j]-rprice[i];
					if(diff<min){
						opt1=rprice[i];
						op2=rprice[j];
						min=diff;

					}

				}
			}

		}

		cout<<"Deepak should buy roses whose prices are "<<opt1<<" and "<<op2<<"."<<endl;


	}


	return 0;



}