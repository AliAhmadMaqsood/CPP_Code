#include<iostream>

using namespace std;

int main(){
	
	// operators challenge 1
	
     int teaPacket;
	 double totalPrice , pricePerPacket , texPrice,finalCost;
	 
	 cout<< "Enter the number of tea packet: ";
	 cin>> 	teaPacket;
	 cout << "Enter the price per packet: ";
	 cin >> pricePerPacket;
	 totalPrice = teaPacket * pricePerPacket;
	 
	 if(totalPrice > 0){
	 	texPrice = totalPrice * (10 /100);
	 	
	 }
        finalCost = texPrice + totalPrice;
	 	cout << "Total price is: " << finalCost <<endl;
	
	
	return 0;
}
