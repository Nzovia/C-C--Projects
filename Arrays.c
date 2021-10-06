#include <stdio.h>

int main(){

  //the function
  void passArrayage(int number1, int number2){
    printf("%d ", number1);
    printf("%d ", number2);

  }
    int array1[3][3]= {{23, 33, 43}, {53, 63,73},{35,45,55}};
      printf("multidimenational array list \n");
    for( int a=0; a<3; ++a){
      for( int b=0; b<3; ++b){
        printf("%d ", array1[a][b]);
        }
        printf("\n");
    }
    printf("....................................\n");
    printf("single array list \n");
    int array2[]={2,2,4,5, 6,7,8,9};
    for(int a = 0; a<6; a++){
        printf("%d ",array2[a]);
        if(array2[0]==2){
          printf("leave \n");
          break;

        }else{
          continue;
        }
        
    }
       printf(".................Passing Array as a function...................\n");
       int numbersArray[] ={22, 23, 24, 25};
       
       passArrayage(numbersArray[2], numbersArray[3]);

  
    return 0; 
}