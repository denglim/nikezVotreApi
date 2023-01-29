#include<iostream>
using namespace std;

int main()
{
	int side1, side2, side3;
	
	cout << "\nPlease Enter Three Sides of a Triangle =  ";
	side1 = 5;
	side2 = 6;
	side3 = 14;
	//cin >> side1 >> side2 >> side3;
	
	if(side1 == side2 && side2 == side3)
  	{
  		cout << "\nThis is an Equilateral Triangle";
  	}
  	else if(side1 == side2 || side2 == side3 || side1 == side3)
    {
  		cout << "\nThis is an Isosceles Triangle";
	}
  	else
    	cout << "\nThis is a Scalene Triangle";
		
    cout << "hello world" << endl;
 	return 0;
}