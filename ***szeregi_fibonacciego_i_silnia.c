#include <stdio.h>
 
unsigned fibonachi (unsigned num);
unsigned long factorial (unsigned n);
 
int main () {
     unsigned long result;
 
     result = fibonachi(10);
     printf("Значение 10-го элемента %lu\n", result);
     result = fibonachi(25);
     printf("Значение 25-го элемента %lu\n", result);
 
     result = factorial(5);
     printf("5! = %lu\n", result);
     result = factorial(12);
     printf("12! = %lu\n", result);
}
 
unsigned fibonachi (unsigned num) {
  unsigned i=1, a=0, b=1, s;
 
  while (i++ < num-1) {
    s = a;
    a = b;
    b = s+a;
  }
  return b;
}
 
unsigned long factorial (unsigned n) {
  unsigned long fact=1;
 
  while (n > 0) fact = fact * n--;
 
  return fact;
}
