#### CSE 115: Practice session: Week 2
**1.** If a five-digit number is input through the keyboard, write a program to print summation of first and last digit of the number. For example if the number that is given as input is 12398 then the output should be displayed as 9.
~~~~C
#include<stdio.h>
int main()
{
    int num;

    scanf("%5d", &num); /// %5d represents maximum number of digit considered would be 5

    printf("%d", (num/10000 + num % 10)); /// first digit = num/10000, last digit = num % 10

    return 0;
}
~~~~
**2.** Suppose the diagonal of a square is d. Find an equation for the area A of the square from its diagonal d. Finally, write down a program that will take the length of its diagonal d as input and print area of the square. For example if diagonal is 6.0 then the area will be 18.0.
~~~~C
#include<stdio.h>
int main()
{
    float d;

    scanf("%f", &d);

    printf("Area of a square with diagonal %f is : %.2f", d, (d*d)/2);

    return 0;
}

~~~~
**3.** If the marks obtained by a student in three different subjects are given as input through the keyboard, find out the total marks and percentage marks obtained by the student. Assume that the maximum marks in each subjects is 100. Show the percentage of marks up to 2 decimal places. Your output should match exactly with the following format:<br>

**Example:**<br>

Enter subject 1 mark: 75.0<br>
Enter subject 2 mark: 80.0<br>
Enter subject 3 mark: 90.0<br>
The total is 75.0+80.0+90.0 = 245<br>
Average is 81.67<br>

~~~~C
#include<stdio.h>
int main()
{
    float sub1, sub2, sub3, total;

    printf("Enter subject 1 mark: ");
    scanf("%f", &sub1);

    printf("Enter subject 2 mark: ");
    scanf("%f", &sub2);

    printf("Enter subject 3 mark: ");
    scanf("%f", &sub3);

    total = sub1 + sub2 + sub3;
    printf("The total is %0.2f+%.2f+%.2f = %.2f\n", sub1, sub2, sub3, total);
    printf("Average is %.2f\n", total/3.0);

    return 0;
}
~~~~
**4.** Write down a program that will take an English letter as input and will print the next letter in the alphabet. For example, if the user enters **D** the output will be **E**.

~~~~C
#include<stdio.h>
int main()
{
    char ch;

    scanf("%c", &ch);
    printf("%c", ch+1);

    return 0;
}
~~~~
