#include <iostream>
#include <string>


using namespace std;

int main()
{
	char Buffer[1024] = { 0, };

	cin >> Buffer;

	int Size = 0;

	for (int i = 0; i < 1024; ++i)
	{
		if (Buffer[i] == '\0')
		{
			Size = i + 1;
		}
	}

	char* Array = new char[Size];

	for (int i = 0; i < Size; ++i)
	{
		Array[i] = Buffer[i];
	}

	cout << Array << endl;



	//for (int i = 0; i < Size; ++i)
	//{
	//	Array[i] = i + 1;
	//}

	//for (int i = 0; i < Size; ++i)
	//{
	//	cout << Array[i] << ", ";
	//}

	delete[] Array;





	return 0;
}