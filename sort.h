#include<iostream>
using namespace std;

void InsertionSort(int arrayy[], int n){
    int j, key, i=0, k=0;
    for(j=1;j<n;j++){
        key=arrayy[j];
        i=j-1;

        while(i>=0 && arrayy[i]>key){
            arrayy[i+1]=arrayy[i];
            i=i-1;

        }
        arrayy[i+1]=key;
    }

    for(k=0;k<n;k++){
        cout<<arrayy[k]<<endl;
    }


}
