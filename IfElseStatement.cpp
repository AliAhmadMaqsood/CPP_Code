#include<iostream>

using namespace std;

int main(){
	
	// IF-ELSE statement
	
	int hour;
	
	cout<< "Enter the current hour (0-23): ";
	cin>> hour;
	
	if(hour >= 8 && hour < 18) {
		cout<< "Your shop is OPENED! " <<endl;
	} else{
		
		cout<< "Your shop is CLOSED! " <<endl;

	}
	
return 0;	
}
