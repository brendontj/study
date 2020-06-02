#include <iostream>
#include <vector>

using namespace std;


void insertion_sort(vector<int> &myArr) {
    int t;
    for (int i = 1; i < myArr.size(); i++) {
        if (myArr[i] < myArr[i-1]){
            t = i;     
            while(myArr[t] <  myArr[t-1] && t > 0) {
                swap(myArr[t], myArr[t-1]);
                t--;
            }
        }
    }
}

int main() {
	vector <int> arr = {2,4,3,1,8,6};
	insertion_sort(arr);
	for (int i=0; i < arr.size(); ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	return 0;
}