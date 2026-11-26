#incude<iostream>

using namespace std;

int main(){
	int teaCups;
	int memberShipYear;
	cout<< "Enter the number of tea cups that would you buy: ";
	cin>> teaCups;
	cout << "How long have you been a member: ";
	cin>>memberShipYear;
	
	if(teaCups > 12 || memberShipYear > 1){
		cout<<"You have qualify  for a Discount"<<endl;
		
	}else{
		cout<<"You have not qualify for a Discount"<<endl;
	}
	return 0;
}
