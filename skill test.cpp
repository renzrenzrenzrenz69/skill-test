#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main ()
{

	double P, H;
	cout << "Pay rate for an hour" << endl;
	cin >> P;
	cout << "Number of hours you work for each week" << endl;
	cin >> H;
	cout << "income before tax     "<< P * H << "     income after tax     " << P*H - (P * H *.14) << endl; 
	cout << "The money you spent on clothes and other accessories     "<< (P*H - (P * H *.14)) *.10 << endl; 
	cout << "The money you spent on school supplies    "<< (P*H - (P * H *.14)) *.010 << endl; 
	cout << "The money you spent on buying saving bonds     "<< (P*H - (P * H *.14)) *.25 << endl; 
	cout << "The money your parents spent on buying  you additional saving bonds     "<< ((P*H - (P * H *.14)) *.25)/2 << endl; 
	
	
	
	
	
_getch();
	return 0;
}
