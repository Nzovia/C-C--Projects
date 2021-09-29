#include <stdio.h>
int main(){
    int num1, num2, operator, result;
    printf("Enter number 1: \t");
    scanf("%d", &num1);
    printf("Enter number 2: \t");
    scanf("%d \n", &num2);

    printf("------------operations---------------\n");
    
    printf("1, Addition \n, 2, Multiplication \n, 3, Modulus \n, 4, Division \n");
    printf("------------operator choice ---------------\n");
    scanf("%d", &operator); 
    
    switch (operator)
    {
        
    case 1:
        result =num1+num2;
        printf("result = %d \n", result);
        goto CASE_2;
        break;
    CASE_2:  
    case 2:
        result =num1*num2;
        printf("result = %d \n", result);
        goto CASE_3;
        break;
    CASE_3:
    case 3:
        result =num1%num2;
        printf("result = %d \n", result);
        goto CASE_4;
        break;  
    CASE_4:
    case 4:
        result =num1/num2;
        printf("result = %d\n", result);
        break;      
    
    default:
        break;
    }



    return 0;
}