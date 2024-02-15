<div align="center">
<img src="./nsu-logo.png"  width="100px" height="100px"/>

<p style="text-align:center"><h3>CSE115L Week:01  Lab: 01</h3>
Name:<br>
ID:<br>
Section:<br>
</p>
</div>
<br clear="left"/>


### Example 1: Write a program that prints:

        “North South University”
    Hello class of cse115L!! Welcome to NSU.

~~~~C
#include<stdio.h>
#include<stdlib.h>
int main()
{
printf("\t \" North South University\" \n \n");
printf("Hello class of cse115L!! Welcome to NSU. \n");
}
~~~~

### Example 2: Write a program that prompts the user to insert an integer and a decimal number.print the inserted values as output.

~~~~C
#include<stdio.h>
int main()
{
int num;
float deci;

printf("Enter an  Integer number:");
scanf("%d",&num);
printf("The number is %d\n",num);
printf("Enter a decimal number:");
scanf("%f",&deci);
printf("The number is %.2f\n",deci);
return
}
~~~~
<div style="page-break-after: always;"></div>

#### Example 3: Write a program that reads in the radius of a circle and prints the circle’s diameter circumference and area.

~~~~C
#include<stdio.h>
int main()
{
float const PI = 3.142;
float radius;
float area, circumference, diameter;
printf("Enter the radius of a circle:");
scanf("%f",&radius);
diameter= 2*radius;
circumference= 2*PI*radius;
area= PI * radius * radius;
printf("The Diameter is: %.2f \n",diameter);
printf("The Circumference is: %.2f \n",circumference);
printf("The area is: %.2f \n",area);
return 0;
}
~~~~

**Task 1.** Write a program that asks the user to enter two numbers, obtains the two numbers from the user and prints the sum, product, difference, quotient and remainder of the two numbers.


~~~~C
Input: 
Insert first number: 10
Insert second number: 5

Output:
Sum = 15
Product = 50
Difference = 5
Quotient = 2
Remainder = 0
~~~~~


**Task 2.** Write a program that reads in 3 numbers and prints their average.


~~~~C

Input: 
Insert first number: 3
Insert second number: 8
Insert third number: 2

Output:
The average is: 4.3
~~~~~