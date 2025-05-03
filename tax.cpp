// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main(){
	// Lethal amount to kill a 35 grams mice is 5grams of sode
	// single can of pop contains 350 grams of code which 
	const double HourlyRate = 16.78;
	const double OvertimeRate = 1.5;
	const double SocialSecurity = 0.06, FederalTaxes = 0.14, IncomeTax = 0.05, UnionDuesPerMont = 10.0, HealCover = 35;
	int hoursWorked,overtimehours;
	string name;

	cout << "Please entere your username : ";
	cin >> name;

	cout << "\n--------------------------------------";
	cout << "\nHello " << name << ".\nPlease add the total hours you worked this week : ";
	cin >> hoursWorked;

	if (hoursWorked > 40) {
		overtimehours = hoursWorked - 40;
		hoursWorked = 40;
	}

	string data;

	cout << "Would you like to see your weekly pacycheck before deducntions ? (yes/no)";
	cin >> data;
	if (data == "yes") {
		//add data without subtractions
		cout << "\n\t\tTotal Hours (normal)\tTotal Hours (overtime)\tTotal Hours";
		cout << "\n\t\t" << hoursWorked << "\t\t\t" << overtimehours << "\t\t\t" << overtimehours + hoursWorked << "\n";
		cout << "Money made\t" << hoursWorked * HourlyRate << "\t\t\t" << (hoursWorked * HourlyRate) * OvertimeRate << "\t\t\t" << (hoursWorked * HourlyRate) + (hoursWorked * HourlyRate) * OvertimeRate;
		cout << "\n---------------------";
	}
	else if (data == "no") {
		//add data with deductions
		double TotalMade = (hoursWorked * HourlyRate) + overtimehours * (HourlyRate * OvertimeRate);
		cout << "Total Hours worked\t" << "Total Made\t" << "Total Deductions\t" << "Finale Total\n";
		cout << hoursWorked + overtimehours << "\t\t\t" << TotalMade << "\t\t" << TotalMade * (SocialSecurity + FederalTaxes + IncomeTax) + 10 << "\t\t\t" << TotalMade - TotalMade * (SocialSecurity + FederalTaxes + IncomeTax) - UnionDuesPerMont;

	}


}

