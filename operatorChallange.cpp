#include<iostream>

using namespace std;

int main(){

     // Assignment operator
     
  int teaBags;
    cout << "Enter the number of tea bags: ";
    cin >> teaBags; 
	
    if(teaBags < 20){
        teaBags += 10;
    }
    cout << "Your Total bags are: " << teaBags;
    return 0;
}
