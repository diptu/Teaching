**Revisit Previous Knowledge**
~~~~C++
#include <iostream>

using namespace std;

void Swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 5, b = 10;
    cout<<"Before Swap function : a = "<< a << ", b = "<<b<<endl;
    Swap(a, b);
    cout<<"After Swap function : a = "<< a << ", b = "<<b<<endl;
    return 0;
}
~~~~
*Output:*<br>
Before swap function: a = 5, b = 10<br>
After swap function:  a = 5, b = 10<br>

Local variables (get destroyed after function ends, no effect on **a** and **b** inside main)

**Parameter Passing by Pointer**
~~~~C++
#include <iostream>

using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 5, b = 10;
    cout<<"Before Swap function : a = "<< a << ", b = "<<b<<endl;
    Swap(&a, &b);
    cout<<"After Swap function : a = "<< a << ", b = "<<b<<endl;
    return 0;
}
~~~~
*Output:*<br>
Before swap function: a = 5, b = 10<br>
After swap function:  a = 10, b = 5<br>

**Reference Variable** serves as an alternative name for an object.
~~~~C++
#include <iostream>

using namespace std;

int main()
{
    int m = 10;
    int &j = m;
    cout<< "m = " << m << endl;
    j = 15;
    cout << "m = "<< m <<endl;
    return 0;
}
~~~~
*Output:*<br>
m = 10<br>
m = 15<br>

**Parameter passing by Reference**
~~~~C
#include <iostream>

using namespace std;

void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 5, b = 10;
    cout<<"Before Swap function : a = "<< a << ", b = "<<b<<endl;
    Swap(a, b);
    cout<<"After Swap function : a = "<< a << ", b = "<<b<<endl;
    return 0;
}
~~~~
*Output:*<br>
Before swap function: a = 5, b = 10<br>
After swap function:  a = 10, b = 5<br>
**What if we want to write same Swap function for both int and char type?**

*Function overloading*
~~~~C++
#include <iostream>

using namespace std;

void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Swap(char& a, char& b)
{
    char temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 5, b = 10;

    cout<<"Before Swap function : a = "<< a << ", b = "<<b<<endl;
    Swap(a, b);
    cout<<"After Swap function : a = "<< a << ", b = "<<b<<endl;

    char c = 'c', d = 'd';

    cout<<"Before Swap function : c = "<< c << ", c = "<<d<<endl;
    Swap(c, d);
    cout<<"After Swap function : c = "<< c << ", d = "<<d<<endl;

    return 0;
}
~~~~
*Output :*<br>
Before Swap function : a = 5, b = 10<br>
After Swap function : a = 10, b = 5<br>
Before Swap function : c = c, c = d<br>
After Swap function : c = d, d = c

**Generics** is the idea to allow type (Integer, String, float etc and user-defined types) to be a parameter to methods, classes and interfaces. Generic Programming enables the programmer to write a general algorithm which will work with all data types.

**Templates** is a simple and yet very powerful tool to pass data type as a parameter so that we don’t need to write the same code for different data types. For sorting differnt data types rather than writing and maintaining the multiple codes, we can write one sort() and pass data type as a parameter.
C++ adds two new keywords to support templates: ‘template’ and ‘typename’. The second keyword can always be replaced by keyword ‘class’.

**Swap using Generics & Templates**
~~~~C++

#include <iostream>

using namespace std;

/// template<class T> this can be used instead of template<typename T>
template<typename T>
void Swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 10;

    cout<<"Before Swap function : a = "<< a << ", b = "<<b<<endl;
    Swap<int>(a, b);
    ///Swap(a, b); this can be used instead of Swap<int>(a, b);
    cout<<"After Swap function : a = "<< a << ", b = "<<b<<endl;

    char c = 'c', d = 'd';

    cout<<"Before Swap function : c = "<< c << ", c = "<<d<<endl;
    Swap<char>(c, d);
    ///Swap(c, d); this can be used instead of Swap<char>(a, b);
    cout<<"After Swap function : c = "<< c << ", d = "<<d<<endl;

    return 0;
}
~~~~
*Output :*<br>
Before Swap function : a = 5, b = 10<br>
After Swap function : a = 10, b = 5<br>
Before Swap function : c = c, c = d<br>
After Swap function : c = d, d = c
