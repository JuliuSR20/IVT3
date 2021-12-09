#include <iostream>
using namespace std;

int main()
{
	int cislo;
   cout << "zadaj cislo:";
   cin >> cislo;
   cislo = 100;
	while (cislo <= 300)
	{
		if (cislo % 3 == 0)
		{
			cout << cislo << endl;
		}
		cislo++;
	}
  
}

 