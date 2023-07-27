#include <iostream>
using namespace std;

int maxSubArray(int array[], int n){
    int res = array[0];
    for(int i=0; i<n; i++){
        int current = 0;
        for(int j = i; j<n; j++){
            current=current+array[j];
            res = max(res, current);
        }
    }
    return res;
}

int main(){

    int array[] = {3, -4, 5};

    cout<<maxSubArray(array, sizeof(array)/sizeof(array[0]));
    
    return 0;
}