#include <iostream>
using namespace std;

int maximumDifference(int array[], int n){
    int maxDiff=array[1]-array[0];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            maxDiff = max(maxDiff, array[j]-array[i]);
        }
    }
    return maxDiff;
}

int efficient(int array[], int n){
    int maxDiff = array[1]-array[0];
    int minvalue = array[0];

    for (int j = 0; j < n; j++)
    {
        maxDiff=max(maxDiff, array[j]-maxDiff);
        minvalue = min(minvalue, array[j]);
    }
    return maxDiff;
}

int main(){
    int array[]={2, 3, 10, 6, 4, 8, 1};
    int n=sizeof(array)/sizeof(array[0]);

    cout<<efficient(array, n);
    return 0;
}