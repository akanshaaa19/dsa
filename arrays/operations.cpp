#include <iostream>
using namespace std;

void printArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int search(int array[], int n, int x){

    int key=-1;
    for(int i=0; i<n; i++){
        if(array[i]==x){
            key= i;
        }
    }
    return key;

}

void insert(int array[], int n, int element, int index){
    for(int i=n-1; i>=index; i--){
        array[i+1] = array[i];
    }
    array[index] = element;
    printArray(array, n);
}

void deleteElement(int array[], int n, int key){
    int index = search(array, n, key);
    if(index==-1){
        cout<<"Element doesnt exist\n";
    }else{
        for(int i = index; i<n-1; i++){
            array[i]=array[i+1];
        }
        
    }
    printArray(array, n);
}

int getLargestElement(int array[], int n){
    for(int i=0; i<n; i++){
            bool flag=true;
        for (int j=i; j<n; j++){
            if (array[j]>array[i]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            return array[i];
        }
    }
    return -1;
}

int getLargest(int array[], int n){
    int index = 0;
    for (int i=0; i<n; i++){
        if(array[index]<array[i]){
            index=i;
        }
    } 
    return array[index];
}

bool isSorted(int array[], int n){
    bool flag=true;
    for(int i=1; i<n; i++){
        if(array[i]<array[i-1]){
            flag=false;
            break;
        }
    }
    return flag;
}

void reverse(int array[], int n){
    int low=0;
    int high =n-1;
    while(low<high){
        int temp;
        temp=array[low];
        array[low]=array[high];
        array[high]=temp;
        low++;
        high--;
    }
    printArray(array, n);
}


int main(){

    int array[] = {1, 2, 3, 4, 5};
    int n= sizeof(array)/sizeof(array[0]);

    // cout<<search(array, n, 14);
    // printArray(array, n);
    // insert(array, n, 56, 3);
    // printArray(array, n);    
    // deleteElement(array, n, 645);
    // cout<<getLargestElement(array, n);
    // cout<<endl;
    // cout<<getLargest(array, n);
    // if(isSorted(array, n)){
    //     cout<<"Yes\n";
    // }else{
    //     cout<<"No\n";
    // }
    // reverse(array, n);

    return 0;
}
