// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


    //user-defined data types: class, structure, union, and enumerations.

/*
//this is a Structure. It stores data.
struct Sandwich
{
    //access modifier. Public is everywhere, protected is class and derived classes, private is only this class.
public:
    char name[32];
    float price;
    bool isHot;
    //you can also change who can see which parts of a structure.
private:
    int yourMom = 0;
    //this variable will not be available to anything other than this structure.

};
*/

//This Structure includes an example of unsigned variables, which can only be positive, but can reach higher numbers.
struct Colour
{
public:
    unsigned char R = 255;
    unsigned char G = 255;
    unsigned char B = 255;
};


//Classes are like structures, but they can hold methods too.
class Sandwich
{
public:
    /*void Display(Sandwich sand) 
    {
        std::cout << "Price: " << sand.price << std::endl;
    }*/

    //The above method is acceptable, but we are already inside the Sandwich class, so the parameter is unnecessary.
    void Display()
    {
        std::cout << price << "\n";
    }

    //Although the above accessibility modifer has already made the entire class public,
    //it's useful to use them as dividers between methods and data.
public:
    char name[32];
    float price;
    bool isHot;

    //Structures can be identified inside classes, to store data
public:
    struct Info
    {
        int someinfo = 1;
    };
};


//an enum essentially gives names to numbers
enum Seasons
{
    Winter, //This corresponds to 0
    Spring, //This corresponds to 1
    Summer, //This corresponds to 2
    Fall //This corresponds to 3
};


int main()
{

    Sandwich sand;
    sand.price = 4.99f;
    //booleans can also operate off of numbers. 0 is false. Any other number is true. This is because any value other than 0 defaults to 1
    sand.isHot = true;
    sand.Display();

    //The command end1 is in std, and ends the code.
    //std::cout << sand.isHot << std::endl; Be careful of Lowercase L. One and L look similar, and can be difficult for naming conventions.
    //l and 1. (l1).
    
    std::cout << "Hello World!\n";

    //casting is a conversion process from one type of data to another

    int i = 5;
    char c = 23;

    //this is technically --i = (int)c;--, however this is unecessary in this case.
    //an integer is 4 bytes, but a char is only 1, so it transfers easily

    //this is an example of an implicit conversion
    i = c;

    float f = 23.4f;
    double d = 34.5;

    //a float is four bytes, and a double is 8 bytes

    //this is okay, because the smaller variable fits easily into the bigger variable
    d = f;

    //this needs the cast, as the computer sees the bigger variable going into the smaller variable,
    //and as such warns us about potential loss of precision;

    //this is an example of an explicit conversion
    f = (float)d;
    //another explicit conversion, more for easy readability.
    f = static_cast<float>(d);
    
    //This will tell you the size, in bytes, of the data type.
    std::cout << sizeof(d) << "\n";

    //This will tell you the size, with some padding, of the class
    std::cout << sizeof(sand) << "\n";
}
