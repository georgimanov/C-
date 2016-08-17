#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
Sort between indexes an array of numbers by given "from" & "to" indexes

Example 1:
>>
5
1 3
5 4 3 2 1
<<
5 2 3 4 1

Example 2:
>>
4
1 3
1 2 4 3
<<
1 2 3 4

*/

void printarray(vector<int> arg, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arg.at(i) << " ";
	}

	cout << "\n";
}

int main()
{
	int length, sort_from, sort_to;
	cin >> length >> sort_from >> sort_to;

	vector<int> numbers;
	int variable;

	for (int i = 0; i < length; i++)
	{
		cin >> variable;
		numbers.push_back(variable);
	}

	sort(numbers.begin() + sort_from, numbers.begin() + (sort_to + 1));

	printarray(numbers, length);
	
	return EXIT_SUCCESS;
}
