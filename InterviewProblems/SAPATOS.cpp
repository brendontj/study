#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num_testes;
	
	while (scanf("%d",&num_testes) > 0) {
		int esq[31] = {0};
		int dir[31] = {0};
		
		int index;
		char direction;
		for (int i=0; i < num_testes; ++i) {
			cin >> index >> direction;
			if (direction == 'E') {
				esq[index-30] += 1;
			}else if (direction == 'D') {
				dir[index-30] += 1;
			}
		} 
		int count = 0;
		for (int j=0; j < 31; ++j) {
			if ((esq[j] == dir[j] && esq[j] != 0) || (esq[j] > 0) && (dir[j] > 0)){ 
				if (esq[j] <= dir[j]) count += esq[j]; 
				else count += dir[j];
			}
		} 
		cout <<"\n" << count << endl;
	}
	return 0;
}
