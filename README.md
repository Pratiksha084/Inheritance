# Inheritnace

THEORY

The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming. 

Inheritance is a feature or a process in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.

When we say derived class inherits the base class, it means, the derived class inherits all the properties of the base class, without changing the properties of base class and may add new features to its own. These new features in the derived class will not affect the base class. The derived class is the specialized class for the base class.

Sub Class: The class that inherits properties from another class is called Subclass or Derived Class. 
Super Class: The class whose properties are inherited by a subclass is called Base Class or Superclass. 
Why and when to use inheritance?
Consider a group of vehicles. You need to create classes for Bus, Car, and Truck. The methods fuelAmount(), capacity(), applyBrakes() will be the same for all three classes. If we create these classes avoiding inheritance then we have to write all of these functions in each of the three classes as shown below figure: 

inheritance in C++

You can clearly see that the above process results in duplication of the same code 3 times. This increases the chances of error and data redundancy. To avoid this type of situation, inheritance is used. If we create a class Vehicle and write these three functions in it and inherit the rest of the classes from the vehicle class, then we can simply avoid the duplication of data and increase re-usability. Look at the below diagram in which the three classes are inherited from vehicle class:
 

inheritance application in C++

Using inheritance, we have to write the functions only one time instead of three times as we have inherited the rest of the three classes from the base class (Vehicle).
Implementing inheritance in C++: For creating a sub-class that is inherited from the base class we have to follow the below syntax. 

Derived Classes: A Derived class is defined as the class derived from the base class.
Syntax: 

class  <derived_class_name> : <access-specifier> <base_class_name>
{
        //body
}
Where
class      — keyword to create a new class
derived_class_name   — name of the new class, which will inherit the base class
access-specifier  — either of private, public or protected. If neither is specified, PRIVATE is taken as default
base-class-name  — name of the base class
Note: A derived class doesn’t inherit access to private data members. However, it does inherit a full parent object, which contains any private members which that class declares.

Example:
1. class ABC : private XYZ              //private derivation
            {                }
2. class ABC : public XYZ              //public derivation
            {               }
3. class ABC : protected XYZ              //protected derivation
            {              }
4. class ABC: XYZ                            //private derivation by default
{            }

Note:
o When a base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class and therefore, the public members of the base class can only be accessed by the member functions of the derived class. They are inaccessible to the objects of the derived class.
o On the other hand, when the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the derived class.

ALGORITHM

Single Inheritance Algorithm:
1.Start

2.Define a base class (parent class) with member variables and member functions. This class represents the common properties and behaviors that will be inherited by the derived class.

3.Define a derived class (child class) that publicly inherits from the base class. This is done using the public access specifier when declaring the inheritance relationship.

4.Add additional member variables and member functions to the derived class as needed. These can be specific to the derived class and can extend or modify the behavior inherited from the base class.

5.Create objects of both the base class and the derived class in the program.

6.Use the objects to access member variables and member functions of both the base and derived classes.

7.End

Multiple Inheritance Algorithm:
1.Start

2.Define multiple base classes (parent classes) with member variables and member functions. Each base class represents a specific set of properties and behaviors.

3.Define a derived class (child class) that publicly inherits from multiple base classes. This is done using a comma-separated list of base classes in the derived class declaration.

4.Add additional member variables and member functions to the derived class as needed. These can be specific to the derived class and can extend or modify the behavior inherited from the base classes.

5.Create objects of both the base classes and the derived class in the program.

6.Use the objects to access member variables and member functions of both the base classes and the derived class.

7.Resolve any ambiguities that may arise due to the inheritance of multiple base classes, especially when two or more base classes have member functions or variables with the same name.

8.End

Multilevel Inheritance Algorithm:
1.Start

2.Define a base class (parent class) with member variables and member functions. This class represents the initial set of properties and behaviors.

3.Define a first-level derived class (child class) that publicly inherits from the base class. This derived class may add or modify properties and behaviors.

4.Define a second-level derived class (grandchild class) that publicly inherits from the first-level derived class. This creates a multilevel inheritance chain.

5.Add additional member variables and member functions to the second-level derived class as needed. These can be specific to the second-level derived class and can extend or modify the behavior inherited from the first-level derived class and the base class.

6.Create objects of the base class, the first-level derived class, and the second-level derived class in the program.

7.Use the objects to access member variables and member functions of all classes involved in the multilevel inheritance chain.

8.End

Hierarchical Inheritance Algorithm:
1.Start

2.Define a base class (parent class) with member variables and member functions. This class represents the common properties and behaviors that will be inherited by multiple derived classes.

3.Define multiple derived classes (child classes), each of which publicly inherits from the same base class. These derived classes will form separate branches of the hierarchy.

4.Add additional member variables and member functions to each derived class as needed. These can be specific to each derived class and can extend or modify the behavior inherited from the base class.

5.Create objects of the base class and multiple derived classes in the program.

6.Use the objects to access member variables and member functions of both the base class and the derived classes.

6.End

