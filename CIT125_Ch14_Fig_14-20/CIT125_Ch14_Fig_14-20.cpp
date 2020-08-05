// CIT125 Intro To C++ Luigi Robles
// 08-04-2020 Summer Term
// Ch.14 pg.540 Fig.14-20 regional sales program
// displays each region's total sales

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//declare and initialize variables
	int store1Sales = 0;
	int store2Sales = 0;
	int store1Total = 0;
	int store2Total = 0;

	ifstream inFile;
	inFile.open("Lab14-5.txt"); //function call to open text file

	if (inFile.is_open()) //checking if file was opened successfully
	{
		inFile >> store1Sales; //save file contents to store1Sales variable
		inFile.ignore();
		while (!inFile.eof())
		{
			inFile >> store2Sales;
			inFile.ignore();
			store1Total += store1Sales; //calculate store1Total
			store2Total += store2Sales; //calculate store2Total
			inFile >> store1Sales;
			inFile.ignore();
		} //end while
		inFile.close();

		cout << "Store 1's Total sales: $"
			<< store1Total << endl; //display store1Total
		cout << "Store 2's total sales: $"
			<< store2Total << endl; //display store2Total
	}
	else
		cout << "Can't open Lab14-5.txt file." << endl;
	//end if
	return 0;
}    //end of main function