#include<iostream>

using namespace std;

int main(){	
	// Print age
    
  int age;
  
  cout<< "Enter the age: ";
  cin>> age;
  
  if(age >= 18){
  	cout<<"You can apply for vote"<<endl;
  } else{
  	cout << "You cannot apply for vote"<<endl;    	
}
 return 0;   
}
