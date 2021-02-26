### CSE 115: Practice session: Data types
**1.** Write down a program that will take two integers as input and will show the results of
addition, multiplication, division and modulous operation. The output should exactly match the
following format but the data input will be different:<br><br>
Enter an integer: 46<br>
Enter another integer: 34<br>
46 PLUS 34 EQUALS 80<br>
46 – 34 = 12<br>
The result of multiplication is 1564<br>
46 mod 34 = 12<br>
~~~~C
#include<stdio.h>
int  main()
{
    int a,b;

    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("Enter another integer: ");
    scanf("%d",&b);

    printf("%d PLUS %d EQUALS %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("The result of multiplication is %d\n", a*b);
    printf("%d mod %d = %d\n", a%b);

    return 0;
}
~~~~
**2.** Write down a program that will interchange the value of three variables in the following
order:<br><br>
      a -> b -> c -> a<br>

Sample input/output:<br>
Enter a: 10<br>
Enter b: 20<br>
Enter c: 30<br>
After interchange a = 30, b = 10, c= 20<br>

~~~~C
#include<stdio.h>
int  main()
{
    int a,b,c,temp;

    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);

    temp = c;
    c = b;
    b = a;
    a = temp;

    printf("After interchange a = %d, b = %d, c= %d", a, b, c);
    return 0;
}
~~~~

**3.** Write down a program that will take two persons’ height as input (in feet and
inches) and will print the difference of height in feet and inches. Assume that the taller
person’s height will be always given as input first.<br><br>
**Sample input/output:**<br>
First person:<br>
Enter feet: 5<br>
Enter inch: 7<br>
Second person:<br>
Enter feet: 3<br>
Enter inch: 8<br>
Difference: 1 feet 11 inch<br>

~~~~C
#include<stdio.h>
int  main()
{
    int f1,i1,f2,i2,diff;

    printf("First person\n");
    printf("Enter feet: ");
    scanf("%d",&f1);
    printf("Enter inch: ");
    scanf("%d",&i1);

    printf("Second person\n");
    printf("Enter feet: ");
    scanf("%d",&f2);
    printf("Enter inch: ");
    scanf("%d",&i2);

    diff = (f1*12+i1) - (f2*12+i2);
    printf("Difference: %d feet %d inch", diff/12, diff%12);

    return 0;
}
~~~~
