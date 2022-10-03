

#include <iostream>

#include <fstream>

using namespace std;

const int n = 100;

int z = 0;

int m = 0;

int z1 = 0;

void save(char a[n][n], int k)

{

	ofstream f1;

	f1.open("Save Slot.txt");

	f1 << k << endl;

	f1 << z << endl;

	for (int i = 0; i < k; i++)

	{

		for (int j = 0; j < k; j++)

		{

			f1 << a[i][j];
		}

		f1 << endl;
	}

	f1.close();
}

void printboard(int a[n][n], int k)

{

	int a1 = 1;

	for (int i = 0; i < k; i++)

	{

		for (int j = 0; j < k; j++)

		{

			a[i][j] = a1;

			a1++;

			if (j < k - 1)

			{

				cout << a[i][j] << "|"
					 << "\t";
			}

			if (j == k - 1)

			{

				cout << a[i][j] << "\t";
			}
		}

		if (i < k - 1)

		{

			cout << endl;

			for (int i = 0; i < k; i++)

			{

				cout << "------";
			}

			cout << endl;
		}

		if (i == k - 1)

		{

			cout << endl;
		}
	}

	cout << endl
		 << endl
		 << endl;
}

void printboard1(char a[n][n], int k)

{

	int x = 0;

	cout << "Player X turn: ";

	cin >> x;

	int a1 = 1;

	if (x == -1)

	{

		save(a, k);
	}

	if (x > 0 && x <= k * k)

	{

		for (int i = 0; i < k; i++)

		{

			for (int j = 0; j < k; j++)

			{

				if (a1 == x)

				{

					if (a[i][j] == '\0')

					{

						a[i][j] = 'X';
					}

					else

					{

						cout << "Invalid Move " << x << " is Already taken Try Again\n";

						z--;

						z1 = 1;
					}
				}

				a1++;
			}
		}
	}

	else if (x != -1)

	{

		cout << "Invalid Move range (1-" << k * k << ") Try Again\n";

		z--;

		z1 = 1;
	}

	if (x != -1 && z1 != 1)

	{

		for (int i = 0; i < k; i++)

		{

			for (int j = 0; j < k; j++)

			{

				if (j < k - 1)

				{

					cout << a[i][j] << "|"
						 << "\t";
				}

				if (j == k - 1)

				{

					cout << a[i][j] << "\t";
				}
			}

			if (i < k - 1)

			{

				cout << endl;

				for (int i = 0; i < k; i++)

				{

					cout << "------";
				}

				cout << endl;
			}

			if (i == k - 1)

			{

				cout << endl;
			}
		}

		cout << endl
			 << endl
			 << endl;
	}

	if (x == -1 || z1 > !0)

	{

		cout << "Game Saved\n";

		z = m + 1;
	}

	z1 = 0;
}

void printboard2(char a[n][n], int k)

{

	int x = 0;

	cout << "Player O turn: ";

	cin >> x;

	int a1 = 1;

	if (x == -1)

	{

		save(a, k);

		z = m + 1;
	}

	if (x > 0 && x <= k * k)

	{

		for (int i = 0; i < k; i++)

		{

			for (int j = 0; j < k; j++)

			{

				if (a1 == x)

				{

					if (a[i][j] == '\0')

					{

						a[i][j] = 'O';
					}

					else

					{

						cout << "Invalid Move " << x << " is Already taken Try Again\n";

						z--;

						z1 = 1;
					}
				}

				a1++;
			}
		}
	}

	else if (x != -1)

	{

		cout << "Invalid Move range (1-" << k * k << ") Try Again\n";

		z--;

		z1 = 1;
	}

	if (x != -1 && z1 != 1)

	{

		for (int i = 0; i < k; i++)

		{

			for (int j = 0; j < k; j++)

			{

				if (j < k - 1)

				{

					cout << a[i][j] << "|"
						 << "\t";
				}

				if (j == k - 1)

				{

					cout << a[i][j] << "\t";
				}
			}

			if (i < k - 1)

			{

				cout << endl;

				for (int i = 0; i < k; i++)

				{

					cout << "------";
				}

				cout << endl;
			}

			if (i == k - 1)

			{

				cout << endl;
			}
		}

		cout << endl
			 << endl
			 << endl;
	}

	if (x == -1 || z1 > !0)

	{

		cout << "Game Saved\n";

		z = m + 1;
	}

	z1 = 0;
}

void playerX(char a[n][n], int k)

{

	int i = 0, b = 0;

	for (; i < k; i++)

	{

		b = 0;

		for (int j = 0; j < k; j++)

		{

			if (a[i][j] == 'X')

			{

				b++;
			}
		}

		if (b == k)

		{

			cout << "Player X Wins\n";

			i = k;

			z = m + 1;
		}
	}

	for (b = 0, i = 0; i < k; i++)

	{

		b = 0;

		for (int j = 0; j < k; j++)

		{

			if (a[j][i] == 'X')

			{

				b++;
			}
		}

		if (b == k)

		{

			cout << "Player X Wins\n";

			i = k;

			z = m + 1;
		}
	}

	b = 0;

	for (int j = 0, i = 0; j < k; j++, i++)

	{

		if (a[i][j] == 'X')

		{

			b++;
		}
	}

	if (b == k)

	{

		cout << "Player X Wins\n";

		z = m + 1;
	}

	b = 0;

	for (int j = k - 1, i = 0; i < k; j--, i++)

	{

		if (a[i][j] == 'X')

		{

			b++;
		}
	}

	if (b == k)

	{

		cout << "Player X Wins\n";

		z = m + 1;
	}
}

void playerO(char a[n][n], int k)

{

	int i = 0, b = 0;

	for (b = 0; i < k; i++)

	{

		b = 0;

		for (int j = 0; j < k; j++)

		{

			if (a[i][j] == 'O')

			{

				b++;
			}
		}

		if (b == k)

		{

			cout << "Player O Wins\n";

			i = k;

			z = m + 1;
		}
	}

	b = 0;

	for (i = 0; i < k; i++)

	{

		b = 0;

		for (int j = 0; j < k; j++)

		{

			if (a[j][i] == 'O')

			{

				b++;
			}
		}

		if (b == k)

		{

			cout << "Player O Wins\n";

			i = k;

			z = m + 1;
		}
	}

	b = 0;

	for (int j = 0, i = 0; j < k; j++, i++)

	{

		if (a[i][j] == 'O')

		{

			b++;
		}
	}

	if (b == k)

	{

		cout << "Player O Wins\n";

		z = m + 1;
	}

	b = 0;

	for (int j = k - 1, i = 0; i < k; j--, i++)

	{

		if (a[i][j] == 'O')

		{

			b++;
		}
	}

	if (b == k)

	{

		cout << "Player O Wins\n";

		z = m + 1;
	}
}

void turns(char a[n][n], int k)

{

	m = k * k;

	for (; z < m;)

	{

		if (z % 2 == 0)

		{

			printboard1(a, k);

			playerX(a, k);

			z++;
		}

		if (z % 2 != 0 && z != m)

		{

			printboard2(a, k);

			playerO(a, k);

			z++;
		}
	}

	if (z == m)

	{

		cout << "Draw\n";
	}
}

void load(char a[n][n], int k)

{

	ifstream f2;

	f2.open("Save Slot.txt");

	if (f2)

	{

		f2 >> k;

		f2 >> z;

		for (int i = 0; i < k; i++)

		{

			for (int j = 0; j < k; j++)

			{

				f2 >> a[i][j];
			}
		}

		for (int i = 0; i < k; i++)

		{

			for (int j = 0; j < k; j++)

			{

				if (j < k - 1)

				{

					cout << a[i][j] << "|"
						 << "\t";
				}

				if (j == k - 1)

				{

					cout << a[i][j] << "\t";
				}
			}

			if (i < k - 1)

			{

				cout << endl;

				for (int i = 0; i < k; i++)

				{

					cout << "------";
				}

				cout << endl;
			}

			if (i == k - 1)

			{

				cout << endl;
			}
		}

		cout << endl
			 << endl
			 << endl;

		turns(a, k);
	}

	else

	{

		cout << "No file saved";
	}

	f2.close();
}

int main()

{

	cout << "Instructions\nPress 1 to start a new game\nPress 2 to load the previous game\nPress -1 at any point to save the game\nChoice: ";

	int g = 0;

	cin >> g;

	int a[n][n] = {0};

	int k = 0;

	for (int t = 1; t < 3;)

	{

		if (g < 1 || g > 2)

		{

			cout << "Invalid Move Please Select from the Given Instructions Try Again\nChoice: ";

			cin >> g;
		}

		else

		{

			t = 3;
		}
	}

	if (g != 2)

	{

		cout << "Size of Square NxN: ";

		cin >> k;

		for (; k < 3;)

		{

			cout << "Invalid Move Size of Square should be >= 3 Try Again\n";

			cout << "Size of Square NxN: ";

			cin >> k;
		}

		printboard(a, k);
	}

	char b[n][n] = {'\0'};

	if (g == 1)

	{

		turns(b, k);
	}

	if (g == 2)

	{

		load(b, k);
	}

	system("pause");

	return 0;
}
