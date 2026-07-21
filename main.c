// Constants are using for headlines and highlight it is denoted by-- (//) single line comment  or (/* */) multiple line comments

// New line-- (\n)

// for degree symbol we can hold alt and press 0176 and degree symbol how (°)


// Variables-- A reusable container in the value. Behave as if it were the values it contains.

/*#include <stdio.h>

int main(){
   
    int age = 18;
    int year = 2004;
    int height = 6;

    printf("I am %d years old\n", age);
    printf("I am  born in %d since\n", year);
    printf("My height is %dft", height);

    return 0;
}*/

/*#include <stdio.h>

int main(){
   
    float gpa = 3.6;
    float price = 198.8;
    float temperature = 34.80;

    printf("Your gpa is %.1f\n", gpa);
    printf("The price is %.2f\n", price);
    printf("The temperature is %.2f°C", temperature);

    return 0;
}*/

/*#include <stdio.h>

int main(){
   
    double pi = 3.1415926535;
    double e = 2.718281828459045;

    printf("pi value is %.9lf\n", pi);
    printf("e value is %.12lf\n", e);

    return 0;
}*/

/*#include <stdio.h>

int main(){
   
    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favourite symbol is %c\n", symbol);
    printf("Your currency is %c", currency);

    return 0;
}*/

/*#include <stdio.h>

int main(){
   
    char name[] = "K-night";
    char food[] = "chole bhature";
    char email[] = "knight123@gmail.com";

    printf("Your channel name is %s\n", name);
    printf("Your favourite food is %s\n", food);
    printf("Your email id is %s", email);

    return 0;
}*/

// Boolean--

/*A Boolean is a data type that can store only two values:

true (1)
false (0)*/

/*#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isOnline = true;

    printf("%d", isOnline);

    return 0;
}*/

/*#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isOnline = false;
    bool isStudent = true;
    bool forSale = false;

    if(isStudent){
        printf("You are student");
    }
    else{
        printf("You are Not student");
    }
    
    return 0;
}*/


// Format specifiers-- A format specifier in C is a special code (starting with %) used in functions like printf() and scanf() to tell the compiler what type of data to print or read.
// optional modifiers ( width, precision, flags)
/*#include <stdio.h>

int main(){

   int age = 28;
   float price = 152.87;
   double pi = 3.1452574;
   char currency = '$';
   char name[] = "Bro code";

   printf("%d\n", age);
   printf("%f\n", price);
   printf("%lf\n", pi);
   printf("%c\n", currency);
   printf("%s\n", name);

   return 0;
   
}*/

// width--

/*#include <stdio.h>

int main(){

int num1 = 1;
int num2 = 10;
int num3 = 100;

printf("%d\n",num1);
printf("%d\n",num2);
printf("%d\n",num3);

return 0;
}*/

/*#include <stdio.h>

int main(){

int num1 = 1;
int num2 = 10;
int num3 = 100;

printf("%3d\n",num1);
printf("%3d\n",num2);
printf("%3d\n",num3);

return 0;
}*/

/*#include <stdio.h>

int main(){

int num1 = 1;
int num2 = 10;
int num3 = 100;

printf("%4d\n",num1);
printf("%4d\n",num2);
printf("%4d\n",num3);

return 0;
}*/

/*#include <stdio.h>

int main(){

int num1 = 1;
int num2 = 10;
int num3 = 100;

printf("%-4d\n",num1);
printf("%-4d\n",num2);
printf("%-4d\n",num3);

return 0;
}*/

/*#include <stdio.h>

int main(){

int num1 = 1;
int num2 = 10;
int num3 = 100;

printf("%04d\n",num1);
printf("%04d\n",num2);
printf("%04d\n",num3);

return 0;
}*/

/*#include <stdio.h>

int main(){

int num1 = 1;
int num2 = 10;
int num3 = 100;

printf("%-5d\n",num1);
printf("%+4d\n",num2);
printf("%+6d\n",num3);

return 0;

}*/

// precision--

/*#include <stdio.h>

int main(){

float price1 = 19.99;
float price2 = 1.50;
float price3 = -100.00;

printf("%f\n",price1);
printf("%f\n",price2);
printf("%f\n",price3);

return 0;

}*/

/*#include <stdio.h>

int main(){

float price1 = 19.99;
float price2 = 1.50;
float price3 = -100.00;

printf("%.2f\n",price1);
printf("%.2f\n",price2);
printf("%.2f\n",price3);

return 0;

}*/

/*#include <stdio.h>

int main(){

float price1 = 19.99;
float price2 = 1.50;
float price3 = -100.00;

printf("%+7.2f\n",price1);
printf("%+7.2f\n",price2);
printf("%+7.2f\n",price3);

return 0;

}*/

