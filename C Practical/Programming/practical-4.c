#include <stdio.h>

int main(){
  //write your name and ERP number
  printf("Sachin Kumar Saw\n");
  printf("11234\n");

  //prac 1-> check if number is even or odd using ternary operator
  int n;
  scanf("%d", &n);
  (n % 2 == 0) ? printf("even") : printf("odd");

  //prac 2-> given 3 number , get the maximum number out of 3 using nested if-else
  int a, b, c;
  scanf("%d %d", &a, &b, &c);
  if (a > b)
  {
    // we are here means a is greater then b
    if (a > c)
    {
      //we are here means a is greater than c also

      //overall a is the greatest
      printf("%d", a);
    }
    else
    {
      // we are here mean c is greater than a
      // overall c is the greatest
      printf("%d", c);
    }
  }
  else{
    // we are here means b is greater than a
    if (b > c)
    {
      // we are here means b is greater than c also
      //overall b is the greater
      printf("%d", b);
    }
    else
    {
      // we are here means c is greater than b
      // overall c is the greater
      printf("%d", c);
    }
  } 

  // prac 3-> make a simple calculator using switch case statement
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  char operator;
  scanf("%c", &operator); // space before %c to make sure input is taken correctly
  switch (operator)
  {
  case '+':
      printf("sum is %d", num1 + num2);
      break;
  case '-':
      printf("differnce is %d", num1 - num2);
      break;
  case '*':
      printf("multiplication is %d", num1 * num2);
      break;
  case '/':
      printf("division is %d", num1 / num2);
      break;
  // modulo ka case do it yourself
  default:
      printf("operator is wrong");                

  }

  return 0;
  

}