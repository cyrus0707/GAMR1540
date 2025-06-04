#include <iostream>
#include <string>


using namespace std;

float doublevalue(float x)
{
	return x * 2;
}

float halfvalue(float x)
{
	return x / 2;
}

int main()
{
	string answer;
	float fnumber;

	cout << "Hello Mate, you tryna double of half a number youre going to input? " << endl;
	cout << "Type 'double' or 'half': ";
	cin >> answer;

	cout << "Enter a number: ";
	cin >> fnumber;

	if (answer == "Double" || answer == "double")
	{
		fnumber = doublevalue(fnumber);
		cout << "Your number is: " << fnumber << endl;
	}

	else if (answer == "Half" || answer == "half")
	{
		fnumber = halfvalue(fnumber);
		cout << "Your number is: " << fnumber << endl;
	}

	else
	{
		cout << "Wrong input, type 'double' or 'half' silly billy: ";
	}

	return 0;

}
/*
*float cube(float x)
{
	return x * x * x;
}

float square(float x)
{
	return x * x;
}



int main()
{
	string answer;
	float fnumber;

	cout << " Hello would you like a number of your choice to be squared or cubed" << endl;
	cout << "Type 'squared' or 'cubed': ";
	cin >> answer;

	cout << "Enter a number: ";
	cin >> fnumber;


	if (answer == "squared" || answer == "Squared") {
		fnumber = square(fnumber);
		cout << "The square of the number is: " << fnumber << endl;
	}
	else if (answer == "cubed" || answer == "Cubed") {
		fnumber = cube(fnumber);
		cout << " The cube of the number is: " << fnumber << endl;
	}
	else {
		cout << "Invalid input. Please type 'squared' or 'cubed'." << endl;
	}

	system("pause");
	return 0;
}


	
/*
char cChars[10];
for (int i = 0; i < 10; i++)
{
	cout << "Enter character number " << i + 1 << ": "; cin >> cChars[i];
}

// 10 times to multiplication grid
/*
	for (int i = 1; i <= 10; ++i) {
		// Inner loop for columns
		for (int j = 1; j <= 10; ++j) {
			cout << i * j << "\t";
		}
		cout << endl; // New line after each row
	}

	return 0;
	*/


/**string row1 = " ** ** ** ** ** **";
string row2 = "** ** ** ** ** ** ";
for (int i = 0; i < 8; i++)
{
	if (i % 2)
	{
		cout << row2 << endl; // Odd row
	}
	else
	{
		cout << row1 << endl; // Even row
	}
}

/**string row1 = " ** ** ** ** ** **";
string row2 = "** ** ** ** ** ** ";
for (int i = 0; i < 6; i++)
{
	cout << row1 << endl;
	cout << row2 << endl;
/






/**cout << "i\tj" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << i << "\t" << j << endl;
		}
	}

		return 0;

}
                 *///