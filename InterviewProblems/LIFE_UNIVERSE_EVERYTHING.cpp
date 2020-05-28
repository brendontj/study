#include <iostream>
using namespace std;

int main() {
	int entry;

	cin >> entry;
	while (entry != 42) {
		cout << "\n" << entry;
		cin >> entry;
	}
	return 0;
}
