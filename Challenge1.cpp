#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream inputs("inputs.txt"); //open the input file

	if (inputs.is_open())
	{
		int N;
		inputs >> N;

		int num;
		vector<int*> listOfNums;

		//get the sets of nums from the file
		for (int i = 0; i < N; i++) 
		{
			int* set = new int[3];

			for (int j = 0; j < 3; j++)
			{
				inputs >> num;
				set[j] = num;
			}

			listOfNums.push_back(set);
		}

		//sort the nums and print the middle element
		for (int i = 0; i < listOfNums.size(); i++) 
		{
			if (listOfNums[i][0] > listOfNums[i][2]) swap(listOfNums[i][0], listOfNums[i][2]);
			if (listOfNums[i][0] > listOfNums[i][1]) swap(listOfNums[i][0], listOfNums[i][1]);
			if (listOfNums[i][1] > listOfNums[i][2]) swap(listOfNums[i][1], listOfNums[i][2]);

			cout << listOfNums[i][1] << '\n';
		}

		inputs.close();
	}
	else 
		cout << "Unable to open file";

	return 0;
}