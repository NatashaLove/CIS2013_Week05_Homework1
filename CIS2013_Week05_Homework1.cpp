
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// Input of month and year
void input(int month, int year);
//Finding if it is a leap year
bool IsLeapYear(const int year);
// Getting days of month
int GetDaysInMonth (const int year, const int month);

int GetDayOfWeek(const int year, const int month);

void ShowCal(const int year, const int month);

int main (){
	int m, y;
	
	input (m, y);
	//IsLeapYear (y);
	//GetDaysInMonth (y, m);
	//GetDayOfWeek(y, m);
	ShowCal(y, m);
	
	
	
	
	
	
	





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
int GetDayOfWeek(const int year, const int month) { /* 0 = Sunday */
   const int d = 1;
   int y = year - (month < 3);
   static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
   return (y + y/4 - y/100 + y/400 + t[month-1] + d) % 7;
}
void ShowCal(const int year, const int month) {
   string monthName[] = {"January","February","March","April","May","June","July",
   "August","September","October","November","December"};
   int days = GetDaysInMonth(year, month);
   int dow = GetDayOfWeek(year, month);
   cout << monthName[month-1] << endl;
   cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;
   cout << " --- --- --- --- --- --- ---" << endl << " ";
   for(int day=0; day<dow; day++) {
	   cout << "  "; 
	}
   for(int day=1; day<=days; day++) {
      cout << setw(3) << day << " ";
		if (++dow>6) { dow = 0; cout << endl << " "; }
	}
   cout << endl;
}

