#include<iostream>
#include "sort.h"
using namespace std;




int main(){
    int arr[] = {5,8,3,66,1,9,6,88,11};
    int n = sizeof(arr)/sizeof(int);

    cout<<"The sorted array is"<<endl;
    InsertionSort(arr,n);


}
