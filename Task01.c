#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if(num1 > num2){
        printf("Number 1 '%d' is greater than Number 2 '%d'.", num1, num2);
        if (num1> num3){
            printf("Number 1 '%d' is greater than Number 3 '%d' too.", num1, num3);
        } else {
            printf("Number 3 '%d' is greater than both Number 1 '%d' and Number 2 ''%d", num3, num1, num2);
        }
    } else {
        printf("Number 2 '%d' is greater than Number 1 '%d'", num2, num1);
        if(num2>num3){
            printf("Number 2 '%d' is greater than Number 3 '%d'.", num2, num3);
        } else {
            printf("Number 3 '%d' is greatest.", num3);
        }
    }
    return 0;
}
