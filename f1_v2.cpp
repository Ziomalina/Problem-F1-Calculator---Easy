#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int suma = 0;
	int jakizank = -1;

	char napis[] = "1+6+7+7-2";
	int dlugoscNapisu = strlen(napis) ;



	for (int i = 0; i < dlugoscNapisu ; i++)
	{
		if (i == 0)
		{
			suma = suma + napis[0] - '0';
		}
		else
			if (i % 2 == 1)
			{
				if (napis[i] == '+')
				{
					jakizank = 1; // dla plusa
				}
				else
				{
					jakizank = 0;   // dla minusa
				}

			}
			else
			{
				if (jakizank == 1)
				{
					suma = suma + (napis[i] - '0') ;
				}
				else if (jakizank == 0)
				{
					suma = suma - (napis[i] - '0');
				}



			}


	}


	cout << suma;


	cout << endl << endl;
	return 0;
}

