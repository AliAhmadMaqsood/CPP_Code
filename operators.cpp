#include<iostream>

using namespace std;

int main(){

     // Assignment operator
     
  int teaBags;
    cout << "Enter the number of tea bags: ";
    cin >> teaBags; 
	
    if(teaBags < 10){
        teaBags += 5;
    }
    cout << "Your Total bags are: " << teaBags;
    return 0;
}
