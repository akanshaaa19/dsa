#include <iostream>
using namespace std;

void findLeaders1(int array[], int n){
    // a leader is an element which onli have elements smaller than it to its right
    for(int i=0; i<n; i++){
        bool flag=true;
        for (int j=i+1; j<n; j++){
            if(array[i]<array[j]){
                flag=false;
                break;
            }else{
                flag=true;
            }
        }
        if(flag==true){
            cout<<array[i]<<" ";
        }
    }

    //O(n^2)
}

void findLeaders2(int array[], int n){
    int curr_leader = array[n-1];
    cout<<curr_leader<<" ";
    for(int i=n-2; i>=0; i--){
        if(curr_leader<array[i]){  //6<10
            curr_leader=array[i];
            cout<<curr_leader<<" ";
        }
    }

    //O(n)
}

int main(){

    int array[] = {7, 10, 4, 3, 6, 5, 2};
    int n= sizeof(array)/sizeof(array[0]);

    findLeaders2(array, n);
    
    return 0;
}