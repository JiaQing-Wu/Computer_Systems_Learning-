#include <stdio.h>

typedef unsigned char *byte_pointer;

void showIntByteStorageOrder(byte_pointer arr , size_t length){
    for(int i = 0; i < length; i++){
        printf("%x ", arr[i]);
    }printf("\n");
}

void showFloatByteStorageOrder(byte_pointer arr, size_t length){
    showIntByteStorageOrder(arr, length);
}


int main(){
    
    int x = 512 + 10;
    showIntByteStorageOrder((byte_pointer) &x, sizeof(int));
    return 0;
}