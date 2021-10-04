#include <stdio.h>

int main(){
    int array1[] = {23, 33, 43, 53, 63,73};
    printf("%d", array1);
    for( int a=0; a<array1; ++a){
        printf("my array = %d ", a);
    }
    return 0; 
}