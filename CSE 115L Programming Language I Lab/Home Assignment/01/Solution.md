**1.** If a four-digit number is input through the keyboard, write a program to obtain the productof the first and last digit of this number.
~~~~C
#include<stdio.h>
int main()
{
    int n;
    scanf("%4d",&n);
    printf("%d * %d = %d\n", (n/1000), (n%10), (n/1000) * (n%10));
    return 0;
}
~~~~
**2.** Mr. Alam’s basic salary is input through the keyboard. His dearness allowance is 40% of the basic  salary,  and  house  rent  allowance  is  20%  of  basic  salary.  Write  a  program  to calculate  his  gross  salary(gross  salary  is  the  summation  of  basic  salary,  dearness allowance and house rent allowance).
~~~~C
#include<stdio.h>
int main()
{
    float b;
    scanf("%f",&b);
    printf("Gross Salary : %0.2f\n", b + 0.4 * b + 0.2 * b );
    return 0;

}
~~~~
**3.** y = 2x^3+ x^2-7. Ask the user for value of x. Then compute and print the value of y.
~~~~C
#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    printf("y = %0.2f\n", 2*x*x*x + x*x -7);
    return 0;
}
~~~~
**4.** Write down a program that will take the length of two items measured in meters and centimeters as input and will print their length difference in meters and centimeters. For example, if the length of one item is 3 meter and 50 centimeter and the length of the other item is 2 meter and 70 centimeter then the difference that you need to display in your program is 0 meter and 80 centimeter.
~~~~C
#include<stdio.h>
int main()
{
    int m1,c1,m2,c2,diff;
    scanf("%d%d%d%d",&m1, &c1, &m2, &c2);
    diff = (m1*100 + c1) - (m2*100 + c2);
    printf("Difference is %d m & %d cm.\n", diff/100, diff%100);
    return 0;
}
~~~~
**5.** The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print the distance in (i) meters, (ii) feet, (ii) inches and (iv) centimeters. (1 meter = 3.28 feet).
~~~~C
#include<stdio.h>
int main()
{
    float k,m,f,i,c;
    scanf("%f",&k);

    m = k * 1000;
    f = m * 3.28;
    i = f * 12;
    c = m * 100;

    printf("%f km = %0.2f m\n",k, m);
    printf("%f km = %0.2f feet\n",k, f);
    printf("%f km = %0.2f inches\n",k, i);
    printf("%f km = %0.2f cm\n",k, c);

    return 0;
}
~~~~
**6.** Write  down  a  program  that  will  take  an English  letter  as  input  and  will  print  the letter which  comes  after  Nlettersin  the  alphabet. N  will  also  be  input  to  your  program. For example, if the user enters Dand the value of N entered by the user is 3 the output will be G.

~~~~C
#include<stdio.h>
int main()
{
    char ch;
    int N;

    scanf("%c ",&ch);
    scanf("%d",&N);

    printf("%c", ch+N);
    return 0;
}
~~~~
