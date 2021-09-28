#include <iostream>
using namespace std;

int main() {
	int nums[] = {12,13,4,1,5,7,6,9,8,0}, temp = 0;
	int size = sizeof(nums) / sizeof(nums[0]);

	for (int i = size-1; i >= 1; i--) {
		for (int j=0; j < i; j++) 
			if (nums[j] > nums[j+1]){
				temp = nums[j];
				nums[j] = nums[j+1];
				nums[j + 1] = temp;
			}
	}
	for (int k = 0; k < size; k++) {
		cout << nums[k] << " ";
	}
	return 0;
}