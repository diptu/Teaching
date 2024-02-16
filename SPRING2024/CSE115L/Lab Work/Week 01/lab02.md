<div align="center">
<img src="./nsu-logo.png"  width="100px" height="100px"/>

<p style="text-align:center"><h3>CSE115L Week:01  Lab: 02</h3>
Name:<br>
ID:<br>
Section:<br>
</p>
</div>
<br clear="left"/>

### Example 1: Data types and their size in C
~~~~C
#include<stdio.h>

int main()
{
    int a;
    float b;
    double c;
    char d;
    long int longInt;
    signed int no;
    printf("Size of int: %d bytes\n",sizeof(a));
    printf("Size of float: %d bytes\n",sizeof(b));
    printf("Size of double: %d bytes\n",sizeof(c));
    printf("Size of char: %d byte\n",sizeof(d));
    printf("Size of Long int: %d byte\n",sizeof(longInt));
    printf("Size of signed int: %d byte\n",sizeof(no));
    return 0;
}
~~~~
### Example 2: Write a program that reads in the radius of a circle and prints the circle’s diameter, circumference and area.
~~~~C
#include<stdio.h>
int main()
{
    float const PI = 3.142;
    float radius, area, circumference, diameter;
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

**Task 1.** Convert Celsius to Fahrenheit unit using the following formula. Take the value of C as input from user and calculate the value of F.

```math
F = (9/5) * C + 32
```

~~~~C
sample input output:
25°C : 77° F
30°C : 86° F
~~~~~


**Task 2.** Ask user for two integers a and b. Then swap (interchange) the values of a and b. That means, a should get the value of b and b should get the value of a.(maximum one temporary variable allowed)


~~~~C

Input: 
Enter a: 7
Enter b: 3

Output:
After swapping, a: 3 and b:7
~~~~~
**Task 3.** Now perform swap asked in previous question by performing mathmatical operations.(without using temporary variable)

~~~~C

Input: 
Enter a: 10
Enter b: 15

Output:
After swapping, a: 15 and b: 10
~~~~~