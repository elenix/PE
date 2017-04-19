#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{

	const int NP = 10;
	const int Length = 27;

	string people[NP] = {"El, 018-7715098",
						"Siang ge, 017-9620885",
						"Aqeeru Safanu, 014-5095235",
						"Didie, 013-7808124",
						"Dila, 019-9629360",
						"Farah, 010-7104959",
						"Mai, 014-8118410",
						"Lan ge, 016-4661741",
						"Kakak Cantik, 017-5921635",
						"Zawaney, 010-7004798" };


	char lookUp[Length];
	char *strPtr = NULL;

	int index;

	cout << "\tPeople and Phone Numbers\n\n";

	cout << "Enter a name or partial name to search for: ";
	cin.getline(lookUp, 27);

	for (index = 0; index < 10; index++)
	{
		strPtr = people.find(lookUp, Length);
		if (strPtr != NULL)
		break;
	}

	if (strPtr == NULL)
		cout << "No matching product was found.\n";
	else
		cout << people[index] << endl;

  return 0;
}

