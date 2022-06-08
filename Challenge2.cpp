#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputs2("inputs2.txt");

	if (inputs2.is_open())
	{
		int T;
		inputs2 >> T;

		string line;
		char c;
		int total;

		inputs2.ignore(10000, '\n'); //ignore the first line

		//calculate and print the sum of the digits of each line
		for (int i = 0; i < T; i++)
		{
			total = 0;
			getline(inputs2, line);

			for (int j = 0; j < line.length(); j++)
			{
				c = line[j];

				if (c > 47 && c < 58) //ascii value range for digits
				{
					total += c - 48;
				}
			}

			cout << total << endl;
		}
	}
	else
		cout << "Unable to open file";

	return 0;
}