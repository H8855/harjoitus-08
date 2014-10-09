#include <iostream>
using namespace std;

void main(void)
{
	int i;
	float luku[3];


	for (i = 0; i < 3; i++)
		{
		cout << "Anna luku " << i+1 ": ";
		cin >> luku[i];
		}

	if (luku[0] <= luku[1])
		if (luku[0] <= luku[2])
		{
			cout << luku[0];
			if (luku[1] >= luku[2])
			{
				cout << luku[1];
				cout << luku[2];
			}
		}
		else
		{
			cout << luku[2];
			cout << luku[0];
			cout << luku[1];
		}
	else
	{
		if (luku[1] <= luku[2])
		{
			cout << luku[1];
			cout << luku[2];
			cout << luku[0];
		}
		else
		{
			cout << luku[2];
			cout << luku[1];
			cout << luku[0];

		}
	}
}