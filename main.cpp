// Program: Final Project
// Programmer: Heidi Mobley
// Date: 11/29/2020

#include <iostream>
#include <fstream>
#include <iomanip>
#include "windows.h"
using namespace std;

//function prototypes
void bootsQuarterlyFunction();
void backpacksQuarterlyFunction();
void waterBottlesQuarterlyFunction();
void foodBoxesQuarterlyFunction();
void bootsSalesQuarterlyFunction();
void backpacksSalesQuarterlyFunction();
void foodBoxesSalesQuarterlyFunction();
void waterBottlesSalesQuarterlyFunction();
void bootsTotalSalesFunction();
void backpacksTotalSalesFunction();
void waterBottlesTotalSalesFunction();
void foodBoxesTotalSalesFunction();
float totalRevenueFunction();



int main()
{
	//vars
	int menuChoice;

	char subMenuOneChoice, subMenuTwoChoice, subMenuThreeChoice, subMenuFourChoice;

	//format output for program
	cout << fixed << showpoint << setprecision(2);
	//state program purpose
	cout << "Welcome to the LL Bean Internal Management Information System." << endl;

	//create program loop
	do
	{
		// display menu and ask for choice
		cout << "\nPlease choose one of the menu options listed below (1, 2, 3, 4, 5)" << endl;
		cout << "\n1) Input of sales information." << endl;
		cout << "2) Create a report for Sales Information any Product Itemby Quarters." << endl;
		cout << "3) Create a report for Total Retail Inventory Sales for a Specific Product." << endl;
		cout << "4) Create a report for Total Retail Inventory Sales." << endl;
		cout << "5) Quit the program." << endl;
		cin >> menuChoice;

		// validate input
		while (menuChoice < 1 && menuChoice > 5)
		{
			cout << "\nThe choice you entered is not an option." << endl;
			cout << "Please enter a choice from the following options : 1, 2, 3, 4, 5.";
			cin.ignore(); // clear buffer
			cin >> menuChoice;
		}// end while

		// exit program option and message
		if (menuChoice == 5)
		{
			system("cls");
			cout << "Thank you for using the Internal Management Information System." << endl;
			cout << "\nGoodbye." << endl;
			Sleep(2000);
		}// end if

		// menu system
		switch (menuChoice)
		{
		case 1: //clear screen and display submenu
			system("cls");
			cout << "\nPlease choose which item you would like to input information for (A, B, C, D): " << endl;
			cout << "\nA) Input product information for Boots." << endl;
			cout << "B) Input product information for Backpacks. " << endl;
			cout << "C) Input product information for Food Boxes." << endl;
			cout << "D) Input product information for Water Bottles." << endl;
			cout << "E) Return to the Main Menu." << endl;
			cin.ignore(); // clear buffer
			cin >> subMenuOneChoice;

			//validate input for Sub Menu option
			while (toupper(subMenuOneChoice) < 65 || toupper(subMenuOneChoice) > 69)
			{
				cout << "The choice you entered is not an option." << endl;
				cout << "Please enter a choice from the following options : A, B, C, D.";
				cin.ignore(); // clear buffer
				cin >> subMenuOneChoice;
			}// end while

			if (toupper(subMenuOneChoice) == 65)
			{
				bootsQuarterlyFunction();
			}// end if

			if (toupper(subMenuOneChoice) == 66)
			{
				backpacksQuarterlyFunction();
			}// end if

			if (toupper(subMenuOneChoice) == 67)
			{
				foodBoxesQuarterlyFunction();
			} // end if

			if (toupper(subMenuOneChoice) == 68)
			{
				waterBottlesQuarterlyFunction();
			}// end if

			if (toupper(subMenuOneChoice) == 69)
			{
				system("cls");
				break;
			}// end if

			//end case 1
			break;

		case 2: //clear screen and display submenu
			system("cls");
			cout << "\nPlease choose which item you would like to display information for (A, B, C, D): " << endl;
			cout << "\nA) Display product sales information for Boots." << endl;
			cout << "B) Display product sales information for Backpacks." << endl;
			cout << "C) Display product sales information for Food Boxes." << endl;
			cout << "D) Display product sales information for Water Bottles." << endl;
			cout << "E) Return to the Main Menu." << endl;
			cin.ignore(); // clear buffer
			cin >> subMenuTwoChoice;

			//validate input for Sub Menu option
			while (toupper(subMenuTwoChoice) < 65 || toupper(subMenuTwoChoice) > 69)
			{
				cout << "The choice you entered is not an option." << endl;
				cout << "Please enter a choice from the following options : A, B, C, D.";
				cin.ignore(); // clear buffer
				cin >> subMenuTwoChoice;
			}// end while

			if (toupper(subMenuTwoChoice) == 65)
			{
				bootsSalesQuarterlyFunction();
			}// end if

			if (toupper(subMenuTwoChoice) == 66)
			{
				backpacksSalesQuarterlyFunction();

			}// end if

			if (toupper(subMenuTwoChoice) == 67)
			{
				foodBoxesSalesQuarterlyFunction();

			}// end if

			if (toupper(subMenuTwoChoice) == 68)
			{
				waterBottlesSalesQuarterlyFunction();

			}// end if

			if (toupper(subMenuTwoChoice) == 69)
			{
				system("cls");
				break;
			}// end if

			// end case 2
			break;

		case 3: //clear screen and display submenu
			system("cls");
			cout << "\nPlease choose which item you would like to display information for (A, B, C, D): " << endl;
			cout << "\nA) Display total product sales information for Boots." << endl;
			cout << "B) Display total product sales information for Backpacks." << endl;
			cout << "C) Display total product sales information for Food Boxes." << endl;
			cout << "D) Display total product sales information for Water Bottles." << endl;
			cout << "E) Return to the Main Menu." << endl;
			cin.ignore(); // clear buffer
			cin >> subMenuThreeChoice;

			//validate input for Sub Menu option
			while (toupper(subMenuThreeChoice) < 65 || toupper(subMenuThreeChoice) > 69)
			{
				cout << "The choice you entered is not an option." << endl;
				cout << "Please enter a choice from the following options : A, B, C, D.";
				cin.ignore(); // clear buffer
				cin >> subMenuThreeChoice;
			}// end while

			if (toupper(subMenuThreeChoice) == 65)
			{
				bootsTotalSalesFunction();
			}// end if

			if (toupper(subMenuThreeChoice) == 66)
			{
				backpacksTotalSalesFunction();
			}// end if

			if (toupper(subMenuThreeChoice) == 67)
			{
				foodBoxesTotalSalesFunction();
			}// end if

			if (toupper(subMenuThreeChoice) == 68)
			{
				waterBottlesTotalSalesFunction();

			}// end if

			if (toupper(subMenuThreeChoice) == 69)
			{
				system("cls");
				break;
			}// end if

			//end case 3
			break;

		case 4: //clear screen and display data
			system("cls");
			cout << "\nGross Sales for all Products Combined for Entire Year: ";
			cout << "\t$" << totalRevenueFunction() << endl;



			//end final case, break statement not strictly needed but provides consistency
			break;
		}


	} while (menuChoice != 5);

	return 0;
}// End main method


//function definitions
void bootsQuarterlyFunction()
{
	// vars
	fstream bootsQuarterly;
	float bootsPrice;
	int bootsQuantity;
	//open file for writing
	bootsQuarterly.open("BootsProdCat.txt", ios::out);
	if (!bootsQuarterly)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	for (int count = 1; count < 5; count++)
	{
		cout << "\nEnter Data for Boots, Quarter " << count << ": ";
		cin.ignore(); // clear buffer for input
		cout << "\nPrice: ";
		cin >> bootsPrice;
		cin.ignore(); // clear buffer for input
		cout << "\nQuantity sold: ";
		cin >> bootsQuantity;
		//write to file
		bootsQuarterly << bootsPrice << " " << bootsQuantity << "\n";
	} // end for

	cout << "\n";

	//close file
	bootsQuarterly.close();
}// end function definition

void backpacksQuarterlyFunction()
{
	//vars
	fstream backpacksQuarterly;
	float backpackPrice;
	int backpackQuantity;

	//open file for writing
	backpacksQuarterly.open("BackpacksProdCat.txt", ios::out);
	if (!backpacksQuarterly)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	for (int count = 1; count < 5; count++)
	{
		cout << "\nEnter Data for Backpacks, Quarter " << count << ": ";
		cin.ignore(); // clear buffer for input
		cout << "\nPrice: ";
		cin >> backpackPrice;
		cin.ignore(); // clear buffer for input
		cout << "\nQuantity sold: ";
		cin >> backpackQuantity;
		//write to file
		backpacksQuarterly << backpackPrice << " " << backpackQuantity << "\n";
	}// end for
	cout << "\n";

	//close file
	backpacksQuarterly.close();
}// end function definition

void waterBottlesQuarterlyFunction()
{
	//vars 
	fstream waterBottlesQuarterly;
	float waterBottlesPrice;
	int waterBottlesQuantity;
	//open file for writing
	waterBottlesQuarterly.open("BottlesProdCat.txt", ios::out);
	if (!waterBottlesQuarterly)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	for (int count = 1; count < 5; count++)
	{
		cout << "\nEnter Data for Water Bottles, Quarter " << count << ": ";
		cin.ignore(); // clear buffer for input
		cout << "\nPrice: ";
		cin >> waterBottlesPrice;
		cin.ignore(); // clear buffer for input
		cout << "\nQuantity sold: ";
		cin >> waterBottlesQuantity;
		//write to file
		waterBottlesQuarterly << waterBottlesPrice << " " << waterBottlesQuantity << "\n";
	}// end for

	cout << "\n";

	//close file
	waterBottlesQuarterly.close();
}// end function definition

void foodBoxesQuarterlyFunction()
{
	fstream foodBoxesQuarterly;
	float foodBoxesPrice;
	int foodBoxesQuantity;
	//open file for writing
	foodBoxesQuarterly.open("FoodBoxesProdCat.txt", ios::out);
	if (!foodBoxesQuarterly)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	for (int count = 1; count < 5; count++)
	{
		cout << "\nEnter Data for Food Boxes, Quarter " << count << ": ";
		cin.ignore(); // clear buffer for input
		cout << "\nPrice: ";
		cin >> foodBoxesPrice;
		cin.ignore(); // clear buffer for input
		cout << "\nQuantity sold: ";
		cin >> foodBoxesQuantity;
		//write to file
		foodBoxesQuarterly << foodBoxesPrice << " " << foodBoxesQuantity << "\n";
	}// end for

	cout << "\n";

	//close file
	foodBoxesQuarterly.close();
}// end function definition


void bootsSalesQuarterlyFunction()
{
	//variables
	const int SIZE = 8;
	float bootArray[SIZE];
	int count = 0;
	fstream bootsQuarterly, bootsSales;

	//open file for reading
	bootsQuarterly.open("BootsProdCat.txt", ios::in);
	if (!bootsQuarterly)
	{
		cout << "File could not be opened for reading. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	//open file for writing
	bootsSales.open("BootsSalesData.txt", ios::out);
	if (!bootsSales)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	system("cls");
	cout << "\nSales Data for Boots." << endl;

	//read file into array
	while (bootsQuarterly >> bootArray[count])
	{
		count++;
	}// end while

	//loop through array and display information
	for (int i = 0; i <= count; i++)
	{
		if (i == 0)
		{
			cout << "\nQuarter " << i + 1 << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << bootArray[i] << endl;
			bootsSales << bootArray[i] << " ";
		}// end if

		else if (i == 1)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << bootArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << bootArray[0] * bootArray[1] << endl;
			bootsSales << bootArray[i] << " " << bootArray[0] * bootArray[1] << endl;
		}// end else if

		else if (i == 2)
		{
			cout << "\nQuarter " << i << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << bootArray[i] << endl;
			bootsSales << bootArray[i] << " ";
		}// end else if

		else if (i == 3)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << bootArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << bootArray[2] * bootArray[3] << endl;
			bootsSales << bootArray[i] << " " << bootArray[2] * bootArray[3] << endl;

		}// end else if

		else if (i == 4)
		{
			cout << "\nQuarter " << i - 1 << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << bootArray[i] << endl;
			bootsSales << bootArray[i] << " ";
		}// end else if

		else if (i == 5)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << bootArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << bootArray[4] * bootArray[5] << endl;
			bootsSales << bootArray[i] << " " << bootArray[4] * bootArray[5] << endl;

		}// end else if

		else if (i == 6)
		{
			cout << "\nQuarter " << i - 2 << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << bootArray[i] << endl;
			bootsSales << bootArray[i] << " ";
		}// end else if

		else if (i == 7)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << bootArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << bootArray[6] * bootArray[7] << endl;
			bootsSales << bootArray[i] << " " << bootArray[6] * bootArray[7] << endl;

		}// end else if
	}// end for


	//close files
	bootsQuarterly.close();
	bootsSales.close();
}// end function definition

void backpacksSalesQuarterlyFunction()
{
	//variables
	const int SIZE = 8;
	float backpackArray[SIZE];
	int count = 0;
	fstream backpacksQuarterly, backpacksSales;

	//open file for reading
	backpacksQuarterly.open("BackpacksProdCat.txt", ios::in);
	if (!backpacksQuarterly)
	{
		cout << "File could not be opened for reading. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	//open file for writing
	backpacksSales.open("BackpacksSalesData.txt", ios::out);
	if (!backpacksSales)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	system("cls");
	cout << "\nSales Data for Backpacks." << endl;

	//read file into array
	while (backpacksQuarterly >> backpackArray[count])
	{
		count++;
	}// end while

	//loop through array and display information
	for (int i = 0; i <= count; i++)
	{
		if (i == 0)
		{
			cout << "\nQuarter " << i + 1 << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << backpackArray[i] << endl;
			backpacksSales << backpackArray[i] << " ";
		}// end if

		else if (i == 1)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << backpackArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << backpackArray[0] * backpackArray[1] << endl;
			backpacksSales << backpackArray[i] << " " << backpackArray[0] * backpackArray[1] << endl;
		}// end else if

		else if (i == 2)
		{
			cout << "\nQuarter " << i << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << backpackArray[i] << endl;
			backpacksSales << backpackArray[i] << " ";
		}// end else if

		else if (i == 3)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << backpackArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << backpackArray[2] * backpackArray[3] << endl;
			backpacksSales << backpackArray[i] << " " << backpackArray[2] * backpackArray[3] << endl;

		}// end else if

		else if (i == 4)
		{
			cout << "\nQuarter " << i - 1 << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << backpackArray[i] << endl;
			backpacksSales << backpackArray[i] << " ";
		}// end else if

		else if (i == 5)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << backpackArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << backpackArray[4] * backpackArray[5] << endl;
			backpacksSales << backpackArray[i] << " " << backpackArray[4] * backpackArray[5] << endl;

		}// end else if

		else if (i == 6)
		{
			cout << "\nQuarter " << i - 2 << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << backpackArray[i] << endl;
			backpacksSales << backpackArray[i] << " ";
		}// end else if

		else if (i == 7)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << backpackArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << backpackArray[6] * backpackArray[7] << endl;
			backpacksSales << backpackArray[i] << " " << backpackArray[6] * backpackArray[7] << endl;

		}// end else if
	}// end for


	//close files
	backpacksQuarterly.close();
	backpacksSales.close();
}// end function definition

void foodBoxesSalesQuarterlyFunction()
{
	//variables
	const int SIZE = 8;
	float foodBoxesArray[SIZE];
	int count = 0;
	fstream foodBoxesQuarterly, foodBoxesSales;
	//open file for reading
	foodBoxesQuarterly.open("FoodBoxesProdCat.txt", ios::in);
	if (!foodBoxesQuarterly)
	{
		cout << "File could not be opened for reading. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	//open file for writing
	foodBoxesSales.open("FoodBoxesSalesData.txt", ios::out);
	if (!foodBoxesSales)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	system("cls");
	cout << "\nSales Data for Food Boxes." << endl;

	//read file into array
	while (foodBoxesQuarterly >> foodBoxesArray[count])
	{
		count++;
	}// end while

	//loop through array and display information
	for (int i = 0; i <= count; i++)
	{
		if (i == 0)
		{
			cout << "\nQuarter " << i + 1 << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << foodBoxesArray[i] << endl;
			foodBoxesSales << foodBoxesArray[i] << " ";
		}// end if

		else if (i == 1)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << foodBoxesArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << foodBoxesArray[0] * foodBoxesArray[1] << endl;
			foodBoxesSales << foodBoxesArray[i] << " " << foodBoxesArray[0] * foodBoxesArray[1] << endl;
		}// end else if

		else if (i == 2)
		{
			cout << "\nQuarter " << i << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << foodBoxesArray[i] << endl;
			foodBoxesSales << foodBoxesArray[i] << " ";
		}// end else if

		else if (i == 3)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << foodBoxesArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << foodBoxesArray[2] * foodBoxesArray[3] << endl;
			foodBoxesSales << foodBoxesArray[i] << " " << foodBoxesArray[2] * foodBoxesArray[3] << endl;

		}// end else if

		else if (i == 4)
		{
			cout << "\nQuarter " << i - 1 << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << foodBoxesArray[i] << endl;
			foodBoxesSales << foodBoxesArray[i] << " ";
		}// end else if

		else if (i == 5)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << foodBoxesArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << foodBoxesArray[4] * foodBoxesArray[5] << endl;
			foodBoxesSales << foodBoxesArray[i] << " " << foodBoxesArray[4] * foodBoxesArray[5] << endl;

		}// end else if

		else if (i == 6)
		{
			cout << "\nQuarter " << i - 2 << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << foodBoxesArray[i] << endl;
			foodBoxesSales << foodBoxesArray[i] << " ";
		}// end else if

		else if (i == 7)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << foodBoxesArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << foodBoxesArray[6] * foodBoxesArray[7] << endl;
			foodBoxesSales << foodBoxesArray[i] << " " << foodBoxesArray[6] * foodBoxesArray[7] << endl;

		}// end else if
	}// end for


	//close files
	foodBoxesQuarterly.close();
	foodBoxesSales.close();
}// end function definition

void waterBottlesSalesQuarterlyFunction()
{
	//variables
	const int SIZE = 8;
	float waterBottlesArray[SIZE];
	int count = 0;
	fstream waterBottlesQuarterly, waterBottlesSales;
	//open file for reading
	waterBottlesQuarterly.open("BottlesProdCat.txt", ios::in);
	if (!waterBottlesQuarterly)
	{
		cout << "File could not be opened for reading. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	//open file for writing
	waterBottlesSales.open("BottlesSalesData.txt ", ios::out);
	if (!waterBottlesSales)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	system("cls");
	cout << "Sales Data for Water Bottles." << endl;

	//read file contents into array
	while (waterBottlesQuarterly >> waterBottlesArray[count])
	{
		count++;
	}// end while

	//loop through array and display information
	for (int i = 0; i <= count; i++)
	{
		if (i == 0)
		{
			cout << "\nQuarter " << i + 1 << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << waterBottlesArray[i] << endl;
			waterBottlesSales << waterBottlesArray[i] << " ";
		}// end if

		else if (i == 1)
		{
			cout << left << setw(16) << "\tQuantity:" << " " << right << setw(16) << " " << waterBottlesArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << waterBottlesArray[0] * waterBottlesArray[1] << endl;
			waterBottlesSales << waterBottlesArray[i] << " " << waterBottlesArray[0] * waterBottlesArray[1] << endl;
		}// end else if

		else if (i == 2)
		{
			cout << "\nQuarter " << i << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << waterBottlesArray[i] << endl;
			waterBottlesSales << waterBottlesArray[i] << " ";
		}// end else if

		else if (i == 3)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << waterBottlesArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << waterBottlesArray[2] * waterBottlesArray[3] << endl;
			waterBottlesSales << waterBottlesArray[i] << " " << waterBottlesArray[2] * waterBottlesArray[3] << endl;

		}// end else if

		else if (i == 4)
		{
			cout << "\nQuarter " << i - 1 << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << waterBottlesArray[i] << endl;
			waterBottlesSales << waterBottlesArray[i] << " ";
		}// end else if

		else if (i == 5)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << waterBottlesArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << waterBottlesArray[4] * waterBottlesArray[5] << endl;
			waterBottlesSales << waterBottlesArray[i] << " " << waterBottlesArray[4] * waterBottlesArray[5] << endl;

		}// end else if

		else if (i == 6)
		{
			cout << "\nQuarter " << i - 2 << ":" << endl;
			cout << left << setw(16) << "\tPrice:" << right << setw(16) << "$" << waterBottlesArray[i] << endl;
			waterBottlesSales << waterBottlesArray[i] << " ";
		}// end else if

		else if (i == 7)
		{
			cout << left << setw(16) << "\tQuantity:" << right << setw(16) << " " << waterBottlesArray[i] << endl;
			cout << left << setw(16) << "\tTotal Sales:" << right << setw(16) << "$" << waterBottlesArray[6] * waterBottlesArray[7] << endl;
			waterBottlesSales << waterBottlesArray[i] << " " << waterBottlesArray[6] * waterBottlesArray[7] << endl;

		}// end else if
	}// end for


	//close files
	waterBottlesQuarterly.close();
	waterBottlesSales.close();
}// end function definition


void bootsTotalSalesFunction()
{
	// vars
	const int SIZE = 12;
	float bootSalesArray[SIZE], totalBootsSales, totalBootsRevenue;
	int count = 0, totalBootsSold;
	fstream bootsSales, bootsTotalSales;
	//open file for reading
	bootsSales.open("BootsSalesData.txt", ios::in);
	if (!bootsSales)
	{
		cout << "File could not be opened for reading. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	//open file for writing
	bootsTotalSales.open("BootsSalesDataTotal.txt", ios::out);
	if (!bootsTotalSales)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	system("cls");
	cout << "Sales Data for Boots.\n" << endl;

	// read file data into array
	while (bootsSales >> bootSalesArray[count])
	{
		count++;
	}// end while

	//calculate total revenue using data from array
	totalBootsSales = (bootSalesArray[0] * bootSalesArray[1]) + (bootSalesArray[3] * bootSalesArray[4]) + (bootSalesArray[6] * bootSalesArray[7]) + (bootSalesArray[9] * bootSalesArray[10]);
	//calculate total quantity sold using data from array
	totalBootsSold = bootSalesArray[1] + bootSalesArray[4] + bootSalesArray[7] + bootSalesArray[10];

	//output data to user
	cout << left << setw(30) << "\tTotal Units Sold:" << right << setw(12) << " " << totalBootsSold << endl;
	cout << left << setw(30) << "\tTotals Revenue for Boots:" << right << setw(12) << "$" << totalBootsSales << endl;
	//write total revenue to ouput file
	bootsTotalSales << totalBootsSales;


	//close files
	bootsTotalSales.close();
	bootsSales.close();
}// end function definition

void backpacksTotalSalesFunction()
{
	// vars
	const int SIZE = 12;
	float backpackSalesArray[SIZE], totalBackpacksRevenue;
	int count = 0, totalBackpacksSold;
	fstream backpacksSales, backpackTotalSales;
	//open file for reading
	backpacksSales.open("BackpacksSalesData.txt", ios::in);
	if (!backpacksSales)
	{
		cout << "File could not be opened for reading. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	//open file for writing
	backpackTotalSales.open("BackpacksSalesDataTotal.txt", ios::out);
	if (!backpackTotalSales)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	system("cls");
	cout << "Sales Data for Backpacks.\n" << endl;

	// read file data into array
	while (backpacksSales >> backpackSalesArray[count])
	{
		count++;
	}// end while

	//calculate total revenue using data from array
	totalBackpacksRevenue = (backpackSalesArray[0] * backpackSalesArray[1]) + (backpackSalesArray[3] * backpackSalesArray[4]) + (backpackSalesArray[6] * backpackSalesArray[7]) + (backpackSalesArray[9] * backpackSalesArray[10]);
	//calculate total quantity sold using data from array
	totalBackpacksSold = backpackSalesArray[1] + backpackSalesArray[4] + backpackSalesArray[7] + backpackSalesArray[10];

	//output data to user
	cout << left << setw(35) << "\tTotal Units Sold:" << right << setw(12) << " " << totalBackpacksSold << endl;
	cout << left << setw(35) << "\tTotals Revenue for Backpacks:" << right << setw(12) << "$" << totalBackpacksRevenue << endl;
	//write total revenue to ouput file
	backpackTotalSales << totalBackpacksRevenue;


	//close files
	backpackTotalSales.close();
	backpacksSales.close();

}// end function definition

void waterBottlesTotalSalesFunction()
{
	//variables
	const int SIZE = 12;
	float waterBottlesSalesArray[SIZE], waterBottlesTotalRevenue;
	int count = 0, totalWaterBottlesSold;
	fstream waterBottlesTotalSales, waterBottlesSales;
	//open file for reading
	waterBottlesSales.open("BottlesSalesData.txt", ios::in);
	if (!waterBottlesSales)
	{
		cout << "File could not be opened for reading. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	//open file for writing
	waterBottlesTotalSales.open("BottlesSalesDataTotal.txt  ", ios::out);
	if (!waterBottlesTotalSales)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	system("cls");
	cout << "Sales Data for Water Bottles.\n" << endl;

	//read file into array
	while (waterBottlesSales >> waterBottlesSalesArray[count])
	{
		count++;
	}// end while
	//calculate total revenue using data from array
	waterBottlesTotalRevenue = (waterBottlesSalesArray[0] * waterBottlesSalesArray[1]) + (waterBottlesSalesArray[3] * waterBottlesSalesArray[4]) + (waterBottlesSalesArray[6] * waterBottlesSalesArray[7]) + (waterBottlesSalesArray[9] * waterBottlesSalesArray[10]);
	//calculate total quantity sold using data from array
	totalWaterBottlesSold = waterBottlesSalesArray[1] + waterBottlesSalesArray[4] + waterBottlesSalesArray[7] + waterBottlesSalesArray[10];

	//output data to user
	cout << left << setw(35) << "\tTotal Units Sold:" << right << setw(12) << " " << totalWaterBottlesSold << endl;
	cout << left << setw(35) << "\tTotals Revenue for Backpacks:" << right << setw(12) << "$" << waterBottlesTotalRevenue << endl;
	//write total revenue to ouput file
	waterBottlesTotalSales << waterBottlesTotalRevenue;

	//close files
	waterBottlesSales.close();
	waterBottlesTotalSales.close();
}//end function definition

void foodBoxesTotalSalesFunction()
{
	//variables
	const int SIZE = 12;
	float foodBoxesSalesArray[SIZE], totalFoodBoxesRevenue;
	int count = 0, totalFoodBoxesSold;
	fstream foodBoxesTotalSales, foodBoxesSales;
	//open file for reading
	foodBoxesSales.open("FoodBoxesSalesData.txt", ios::in);
	if (!foodBoxesSales)
	{
		cout << "File could not be opened for reading. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	//open file for writing
	foodBoxesTotalSales.open("FoodBoxesSalesDataTotal.txt", ios::out);
	if (!foodBoxesTotalSales)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	system("cls");
	cout << "Sales Data for Food Boxes.\n" << endl;

	//read file into array
	while (foodBoxesSales >> foodBoxesSalesArray[count])
	{
		count++;
	}// end while

	//calculate total revenue using data from array
	totalFoodBoxesRevenue = (foodBoxesSalesArray[0] * foodBoxesSalesArray[1]) + (foodBoxesSalesArray[3] * foodBoxesSalesArray[4]) + (foodBoxesSalesArray[6] * foodBoxesSalesArray[7]) + (foodBoxesSalesArray[9] * foodBoxesSalesArray[10]);
	//calculate total quantity sold using data from array
	totalFoodBoxesSold = foodBoxesSalesArray[1] + foodBoxesSalesArray[4] + foodBoxesSalesArray[7] + foodBoxesSalesArray[10];

	//output data to user
	cout << left << setw(35) << "\tTotal Units Sold:" << right << setw(12) << " " << totalFoodBoxesSold << endl;
	cout << left << setw(35) << "\tTotals Revenue for Backpacks:" << right << setw(12) << "$" << totalFoodBoxesRevenue << endl;
	//write total revenue to ouput file
	foodBoxesTotalSales << totalFoodBoxesRevenue;


	//close files
	foodBoxesTotalSales.close();
	foodBoxesSales.close();

}//end function definition

float totalRevenueFunction()
{
	//vars
	fstream foodBoxesTotalSales, waterBottlesTotalSales, backpackTotalSales, bootsTotalSales, totalProductsRevenue;
	float bootsAnnualRevenue, backpacksAnnualRevenue, waterBottlesAnnualRevenue, foodBoxesAnnualRevenue, totalAnnualRevenue;

	// open files for reading
	bootsTotalSales.open("BootsSalesDataTotal.txt", ios::in);
	if (!bootsTotalSales)
	{
		cout << "File could not be opened for reading. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	backpackTotalSales.open("BackpacksSalesDataTotal.txt", ios::in);
	if (!backpackTotalSales)
	{
		cout << "File could not be opened for reading. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	waterBottlesTotalSales.open("BottlesSalesDataTotal.txt  ", ios::in);
	if (!waterBottlesTotalSales)
	{
		cout << "File could not be opened for reading. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	foodBoxesTotalSales.open("FoodBoxesSalesDataTotal.txt", ios::in);
	if (!foodBoxesTotalSales)
	{
		cout << "File could not be opened for reading. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	//open file for writing
	totalProductsRevenue.open("TotalSalesDataForYear.txt", ios::out);
	if (!totalProductsRevenue)
	{
		cout << "File could not be opened for writing. Please call System Admin.";
		Sleep(3000);
		exit(1);
	} // end if

	//read data into variables
	bootsTotalSales >> bootsAnnualRevenue;
	backpackTotalSales >> backpacksAnnualRevenue;
	waterBottlesTotalSales >> waterBottlesAnnualRevenue;
	foodBoxesTotalSales >> foodBoxesAnnualRevenue;

	//calculate total annual revenue
	totalAnnualRevenue = foodBoxesAnnualRevenue + waterBottlesAnnualRevenue + backpacksAnnualRevenue + bootsAnnualRevenue;
	//write total to file
	totalProductsRevenue << totalAnnualRevenue;

	//return value from function
	return totalAnnualRevenue;

	//close files
	foodBoxesTotalSales.close();
	waterBottlesTotalSales.close();
	backpackTotalSales.close();
	bootsTotalSales.close();
	totalProductsRevenue.close();
}// end function definition