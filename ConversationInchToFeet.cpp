 // convert inches to feet and inches 
 // input inches
 // output feet and inches 
 #include <iostream>
 using namespace std;
 int main () {
	 // inches to feet conversation factor
	 const int in2feet = 12;
	 
	 int inches;       // number of inches 
	 int feet;      // number of feet
	 
	 cout << "Enter number in inches: ";
	 cin >>  inches;
	 
	 // convert inches to feet and inches 
	 feet = inches / in2feet ;
	 inches = inches % in2feet;
	 cout << feet << " feet " << inches << " inches " << endl;
	 return 0;
	 
 }	 