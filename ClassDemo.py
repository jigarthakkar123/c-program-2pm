'''
Main Object Oriented Concepts Are

1. Class
2. Object
3. Inheritance
4. Polymorphisam
5. Abstraction
6. Encapulation

class :  It is a group of different type of variables & functions.

object :  It is an instance of class.

Inheritance : The object of one class can aquire the properties of object of another
class is called an inheritance.

or

Creatting a new class from an exeisting class is called an inheritance

Types of Inheritance

1. Single
2. Multilevel
3. Multiple
4. Hierarchy
5. Hybrid

Polymorphisam :  One name multiple form

Types of Polymorphisam

1. Compile Time(Method Overloading) : When there is more than one function in a single class
having the same name but with a different number of arguments & their data types then it is
called method overloading

2. Run Time(Method Overriding): When there is a same method prototype in your both base class
and derived class & if you call that method using the object of derived class then only
derived class method will be called, so you can say that method of derived class overrides
the method of your base class.

Abstraction : For data hiding

Encapuslation : To bind a code and data into a single unit is called encapsulation.
'''
class Student:
    
    def getData(self,fname,lname):
        self.f=fname
        self.l=lname
    def putData(self):
        print("First Name : ",self.f)
        print("Last Name : ",self.l)

s1=Student()

s1.getData("Jigar","Thakkar")
s1.putData()






