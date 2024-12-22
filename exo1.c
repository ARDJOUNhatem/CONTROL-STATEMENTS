#include<stdio.h>

int main(){
    int a,b,c; 
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b || a == c || b == c){
        printf("enter a different numbers");
        return 1;
    }

    if( a > b && a > c){
        printf("%d is the largest\n", a);
    }
    else if(b > c){
        printf("%d is the largest\n", b);
    }
    else{
        printf("%d is the largest\n", c);
    }
    return 0;
}

// this code ask user enter three number then check the largest one.
// I have modified the code to be more accurate so that when entering equal numbers, the code asks the user to enter different numbers.