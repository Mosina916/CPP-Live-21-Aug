#include<iostream>
#include<list> //doubly linked list
// #include<algorithm>
using namespace std;

int main(){
	// int x;

	list<int> l;

	if(l.empty()){
		cout<<"Empty"<<endl;
	}
	else{
		cout<<" Not Empty"<<endl;

	}

	cout<<"before insertion "<<l.size()<<endl;

	// l.push_front(1);//insert front
	// l.push_front(2);//2 1

	// l.push_back(6);// 2 1 6 //insertion at back
	// l.push_back(8);// 2 1 6 8
	// l.push_back(6);// 2 1 6 8 6
	// l.push_back(6);// 
	// l.push_back(6);// 2 1 6 8 6 6 6


	// int n,no;
	// cin>>n;//4
	// for (int i = 0; i <n; ++i)
	// {
	// 	cin>>no;
	// 	l.push_back(no);
		
	// }


	cout<<"After insertion "<<l.size()<<endl;


	// sort(arr,arr+n);


	// print linkedlist

	// loop for each

	for(auto i:l){// for every i belonging to l
		cout<<i<<" ";//2 1 6 8

	}

	cout<<endl;

	l.pop_front();//delete at front // 1 6 8 6 6 6
	l.pop_front();//delete at front // 6 8 6 6 6

	l.pop_back();//delete at front //  6 8 6 6 

	for(auto i:l){// for every i belonging to l
		cout<<i<<" ";//2 1 6 8

	}










	return 0;
}