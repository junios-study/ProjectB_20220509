#include <iostream>

#define MAX 52

#define MAX10(X)			(X > 10) ? 10 : X
#define MAX2(A, B)			((A > B) ? A : B)
#define MAX3(A, B, C)		(A > B) ? MAX2(A, C) : MAX2(B, C)

using namespace std;

//int Max10(int Number)
//{
//	return (Number > 10) ? 10 : Number;
//}

//Swap
void Swap(int* First, int* Second)
{
	cout << "-------- " << *First << ", " << *Second << endl;

	int Temp = *First;
	*First = *Second;
	*Second = Temp;

	cout << "-------- " << *First << ", " << *Second << endl;
}


int main()
{

	/*
		int Deck[MAX] = { 0, };

		for (int i = 0; i < 52; ++i)
		{
			Deck[i] = (i % 13) + 1;
		}

		srand(static_cast<unsigned int>(time(NULL)));


		int ShuffleCount = (rand() % 20) + 2;
		for (int i = 0; i < MAX * ShuffleCount; ++i)
		{
			int FirstNumber = rand() % MAX;
			int SecondNumber = rand() % MAX;
			int Temp = Deck[FirstNumber];
			Deck[FirstNumber] = Deck[SecondNumber];
			Deck[SecondNumber] = Temp;
		}

		int Player[3] = { 0, };
		int AI[3] = { 0, };

		for (int i = 0; i < 3; ++i)
		{
			Player[i] = Deck[i * 2];
			AI[i] = Deck[(i * 2) + 1];
		}

		int PlayerSum = 0;
		int AISum = 0;

		for (int i = 0; i < 3; ++i)
		{
			//PlayerSum += (Player[i] > 10) ? 10 : Player[i];
			PlayerSum += MAX10(Player[i]);
			//AISum += (AI[i] > 10) ? 10 : AI[i];
			AISum += MAX10(AI[i]);

		}

		cout << "Player : " << PlayerSum << endl;
		cout << "AI : " << AISum << endl;

		if (AISum >= 22)
		{
			cout << "Player Win" << endl;
		}
		else if (AISum <= 21 && PlayerSum <= 21)
		{
			if (PlayerSum >= AISum)
			{
				cout << "Player Win" << endl;
			}
			else
			{
				cout << "AI Win" << endl;
			}
		}
		else
		{
			cout << "AI Win" << endl;
		}

		int A = 10;
		int B = 20;
		int C = 30;

		int Z = MAX2(A, B);

		cout << Z << endl;

		Z = MAX3(A, B, C);

		cout << Z << endl;
	*/

	int First = 10;
	int Second = 20;

	//cout << &First << endl;
	//cout << &Second << endl;

	//int* Third = &First;

	//First = 30;

	//cout << Third << endl;

	cout << First << ", " << Second << endl;

	Swap(&First, &Second);

	cout << First << ", " << Second << endl;

	//��������(�ڷ���) �ڿ� * ������ �����ϴ� ���� �ٲ�, 
	//int*  - int�� ������ ��ġ(Memory Address, 0xff0010)�� ����ϴ� ����

	//int* ������ ������ ������ �տ� *�� ������ �׺����� ����ġ�� ��ġ�� ���� ������
	//int* A;
	//*A  A�� ������ �ּ��� ��ġ�� int�� ���� ������
	//�Ϲݺ����� &�� ������ �� ������ ��ġ�� �Ѱ���(�޸� �ּ�, 0xff0010)


	return 0;
}
