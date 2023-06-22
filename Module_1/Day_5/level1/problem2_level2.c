/* Task 2
Write a C program that uses functions to perform the following operations:
i) Reading a complex number
ii) Writing a complex number
iii) Addition of two complex numbers
iv) Multiplication of two complex numbers
(Note: represent complex number using a structure. */

#include <stdio.h>

typedef struct
{
   float real;
   float imag;
} Complex;

Complex readComplex()
{
   Complex c;
   printf("Enter the real part: ");
   scanf("%f", &c.real);
   printf("Enter the imaginary part: ");
   scanf("%f", &c.imag);
   return c;
}

void writeComplex(Complex c)
{
   printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
}
Complex addComplex(Complex c1, Complex c2)
{
   Complex sum;
   sum.real = c1.real + c2.real;
   sum.imag = c1.imag + c2.imag;
   return sum;
}
Complex multiplyComplex(Complex c1, Complex c2)
{
   Complex product;
   product.real = c1.real * c2.real - c1.imag * c2.imag;
   product.imag = c1.real * c2.imag + c1.imag * c2.real;
   return product;
}
int main()
{
   Complex num1, num2, sum, product;

   printf("Enter the first complex number:\n");
   num1 = readComplex();

   printf("Enter the second complex number:\n");
   num2 = readComplex();

   sum = addComplex(num1, num2);
   printf("Sum of the complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);

   product = multiplyComplex(num1, num2);
   printf("Product of the complex numbers: %.2f + %.2fi\n", product.real, product.imag);

   return 0;
}
