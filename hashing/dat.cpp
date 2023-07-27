// Direct address table

#include <iostream>
using namespace std;

void insert(bool *array, int key){
    if(array[key]){
        cout<<"Alredy filled\n";
    }else{
       array[key] = 1;
    }
}

int main(){
    bool hashTable[100] = {0};
    bool *hash = new bool(100);
    for(int i=0; i<100; i++){
        hash[i] = 0;
    }

    for(int i=0; i<100; i++){
        cout<<hash[i]<<endl;
    }

    insert(&hashTable, 88);


    return 0;
}