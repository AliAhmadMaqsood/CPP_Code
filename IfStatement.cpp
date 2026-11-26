#include<iostream>
#include<string>
using namespace std;

int main(){
	
	// Using If statement
	
	string teaOrder;
	
	cout<< "Enter your tea order";
	getline(cin , teaOrder);
	
	if(teaOrder == "Green Tea"){
		
	cout<< "Your order is Green Tea"<<endl;
		
	}
	
	return 0;
}
