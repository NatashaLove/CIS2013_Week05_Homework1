
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// Input of month and year
void input(int month, int year);
//Finding if it is a leap year
bool IsLeapYear(const int year);

int main (){
	int m, y;
	
	input (m, y);
	IsLeapYear (y);
	
	
	
	
	
	
	
	





return 0;
}


void input(int month, int year) {
	using namespace std;
	int m, y;
	cout << endl;
	cout << "Hello!!! " << endl;
	cout << endl;
	cout << "Enter the month "<< endl;
	cin >> m;
	cout << endl;
	cout << "Enter the year " << endl;
	cin >> y;
	cout << endl;
}
bool IsLeapYear(const int year) {
   return ((year%400==0) || (year%4==0 && year%100!=0));
}
int GetDaysInMonth (const int year, const int month) {
   switch (month) {
	    case 2: return IsLeapYear(year) ? 29 : 28;
	    case 4:
		case 6:
		case 9:
		case 11: return 30;
		default: return 31;
  }   
}