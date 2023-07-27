#include <iostream>
using namespace std;

int getFrequency(int array[], int n){
    for(int i=0; i<n; i++){
        int counter=0;
        for(int j=0; j<n;j++){
            if(array[i]==array[j]){
                counter++;
            }
        }
        cout<<array[i]<<": "<<counter<<endl;
    }
}

int main(){

    int array[]={1,1,1,2,2,2,2,3,3,3};
    int n=sizeof(array)/sizeof(array[0]);

    cout<<getFrequency(array, n);  
    
    
    return 0;
}