#include <stdio.h>
typedef struct complex {
float real,imag;
} complex;
complex add(complex n1, complex n2);

int main() {
complex n1, n2, result;
printf("Enter the real and imaginary parts for 1: ");
scanf("%f %f", &n1.real, &n1.imag);
printf("Enter the real and imaginary parts for 2: ");
scanf("%f %f", &n2.real, &n2.imag);
result = add(n1, n2);
printf("Sum = %.1f + %.1fi", result.real, result.imag);
return 0;
}
complex add(complex n1, complex n2) {
complex temp;
temp.real = n1.real + n2.real;
temp.imag = n1.imag + n2.imag;
return (temp);
}