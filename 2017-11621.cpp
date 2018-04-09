#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	int num;
	vector<int> List;
	while (cin >> num)
	{
		List.push_back(num);
	}

	sort(List.rbegin(), List.rend());
	cout << endl;
	cout << "ordered array" << endl;

	for (auto i : List) {
		
		cout << i << " ";
	}
	cout << endl;

}
