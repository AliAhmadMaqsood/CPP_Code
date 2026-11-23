#include<iostream>

using namespace std;

int main(){
	   
	   // Arthimatic operator
	   
	int cup;
	double pricePerCup , totalPrice , discountedPrice;
	
	cout<< "Enter the number of tea cups: ";
	cin>> cup;
	cout<< "Enter the price of per cups: ";
	cin >> pricePerCup;
	totalPrice = cup * pricePerCup;
	
	// Apply 5% discount when it is above in 100
	
	if(totalPrice > 100) {
	discountedPrice = totalPrice - (totalPrice * 0.05);
	cout<< "Total price after Discount is: " << discountedPrice <<endl;	
	} else {
		cout<< "Total price is: " << totalPrice <<endl;
	}
       return 0;
   }
