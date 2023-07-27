#include <iostream>
using namespace std;

void printArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void moveZeroes(int array[], int n){

    int count=0;

    for(int i=0; i<n; i++){
        if(array[i]!=0){
            int temp = array[i];
            array[i]=array[count];
            array[count]= temp;
            count++;
        }
    }

    printArray(array, n);
    
}

int main(){
    int array[] = {0, 10, 20, 30, 0, 0, 40, 40};
    int n= sizeof(array)/sizeof(array[0]);

    printArray(array, n);
    moveZeroes(array, n);
    
    return 0;
}