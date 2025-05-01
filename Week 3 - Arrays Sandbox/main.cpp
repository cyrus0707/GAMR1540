#include <iostream>

int main()
{
	// 6x6 array
    int iArr[6][6] = { 
		{1,2,3,9,1,7},
		{4,5,6,1,2,3},
		{1,2,3,7,8,9},
		{1,2,3,9,1,7},
		{4,5,6,1,2,3},
		{1,2,3,7,8,9}
	};
	
	
	int iRow = sizeof iArr / sizeof iArr[0];
	int iCol = sizeof iArr[0] / sizeof iArr[0][0];

	// use nested for loops to print the content of the array
	for (int i = 0; i < iRow; i++)
	{
		for (int j = 0; j < iCol; j++)
		{
			std::cout << "index " << i << j << " = " << iArr[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	system("PAUSE");
    return 0;
}

