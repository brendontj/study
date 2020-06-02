#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector <int> &myArr) {
	int higher, index;
	
	for (int i = 0; i < myArr.size(); i++) {
		index = i;
		for (int j=i+1; j < myArr.size(); j++) {
			if (myArr[j] < myArr[index]) 
				index = j;
		}
		swap(myArr[i],myArr[index]);
	}
}

int main() {
	vector <int> arr = {2,4,3,1,8,6};
	selection_sort(arr);
	for (int i=0; i < arr.size(); ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	return 0;
}
