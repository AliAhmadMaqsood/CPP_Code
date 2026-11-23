#include<iostream>

using namespace std;

int main(){

     // Relational operator
    
	int teaCups;
	cout << "Enter the number of tea Cups: ";
	cin >> teaCups;
	
	if(teaCups > 20){
		cout << "You will win a GOLD Badge"<<endl;
	}  
	else if (teaCups <= 20 && teaCups >= 10){
		cout << "You will win a SILVER Badge " << endl;
	} else{
		cout << "No badge for you"<< endl;
	}
  
    return 0;
}
