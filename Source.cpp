


/***********************************************
* Name: Brandon Cunningham
* Email: cunninghb6.rowan.edu
***********************************************
* Purpose:
*  Homework
***********************************************/

#include <iostream>

using namespace std; 



int main()
{
	
	float fahr, cel;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program converts degrees Celsius to degrees Fahrenheit" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input degrees Celsius: ";
	cin >> cel;
	
	//Computing function
	fahr =  cel * 9/5 + 32 ; 
	
	//Display coversion
	cout << cel <<" degrees Celsius is " << fahr << " degrees Fahrenheit.\n\n";
	cout << "Program has ended" << endl;
	
	//
	//2
	//

	float age, year, months, days, hours, minutes, seconds;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes your age in years and coverts it to months, days, hours, minutes and seconds." << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input your age in years: ";
	cin >> year;

	//Compute conversions
	months = year * 12;
	days = year * 365.25;
	hours = days *24;
	minutes = hours * 60;
	seconds = minutes * 60;

	//Display the initial
	cout << "Your age in years = " << year << "\n";
	cout << "Your age in months = " << months << "\n";
	cout << "Your age in days = " << days << "\n";
	cout << "Your age in hours = " << hours << "\n";
	cout << "Your age in minutes = " << minutes << "\n";
	cout << "Your age in seconds = " << seconds << "\n";
	
	cout << "Program has ended\n" << endl;

	//
	//3
	//
	
	

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program displays my first initial" << endl;
	cout << " ******************************************\n\n";

	cout << "	***   " << endl;
	cout << "	*  *  " << endl;
	cout << "	*** " << endl;
	cout << "	*  *" << endl;
	cout << "	*  *  " << endl;
	cout << "	*** " << endl;


	
	
	system("pause");
	
	return 0;
}