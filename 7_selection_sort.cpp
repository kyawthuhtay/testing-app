#include <iostream>
using namespace std;

int main() {
	int nums[] = {2,3,4,1,5,11,12,7,6,9,8,0};
	int i = 0, j = 0, min = 0, temp = 0;
	int size = sizeof(nums) / sizeof(nums[0]);

	for (i = 0; i < size; i++) {
		min = i;
		for (j = i; j < size; j++) {
			if (nums[min] > nums[j])
				min = j;
		}
		temp = nums[i];
		nums[i] = nums[min];
		nums[min] = temp;
	}
	for (i = 0; i < size; i++) {
		cout << nums[i] << " ";
	}
	return 0;
}