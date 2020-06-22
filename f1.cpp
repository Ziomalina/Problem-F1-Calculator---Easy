#include <bits/stdc++.h>

using namespace std;

double Obliczanie( string exprsn )
{
	

	int suma = 0;
	int jakizank = -1;


	for (int i = 0; i < exprsn.size()  ; i++)
	{
		
		if (exprsn[i] == ' ')
            continue;
            
		if (i == 0)
		{
			suma = suma + exprsn[0] - '0';
		}
		else
			if (i % 2 == 1)
			{
				if (exprsn[i] == '+')
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
					suma = suma + (exprsn[i] - '0') ;
				}
				else if (jakizank == 0)
				{
					suma = suma - (exprsn[i] - '0');
				}



			}


	}


	return suma;


}



int main()
{
	
	string s;
	
    while(getline(cin, s)) 
	{
        cout << Obliczanie(s) << ' ';
    }
   

	
	cout << '\n';
//	system("pause");
	return 0;
}
