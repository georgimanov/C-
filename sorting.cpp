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

void print(vector<int> numbers)
{
	int length = numbers.size();
	for (int i = 0; i < length; i++)
	{
		cout << numbers.at(i) << " ";
	}

	cout << "\n";
}

int main()
{
	int length, sort_from, sort_to;
	cin >> length >> sort_from >> sort_to;

	vector<int> numbers;
	int number;

	for (int i = 0; i < length; i++)
	{
		cin >> number;
		numbers.push_back(number);
	}

	sort(numbers.begin() + sort_from, numbers.begin() + (sort_to + 1));

	print(numbers);

	return EXIT_SUCCESS;
}
