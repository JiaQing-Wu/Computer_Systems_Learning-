#include <stdio.h>

typedef unsigned char *byte_pointer;

void showIntByteStorageOrder(byte_pointer arr , size_t length){
    for(int i = 0; i < length; i++){
        printf("%.2x ", arr[i]);
    }printf("\n");
}

void showPointerByteStorageOrder(void * ptr){
    showIntByteStorageOrder( (byte_pointer) &ptr, sizeof(void *));
}


int main(){
    
    int x = 512 + 10;
    int * xptr = &x;
    showIntByteStorageOrder((byte_pointer) &x, sizeof(int));
    showPointerByteStorageOrder(xptr);
    return 0;
}