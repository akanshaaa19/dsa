#include <iostream>
using namespace std;

int search(int array[], int n, int x){

    int key=-1;
    for(int i=0; i<n; i++){
        if(array[i]==x){
            key= i;
        }
    }
    return key;

}

int main(){

    int array[] = {2, 4, 1, 78, 65, 89, 14, 58};
    int n= sizeof(array)/sizeof(array[0]);

    cout<<search(array, n, 14);

    return 0;
}
