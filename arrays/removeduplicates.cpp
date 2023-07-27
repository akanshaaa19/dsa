#include <iostream>
using namespace std;

void printArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void remDupes(int array[], int n){
    int temp[n];
    int res=1;
    temp[0]=array[0];

    for(int i=1; i<n;i++){
        if(temp[res-1]!=array[i]){
            temp[res]=array[i];
            res++;
        }
    }
    printArray(array, n);
    printArray(temp, sizeof(temp)/sizeof(temp[0]));
}

int main(){
    int array[] = {10, 10, 20, 3, 20,  4, 5};
    int n= sizeof(array)/sizeof(array[0]);
    remDupes(array, n);
    return 0;
}