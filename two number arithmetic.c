#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int summation(int *a,int n){
    int i,sum1=0;
    for(i=0;i<n;i++){
        sum1 += a[i];
    }
    return sum1;
}
int diffrence(int *a,int n){
    int i,subtraction;
    for(i=0;i<n;i++){
        subtraction = a[0]-a[i];
        
    }
    return subtraction;
}
int product(int *a,int n){
    int i,multiplication;
    for(i=0;i<n;i++){
        multiplication = a[0]*a[i];
    }
    return multiplication;
}
int quotient(int *a,int n){
    int i,multiplication;
    for(i=0;i<n;i++){
        multiplication = a[0]/a[i];
    }
    return multiplication;
}

void exit_program(int *a,int n){
    int i;
    for(i=0;i<n;i++){
        a[i] = 0;
    }
    printf("You are out....\n");
}
int main(){
    int choice;
    int array[10];
    int j=2;
    
    menu:
    for(int i=0;i<j;i++){
        printf("Enter the value of the  number %d: \n",i+1);
        scanf("%d",&array[i]);
        }
    
    printf("\n");
    printf("Enter your choice:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            int sum = 0;
            printf("Addition of the values of the array is: %d \n",summation(array,j));
            printf("______________________________________________\n");
            goto menu;
            break;
        case 2:
            printf("Subtraction of the values of the array is: %d \n",diffrence(array,j));
            printf("______________________________________________\n");
            goto menu;
            break;
        case 3:
            printf("Multiplication of the values of the array is: %d \n",product(array,j));
            printf("______________________________________________\n");
            goto menu;
            break;
        case 4:
            printf("Division of the values of the array is:  %d \n",quotient(array,j));
            printf("______________________________________________\n");
            goto menu;
            break;
    
        case 5:
            printf("Exiting the program\n");
            exit_program(array,j);
            break;
        default:
            printf("Invalid choice\n");
            printf("______________________________________________\n");
            goto menu;
            break;
    }

    return 0;
    }