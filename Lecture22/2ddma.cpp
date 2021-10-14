#include <iostream>
using namespace std;
int main(){
	int rows,cols;//4 3
	cin>>rows>>cols;
	int**ptr;
	ptr=new int*[rows];
	for(int i=0;i<rows;i++){
		ptr[i]=new int[cols];

	}

	// input

	for (int i = 0; i <rows; ++i)
	{
		for (int j = 0; j <cols;j++)
		{
			cin>>ptr[i][j];
		}
	}



for (int i = 0; i <rows; ++i)
	{
		for (int j = 0; j <cols;j++)
		{
			cout<<ptr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
// delete 


	for (int i = 0; i <rows; ++i)
	{
		delete []ptr[i];
		ptr[i]=NULL;
	}


	delete []ptr;
	ptr=NULL;






	return 0;
}