#include<iostream>

using namespace std;

int main(){
	
	// NESTED-IF statement
	
	int cups;
	double pricePerCups = 2.5 , discount , totalPrice;
	
	cout << "Enter the number of cups: ";
	cin >> cups;
	
	totalPrice = pricePerCups * cups;
	
	if(cups > 20){
		discount = 0.20;
	} else if(cups >= 10 && cups <= 20) {
		discount = 0.10;
	} else{
		discount = 0;
	}
	
	totalPrice -= (totalPrice * discount);
	cout<< "Total Price after Discount is "<<totalPrice<<endl;
	
    return 0;	
}
