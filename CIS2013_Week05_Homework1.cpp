// The purpose of the program is to make a calendar

#include <iostream>
#include <iomanip>
using namespace std;

// Print the title of the month and week days
void printMonthTitle(int year, int month);
void printMonthName(int month);
int GetDayOfWeek(const int year, const int month);
// Number of days in month
int getNumberOfDaysInMonth(int year, int month);
// Print calendar
void Calendar(const int year, const int month); 
// Determine if it is a leap year
bool isLeapYear(int year);

int main()
{
	void Calendar (const int year, const int month);
// Ask the user to enter year
cout << endl;
cout << "Enter year : ";
int year;
cin >> year;
// Ask the user to enter month
cout << endl;
cout << "Enter month : ";
int month;
cin >> month;
// Print calendar for the month of the year
cout << endl;
Calendar(year, month);

return 0;
}

// Print the calendar for a month in a year

void Calendar(const int year, const int month) {
 
   printMonthTitle(year, month);
   
   int days = getNumberOfDaysInMonth(year, month);
   int dow = GetDayOfWeek(year, month);
   for(int day=0; day<dow; day++) {
	   cout << setw(5) << ""; 
	}
   for(int day=1; day<=days; day++) {
      cout << setw(5) << day;
		if (++dow>6) { dow = 0; cout << endl << ""; }
	}
   cout << endl;
   
}

// Print the month title
void printMonthTitle(int year, int month)
{
printMonthName(month);
cout << " " << year << endl;
cout << " ----------------------------------- " << endl;
cout << " Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
cout << " ---  ---  ---  ---  ---  ---  --- " << endl;
}
// Pint English name for the month
void printMonthName(int month)
{
switch (month)
{
case 1:
cout << "January";
break;
case 2:
cout << "February";
break;
case 3:
cout << "March";
break;
case 4:
cout << "April";
break;
case 5:
cout << "May";
break;
case 6:
cout << "June";
break;
case 7:
cout << "July";
break;
case 8:
cout << "August";
break;
case 9:
cout << "September";
break;
case 10:
cout << "October";
break;
case 11:
cout << "November";
break;
case 12:
cout << setw(16) << "December";
} }


int GetDayOfWeek(const int year, const int month) { /* 0 = Sunday */
   const int d = 0;
   int y = year - (month < 3);
   static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
   return (y + y/4 - y/100 + y/400 + t[month-1] + d) % 7;
}


// Get the number of days in a month
int getNumberOfDaysInMonth(int year, int month)
{
	bool isLeapYear(int year);
    if(month == 1)
      return 31;
    else if (month == 2)
            { if(isLeapYear(year))
               return 29;
               else 
                return 28;
                }
    else if(month == 3)
    return 31;
    else if(month == 4)
    return 30;
    else if(month == 5)
    return 31;
    else if(month == 6)
    return 30;
    else if(month == 7)
    return 31;
    else if(month == 8)
    return 31;
    else if(month == 9)
    return 30;
    else if(month == 10)
    return 31;
    else if(month == 11)
    return 30;
    else if(month == 12)
    return 31;
}

bool isLeapYear(int year)
{ if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
  return true;
  else 
     return false;
}
