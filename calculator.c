// lets start
#include<stdio.h>
#include<conio.h>

int main(){

    int a,b;
    float total = 0;
    char choice;

    printf("please enter choice if you want to do in calculator : ");
    scanf("%c",&choice);

    printf("enter first value :");
    scanf("%d",&a);
    printf("enter second value :");
    scanf("%d",&b);

    switch (choice)
    {

    case '+':
        total = a + b;
        printf("Sum is : %f",total);
        break;
    
    case '-':
        total = a - b;
        printf("Subtration is : %f",total);
        break;
    
    case '*':
        total = a * b;
        printf("Multiplication is : %f",total);
        break;
    
    case '/':
        if(b != 0){
            total = a - b;
            printf("Division is : %f",total);    
        }
        printf("not divisable by 0");
        break;
    
    default:
        printf("Invalid choice");
    }

    return 0;
}