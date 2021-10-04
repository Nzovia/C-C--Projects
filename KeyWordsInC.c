#include <stdio.h>
//this code segment evlauates keywords that are uncommonly used 
//const, auto, struct, enum, register, typedef,union and extern.
int main(){
    auto int var1;
    var1 = 20;
    printf("%d",var1);
    return 0;
}