// CppProtocolParser02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char str[] = "$ZZPP|nombre1|nombre2|apellido1|apellido2|apodo|edad";

	char nombre1[1024] = { '\0' };
	char nombre2[1024] = { '\0' };
	char apellido1[1024] = { '\0' };
	char apellido2[1024] = { '\0' };
	char apodo[1024] = { '\0' };
	char edad[1024] = { '\0' };

	char delimOr = '|';

	unsigned char delimOrPos[6];

	unsigned int delimOrCount = 0;

	for (unsigned int i = 0; i < strlen(str); i++)
	{
		if (str[i] == delimOr)
		{
			delimOrPos[delimOrCount] = i;
			cout << delimOrPos[delimOrCount];
			delimOrCount++;
		}
	}

	char nombre1Pos = delimOrPos[0] + 1;
	char nombre2Pos = delimOrPos[1] + 1;
	char apellido1Pos = delimOrPos[2] + 1;
	char apellido2Pos = delimOrPos[3] + 1;
	char apodoPos = delimOrPos[4] + 1;
	char edadPos = delimOrPos[5] + 1;

	for (unsigned int i = nombre1Pos; i < delimOrPos[1]; i++)
	{
		nombre1[i - nombre1Pos] = str[i];
		cout << nombre1[i - nombre1Pos];
	}

	cout << "\n";

	for (unsigned int i = nombre2Pos; i < delimOrPos[2]; i++)
	{
		nombre2[i - nombre2Pos] = str[i];
		cout << nombre2[i - nombre2Pos];
	}

	cout << "\n";

	for (unsigned int i = apellido1Pos; i < delimOrPos[3]; i++)
	{
		apellido1[i - apellido1Pos] = str[i];
		cout << apellido1[i - apellido1Pos];
	}

	cout << "\n";

	for (unsigned int i = apellido2Pos; i < delimOrPos[4]; i++)
	{
		apellido2[i - apellido2Pos] = str[i];
		cout << apellido2[i - apellido2Pos];
	}

	cout << "\n";

	for (unsigned int i = apodoPos; i < delimOrPos[5]; i++)
	{
		apodo[i - apodoPos] = str[i];
		cout << apodo[i - apodoPos];
	}
	for (unsigned int i = edadPos; i < strlen(str); i++)
	{
		edad[i - edadPos] = str[i];
		cout << edad[i - edadPos];
	}

	cout << "\n";

	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
