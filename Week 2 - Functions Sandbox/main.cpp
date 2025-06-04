#include <iostream>

using namespace std;

void printTwoLines()
{
	cout << "--------------------" << endl;
	cout << "--------------------" << endl;
}

int main()
{
	printTwoLines();
	cout << "Hello world!" << endl;
	printTwoLines();

	system("pause");
	return 0;
}