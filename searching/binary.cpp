#include <iostream>
using namespace std;


int binary_seach(int array[], int n, int key) {

    int high = n-1;
    int low = 0;

    while(high>=low){
        int mid = (high+low)/2;

        if(array[mid] == key){
            return mid;
        }
        else if (array[mid]>key){
            high = mid -1;
        }
        else if(array[mid]<key){
            low = mid + 1; 
        }
        
    }
    return -1;
}

int binary_recursive(int array[], int high, int low, int key){
    int mid = (high + low)/2;

    if(array[mid]==key){
        return mid;
    }
    else if(array[mid]>key){
        return binary_recursive(array, mid-1, low, key);
    }
    else if(array[mid]<key){
        return binary_recursive(array, high, mid+1, key);
    }
    else if(low>high){
        return -1;
    }
    return -1;
    
}


int main(){

    int array[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(array)/sizeof(array[0]);

    cout<<binary_recursive(array, n-1, 0, 50);
    
    return 0;
}