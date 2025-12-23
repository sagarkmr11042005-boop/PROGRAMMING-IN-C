// #include <stdio.h>

// int square(int num) {
//     return num * num;
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int result = square(n);
//     printf("Square = %d\n", result);

//     return 0;
// }


// #include <stdio.h>
// void dosomething(int a, int b){
//     return;
// }
// void something(int a, int b){
//     printf("the value is: %d", a * b);
// }

// int main(){

//     int a, b;
//     scanf("%d %d", &a, &b);
//     dosomething(a,b);
    
//     return 0;
// }



#include <stdio.h>

void prime(int num){
    if(num <= 1)
    return 0;
}
for(int i = 2; i*i<= n; i++){
    if(n % i==0)
    return 0;
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    if(prime(n)){
            printf("%d is a prime number\n", n);
    }else{
        printf("%d is a not prime number:", n);
    }


    return 0;

}