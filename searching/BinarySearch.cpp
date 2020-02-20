#include "../sorting/sort.h"

#include<iostream>
using namespace std;

int BinarySearch(int list[], int target, int size){
	int min = 0;
	int max = size - 1;
	int mid;
	while(max >= min){
		mid = (min + max)/2;
		if(list[mid] == target){
			return mid;
		}
		else if(list[mid] < target){
			min = mid + 1;
		}
		else if(list[mid] > target){
			max = mid - 1;
		}
	}
	return -1;
}

int main(){
	int list[] = {1, 2, 3, 5, 4, 7, 10, 15, 55, 200, 2, 33, 690, 20, 30, 32, 45, 87, 125, 265, 320, 420};
	int index, size;
	size = sizeof(list) / sizeof(list[0]);
	InsertionSort(list, size);
	index = BinarySearch(list, 690, size);
	cout<<index;
}
