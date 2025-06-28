#include<iostream>
using namespace std;
int main(){
	int month,year,numberOfDays;
	cout<<"Please enter month and year."<<endl;
	cin>>month>>year;
	
	bool isleap = (year%4==0 &&  year%100!=0 ) || (year%400==0);
	 
	 switch(month)
	 {
	 	
	  case 1: case 3: case 5: case 7:  case 8: case 10: case 12:
	  numberOfDays=31;
	  break;
	   case 4: case 6: case 9: case 11:
	  numberOfDays=30;
	  break;
	  case 2:
	  numberOfDays = isleap ? 29:28;
	  break;
	  default:
	  cout<< "You entered an invalid month."<<endl;
	  return 1;	
	}
	cout << "This month has "<<numberOfDays<<"days."<<endl;
}
