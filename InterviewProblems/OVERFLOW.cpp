#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int overflow_limit, n1, n2;
	char signal; 

	cin >> overflow_limit;
	scanf("%d %c %d", &n1, &signal, &n2);
	cout << "\n";
	if (signal == '+') {
		if ((n1+n2) > overflow_limit) {
			cout << "OVERFLOW" << endl;
		} else {
			cout << "OK" << endl;
		}
	} else if (signal == '*') {
		if ((n1*n2) > overflow_limit) {
			cout << "OVERFLOW" << endl;
		} else { 
			cout <<"OK" << endl;
		}
	}
	return 0;
}
