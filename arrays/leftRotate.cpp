#include <iostream>
using namespace std;

void printArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void reverse(int array[], int n, int low, int high){

    while(low<high){
        int temp;
        temp=array[low];
        array[low]=array[high];
        array[high]=temp;
        low++;
        high--;
    }
}

void leftRotate(int array[], int n, int shift=1){
    int initial=array[0];
    for (int i = 1; i < n; i++)
    {
        array[i-1]=array[i];
    }
    array[n-1]= initial;
    

    printArray(array, n);
}

void leftRotateByD(int array[], int n, int shift){
    reverse(array, n, 0, shift-1);
    reverse(array, n, shift, n-1);
    reverse(array, n, 0, n-1);

    printArray(array, n);
}

int mean(int A[], int N){

    int sum=0;
    for(int i=0; i<N; i++){
        sum=sum+A[i];
    }
    return sum/N;

}

int main(){

    int array[] = {1, 2, 3, 4, 5};
    int n= sizeof(array)/sizeof(array[0]);

    printArray(array, n);
    leftRotateByD(array, n, 2);
    
    return 0;
}