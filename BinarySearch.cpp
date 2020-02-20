#include<iostream>
using namespace std;

int BinarySearch(int list[], int target, int size){
	int min = 0;
	int max = size - 1;
	int mid;
	while(min <= max){
		mid = (min + max)/2;
		if(list[mid] == target){
			return mid;
		}
		else if(list[mid] < target){
			min = mid;
			mid = (min + mid)/2;
		}
		else if(list[mid] > target){
			max = mid;
			mid = (min + mid)/2;
		}
	}
	return -1;
}

int main(){
	int list[] = {1, 2, 3, 5, 4, 7, 10, 15, 20, 30, 32, 45, 87, 125, 265, 320, 420};
	int index, size;
	size = sizeof(list) / sizeof(list[0]);
	index = BinarySearch(list, 265, size);
	cout<<index;
}
