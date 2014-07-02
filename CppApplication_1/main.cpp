/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 2, 2014, 12:37 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

double totalCollected, sales, countySalesTax = .02, stateSalesTax = .04, totalSalesTax;
int year;
string month;

main()
{	
	ofstream outputFile;
	outputFile.open("MonthlySalesTax.txt");
	cout << fixed << showpoint << setprecision(2)
	<< "Input the month: ";
	cin >> month;
	cout << "Input the year: ";
	cin >> year;
	cout << "Input the total amount collected: $";
	cin >> totalCollected;
	sales = totalCollected*(countySalesTax + stateSalesTax);
	outputFile << "Month: " << month << " " << year << endl;
	cout<< "--------------------" << endl;
	cout<< left << setw(43) << "Total Collected: " << "$ " << right << totalCollected << endl;
	cout<< left<< setw(43) << "Sales: " << "$ " << right << sales << endl;
	cout<< left<< setw(43) << "County Sales Tax: " << "$ " << right << sales * countySalesTax<< endl;
	cout<< left<< setw(43) << "State Sales Tax: " << "$ " << right << sales * stateSalesTax<< endl;
	cout<< left<< setw(43) << "Total Sales Tax: " << "$ " << right << (sales * countySalesTax) +(sales * stateSalesTax)<< endl;
	outputFile.close();
	return 0;
}