/*  create two classes :-
1- simple calculator- takes input of 2 numbers
using an utility function and performs -,+,*,/ and displays
results using another function.
2- scientific calculator- takes input of 2 numbers using a utility function
and performs any four scientific operation of your choice
and displays the result using another function.
3- create another class called hybridcalculator and inherit
it using those 2 classes:
Q1- what type of inheritance are you using? MULTIPLE INHERITANCE 
Q2- which mode of inheritance are you using? PUBLIC MODE 
Q3- how is code reusability implemented? WE ARE USING THE REUSED CODE HENCE THE IMPLEMENTATION OF CODE REUSABILITY. 
4- create an object of hybridcalculatorand display results
of simple and scientific calculator.
*/

#include <iostream>
#include <cmath>
using namespace std;
class simple
{
protected:
    int a, b;

public:
    void set1Data(int num, int num1)
    {
        a = num;
        b = num1;
    }
    void display(void)
    {
        cout << "Addition is: " << a + b << endl;
        cout << "Substraction is: " << a - b << endl;
        cout << "Multiplication is: " << a * b << endl;
        cout << "Division is: " << a / b << endl;
    }
};
class scientific
{
protected:
    int x, y;

public:
    void set2Data(int num, int num1)
    {
        x = num;
        y = num1;
    }
    void process(void)
    {
        cout << "The square root of x is " << sqrt(x) << endl;
        cout << "The square root of y is " << sqrt(y) << endl;
        cout << "The cube root of x is  " << cbrt(x) << endl;
        cout << "The cube root of y is " << cbrt(y) << endl;
    }
};

class derived : public simple, public scientific
{
public:
    void set(int a, int b)
    {
        simple::set1Data(a, b);
        simple::display();
        scientific::set2Data(a, b);
        scientific::process();
    }
};

int main()
{
    int p, q;
    cout << "Enter two number: " << endl;
    cin >> p >> q;

    derived der;
    der.set(p, q); 
    return 0;
}
