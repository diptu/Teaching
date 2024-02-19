<div align="center">
<img src="./nsu-logo.png"  width="100px" height="100px"/>
<p style="text-align:center"><h3>CSE115L Week:01  Lab: 03</h3>
Name:<br>
ID:<br>
Section:<br>
</p>
</div>
<br clear="left"/>

### Example 1: C Program to compute squared root and cube of an input number.


~~~~C
#include<stdio.h> 
#include<math.h>
int main ()
{
  float a;
  printf ("Enter a number:");
  scanf ("%f", &a);
  printf ("%f, %f", sqrt (a), pow (a, 2));
  return 0;
}
~~~~

### Example 2: Example 2: C Program to convert a lowercase letter to uppercase

~~~~C
#include<stdio.h>
int main ()
{
  char a;
  printf ("enter a lowercase character:");
  scanf ("%c", &a);
  printf ("%c", a - 32);
  return 0;
}
~~~~
<div style="page-break-after: always;"></div>

###  Example 3:C program to prints all the digit of 3 digit number:
~~~~C
#include<stdio.h>
int main ()
{
  int n;

  printf ("Enter an integer: ");

  scanf ("%d", &n);

  int last = n % 10;

  int others = n / 10;

  int second = others % 10;
  int first = others / 10;
  printf ("last digit: %d %d %d", first, second, last);

  return 0;
}
~~~~

**Try yourself.**  Write a program that converts an uppercase letter to lowercase.

~~~~C
sample input output:
A : a
X: x
Z: z
~~~~~

