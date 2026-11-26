#include<iostream>

using namespace std;

int main(){
	
	// SWITCH statement

	int choice;
	double price;
	
	cout<< "Select your Tea: \n";
	cout<< "1.Green tea \n";
	cout<< "2.Black tea \n";
	cout<< "3.Oolong tea \n";
	cout<< "Enter your Choice in number: \n";
	
	cin >> choice;
	
	switch(choice){
		case 1:
			price = 2.0;
			cout<< "You selected Green tea. price: "<<price<<endl;
			break;
		case 2:
			price = 3.0;
			cout<< "You selected Black tea. price: "<<price<<endl;
			break;
		case 3:
			price = 4.0;
			cout<< "You selected Oolong tea. price: "<<price<<endl;
			break;
		default:
			cout<< "InValid choice"<<endl;
			break;
	}
    return 0;	
}
