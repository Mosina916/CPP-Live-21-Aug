#include<iostream>
#include <vector>
using namespace std;
int main(){
	// vector<datatype> name;
	// vector<int> v;
	// // cout<<v.size()<<endl;//0
	// // cout<<v.capacity()<<endl;//0

	// v.push_back(5);//
	// // cout<<v.size()<<endl;//1
	// // cout<<v.capacity()<<endl;//1
	// v.push_back(7);//
	// // cout<<v.size()<<endl;//2
	// // cout<<v.capacity()<<endl;//2
	// v.push_back(3);//
	// // cout<<v.size()<<endl;//3
	// // cout<<v.capacity()<<endl;//4

	// v.push_back(8);//
	// v.push_back(9);//
	// 	cout<<v.size()<<endl;//5
	// cout<<v.capacity()<<endl;//8


	// cout<<v.at(2)<<endl;//3

	// cout<<v.front()<<endl;//5
	// cout<<v.back()<<endl;//9


	// v.pop_back();
	// 	cout<<v.size()<<endl;//4
	// cout<<v.capacity()<<endl;//8

	// v.clear();
	// cout<<v.size()<<endl;//0
	// cout<<v.capacity()<<endl;//8


	vector<int> v1(3);//size
	vector<int> v1(3,10);//size
	
	v1.push_back(5);//
	
	v1.push_back(7);//
	
	v1.push_back(4);//
	cout<<v1.size()<<endl;//3
	cout<<v1.capacity()<<endl;//2

	cout<<v1.front()<<endl;//5
	cout<<v1.back()<<endl;//9















	









	return 0;
}