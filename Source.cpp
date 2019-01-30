


/***********************************************
* Name: Brandon Cunningham
* Email: cunninghb6.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	float miles, kilometers;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program converts miles to kilometers" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input miles: ";
	cin >> miles;
	
	//Computing function
	kilometers = miles * 1.6; 
	
	//Display the area 
	cout << miles <<" miles is " << kilometers << " kilometers.\n\n";
	cout << "Program has ended" << endl;

	//
	//2
	//

	float radius, circumference;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in radius to compute circumference of circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute area to PI*radius*radius
	circumference = PI * radius *2;

	//Display the area 
	cout << " The circumference is = " << circumference << "\n\n";
	cout << "Program has ended\n" << endl;

	//
	//3
	//

	float mile, km, m, cm, mm;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts miles to kilometers, meters, centimeters, and milometers" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input miles: ";
	cin >> mile;

	//Computing functions
	km = mile * 1.6;
	m = km * 1000;
	cm = m * 100; 
	mm = m * 1000;


	//Display the area 
	cout << mile << " miles is " << km << " kilometers or " << m << " meters or " << cm << " centimeters or " << mm << " millimeters.\n\n";
	cout << "Program has ended" << endl;
	
	system("pause");
	
	return 0;
}