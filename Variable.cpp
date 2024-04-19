// varaiables are the containers where data values are stored

//There are different types of variables in C++(defined with different key words.)

//int - stores integers (whole numbers), without decimals,(Ex:123,-123)
//double - stores floating point numbers, with decimals,(Ex:10.55,69.69)
//char - stores single characters, such as 'a' or 'B'.(Char values are surrounded by single quotes)
//string - stores text, such as "Hello World".(String values are surrounded by double quotes)
//bool - stores values with two states:(true or false)

//To create a variable, specify the type and assign it a value.
#include <iostream>
using namespace std;

int main() {
    int myIntegerNum = 10;
    float myFloatNum = 20.12345678;
    double myDoubleNum = 10.1234567890123456;
    char myCharacter = 'a';
    string myString = "Hello, World";
    bool myBool = true;
    const int myConstantInteger = 10;
}
//where type is one of C++ types (such as int), and variableName is the name of the variable (such as x). The equal sign is used to assign values to the variable.