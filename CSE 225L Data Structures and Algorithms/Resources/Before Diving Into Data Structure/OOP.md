**C++ What is OOP?**
OOP stands for Object-Oriented Programming.

Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.

Object-oriented programming has several advantages over procedural programming:

    1. OOP is faster and easier to execute
    2. OOP provides a clear structure for the programs
    3. OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
    4. OOP makes it possible to create full reusable applications with less code and shorter development time

**C++ What are Classes and Objects?**
Classes and objects are the two main aspects of object-oriented programming. A class is a template for objects, and an object is an instance of a class. When the individual objects are created, they inherit all the variables and functions from the class.

Example of a Class : Car and It's object would be Volvo, Audi, Toyota etc.

**C++ Classes/Objects**
C++ is an object-oriented programming language.

Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.
~~~~C++
#include <iostream>

using namespace std;

class Animal
{
public:
    bool vegetarian;
    int noOfLegs;
    string eats;
};
int main()
{
    Animal cat;
    cat.vegetarian = false;
    cat.eats = "milk";
    cat.noOfLegs = 4;
    cout<< "cat is vegetarian ? : " << cat.vegetarian <<endl;
    cout<< "cat eats : " << cat.eats<< endl;
    cout<< "cat has : " << cat.noOfLegs<< " Legs " << endl;
    return 0;
}
~~~~
*Output :*<br>
cat is vegetarian ? : 0<br>
cat eats : milk<br>
cat has : 4 Legs<br>

**Class Methods**
Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:

    1.Inside class definition
    2.Outside class definition

**Constructors**

A constructor in C++ is a special method that is automatically called when an object of a class is created.

**Access Specifiers**
In C++, there are three access specifiers:

    1. public - members are accessible from outside the class
    2. private - members cannot be accessed (or viewed) from outside the class
    3. protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

~~~~C++
#include <iostream>

using namespace std;

class Animal
{
private:
    string name;
    bool vegetarian;
    int noOfLegs;
    string eats;

public:
    Animal(string name, bool vegetarian, int noOfLegs, string eats)
    {
        this->name = name;
        this->vegetarian = vegetarian;
        this->noOfLegs = noOfLegs;
        this->eats = eats;
    }

    void getInfo()
    {
        cout<< "Name : " << name <<endl;
        cout<< "Is vegetarian ? : " << vegetarian <<endl;
        cout<< "Eats : " << eats<< endl;
        cout<< "Has : " << noOfLegs<< " Legs." << endl;
    }
};
int main()
{
    Animal cat("Cat", false,  4, "Milk");
    Animal cow("Cow", true, 4, "Grass");
    cat.getInfo();
    cow.getInfo();
    return 0;
}

~~~~
*Output*<br>
Name : Cat<br>
Is vegetarian ? : 0<br>
Eats : Milk<br>
Has : 4 Legs.<br>
Name : Cow<br>
Is vegetarian ? : 1<br>
Eats : Grass<br>
Has : 4 Legs.<br>

**Encapsulation**

The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.

**Access Private Members**
To access a private attribute, use public "get" and "set" methods.

**Why Encapsulation?**
It is considered good practice to declare your class attributes as private (as often as you can). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
Increased security of data

**Inheritance**

In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

    1. derived class (child) - the class that inherits from another class
    2. base class (parent) - the class being inherited from

**Multilevel Inheritance**
A class can also be derived from one class, which is already derived from another class.

**Multiple Inheritance**
A class can also be derived from more than one base class.

**Polymorphism**

Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.
