#include <iostream>
#include <conio.h>

 using namespace std;

 int main()
 {
	 double a [100];
	 double b [100];
	 double c [100];
	 int j;
	 
	 
	 cout << "Enter all temperature for a week of Province A, Province B and then Province C." << endl;
	 cout << " " << endl;


	 for (j = 1; j <= 7; j++)
	 {
	 cout << "Province A, Day " << j << ": "; cin >> a [j];
	 }

	 cout << " " << endl;

	 for (j = 1; j <= 7; j++)
	 {
	 cout << "Province B, Day " << j << ": "; cin >> b [j];
	 }

	 cout << " " << endl;

	 for (j = 1; j <= 7; j++)
	 {
	 cout << "Province C, Day " << j << ": "; cin >> c [j];
	 }

	 cout << " " << endl;

	 cout << "Displaying Values:" << endl;

	 for (j = 1; j <= 7; j++)
	 {
	 cout << "Province A, Day " << j << "= ";
	 cout << a [j] << endl;
	 }

	 cout << " " << endl;

	 for (j = 1; j <= 7; j++)
	 {
	 cout << "Province B, Day " << j << "= ";
	 cout << b [j] << endl;
	 }

	 cout << " " << endl;

	 for (j = 1; j <= 7; j++)
	 {
	 cout << "Province C, Day " << j << "= ";
	 cout << c [j] << endl;
	 }


     _getch ();
	 return 0;
 }