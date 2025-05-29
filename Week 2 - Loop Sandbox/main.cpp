#include <iostream>

using namespace std;

float fNumber = 5.0f;

float square()
{
	float result;
	result = fNumber * fNumber;
	return result;
}

int main()
{
	float fAnotherNumber;
	fAnotherNumber = square();
	cout << fAnotherNumber << endl;
	system("pause");
	return 0;
}







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