#include <stdio.h>
#include <stdlib.h>

int main(){
int age;
printf("input age: ");
scanf("%d", &age);
if (age >= 18) {
    printf("you're an adult: ");
} else {
    printf("you're a minor: ");
}
}