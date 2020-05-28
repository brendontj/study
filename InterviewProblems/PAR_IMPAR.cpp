#include <iostream>

using namespace std;

int main () {
	int n1= 0,n2 =0;
	int num_jogos, count= 1;
	cin >> num_jogos;
	string p1,p2;
	while (num_jogos != 0) {
		cout << "\nTeste " << count << endl;
		cin >> p1;
		cin >> p2;
		for (int i =0; i < num_jogos; ++i) {
			cin >> n1 >> n2;
			if ((n1+n2) % 2 == 0) cout << p1 << endl;
			else cout << p2 << endl;
		}
		count++;
		cout << "\n"; 
		cin >> num_jogos;
	}
	
	return 0;
}
