//Student Name: Alexander Mendez

//Teacher: Dr. Tyson McMillan

//Date: 11-6-20

//A program to practice working with multi-dimensional arrays

// repl.it macOS

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.com

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

City Fort Worth, TX, Day 1: 78

City Fort Worth, TX, Day 2: 77

City Fort Worth, TX, Day 3: 77

City Fort Worth, TX, Day 4: 74

City Fort Worth, TX, Day 5: 72

City Fort Worth, TX, Day 6: 75

City Fort Worth, TX, Day 7: 70

City Honolulu, HI, Day 1: 84

City Honolulu, HI, Day 2: 85

City Honolulu, HI, Day 3: 84

City Honolulu, HI, Day 4: 83

City Honolulu, HI, Day 5: 82

City Honolulu, HI, Day 6: 82

City Honolulu, HI, Day 7: 83

*/

 

int main()

{

    const int CITY = 2;

    const int WEEK = 7;

	string cityName[2] = {"Fort Worth, Tx" , "Honolulu, HI"};

			

    int temperature[CITY][WEEK];




    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)

    {
		if(i == 0) // in the first loop, uses the first city names
		{
			for(int j = 0; j < WEEK; ++j)

			{
				cout << "City: " << cityName[0] << ", Day " << j + 1 << " : ";

				cin >> temperature[i][j];

			}
		}
		else
		{
			for(int j = 0; j < WEEK; ++j)

			{
				cout << "City: " << cityName[1] << ", Day " << j + 1 << " : ";

				cin >> temperature[i][j];

			}

		}
	
		

    }

 

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {
		if(i == 0)
		{
			for(int j = 0; j < WEEK; ++j)
			{

				cout << "City: " << cityName[0] << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

			}
		}
		else
		{
			for(int j = 0; j < WEEK; ++j)
			{

				cout << "City: " << cityName[1] << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

			}
		}

    }






   /*For up to 5 Points Extra Credit

      Expand this program:

      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....

      2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....

      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.

      4. print the results of temperature[i][j]; to the screen.

    */


	// One dimensional arrays

	cout << "\n\nOne Dimensional Array Method\n" << endl;

	int cityOne[7];
	int cityTwo[7];


	// Input the temperature for both cities

	cout << "Please enter the temperature of each day\n" << endl;

	for(int i = 0; i < 7; i++)
	{
		cout << "City: " << cityName[0] << ", Day " << (i+1) << ": ";
		cin >> cityOne[i];
	}
	
	for(int i = 0; i < 7; i++)
	{
		cout << "City: " << cityName[1] << ", Day " << (i+1) << ": ";
		cin >> cityTwo[i];
	}



	// Transfer values from the one dimensional array to the multi-dimensional array

	for (int i = 0; i < CITY; ++i)

    {
		if(i == 0) 
		{
			for(int j = 0; j < WEEK; ++j)
			{
				temperature[i][j] = cityOne[j];


			}
		}
		else
		{
			for(int j = 0; j < WEEK; ++j)
			{
				temperature[i][j] = cityTwo[j];

			}
		}

    }


	cout << "\n\nDisplaying the values\n" << endl;

	for (int i = 0; i < CITY; ++i)

    {
		if(i == 0)
		{
			for(int j = 0; j < WEEK; ++j)
			{

				cout << "City: " << cityName[0] << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

			}
		}
		else
		{
			for(int j = 0; j < WEEK; ++j)
			{

				cout << "City: " << cityName[1] << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

			}
		}

    }

 

    return 0;

}