/*
this is the implementation file for the class Validation
it focuses almost exclusively on inputs and error checking
it includes the search/sort for the state tax array
*/
#include "Validation.hpp"
#include <iostream>
#include <fstream>
#include <cstring>

/**

 Validation constructor

 -parameters: none


 */
Validation :: Validation()
{
}

/**

 Validation destructor

 -perameters: none

 */
Validation :: ~Validation()
{

}

/**
 MASON FISHER
 Validation yOn()
 Yes or no input validation.
 Returns true if user types Y or Yes and false if user inputs N or no

 -perameters: none


 */
bool Validation :: yOn()
{

    std::string str ="";
    out();
    do
    {
        std::cout << "Enter 'Y' for yes or 'N' for No: ";
        std::cin >> str;
        clear();
        if(toupper(str[0]) == 'Y')
            return true;
        else if(toupper(str[0]) == 'N')
            return false;
        else
        {
            out();
            std::cout << "Invalid input, Please ";
        }

    }
    while((toupper(str[0]) != 'N'&&(toupper(str[0]) != 'Y')));
    return false;
}

/**
 Validation numb(int)
 integer validation.
 Returns true if user types an integer and returns false if the user does not

 -perameters: int


 */
int Validation :: numb(int num)
{
    clear();
    std::cin >> num;

    while(!num)
    {
        clear();
        out();
        std::cout << "Invalid input.\n";
        out();
        std::cout << "Please input a number: ";
        std::cin >> num;
    }
    clear();
    return num;
}

/**
 Validation numb(int,int,int)
 ranged integer validation.
 Returns true if user types an integer equal to or between the low high variables
 returns false if int value is below the low value or above the high value

 -perameters: int, min int, max int


 */
int Validation :: numb(int num, int low, int high)
{
    std::cin >> num;

    while(!num||!(num<=high&&num>=low))
    {
        clear();
        out();
        std::cout << "Invalid input.\n";
        out();
        std::cout << "Please input a number above " << low-1 <<" but below " << high+1 << ": ";
        std::cin >> num;
    }
    clear();
    return num;
}

/**
 Validation numb(double)
 double validation.
 Returns true if user types a double value and returns false if the user does not

 -perameters: double


 */
double Validation :: numb(double num)
{
    clear();
    std::cin >> num;

    while(!num)
    {
        clear();
        out();
        std::cout << "Invalid input.\n";
        out();
        std::cout << "Please input a number: ";
        std::cin >> num;
    }
    clear();
    return num;
}

/**
 Validation numb(double,int,int)
 ranged double validation.
 Returns true if user types an double that is equal to or between the low and high values
 returns false if double is below low value or above high value

 -perameters: double,min int,max int


 */
double Validation :: numb(double num, int low, int high)
{
    std::cin >> num;

    while(!num||!(num<=high||num>=low))
    {
        clear();
        out();
        std::cout << "Invalid input.\n";
        out();
        std::cout << "Please input a number above " << low-1 <<" but below " << high+1 << ": ";
        std::cin >> num;
    }
    clear();
    return num;
}

/**
 Validation numb(float)
 float validation.
 Returns true if user types a float value and returns false if the user does not

 -perameters: float


 */
float Validation :: numb(float num)
{
    std::cin >> num;

    while(!num)
    {
        clear();
        out();
        std::cout << "Invalid input.\n";
        out();
        std::cout << "Please input a number: ";
        std::cin >> num;
    }
    clear();
    return num;
}

/**
 Validation numb(float,int,int)
 ranged float validation.
 Returns true if user types a float that is equal to or between the low and high values
 returns false if float is below low value or above high value

 -perameters: float,min int,max int


 */
float Validation :: numb(float num, int low, int high)
{
    std::cin >> num;

    while(!num||!(num<=high||num>=low))
    {
        clear();
        out();
        std::cout << "Invalid input.\n";
        out();
        std::cout << "Please input a number above " << low-1 <<" but below " << high+1 << ": ";
        std::cin >> num;
    }
    clear();
    return num;
}

/**
 Validation word()
 string validation.
 takes in string value

 -perameters: ~none~


 */
std::string Validation :: word()
{
    std::string strW = "";
    do{
	out();
    getline(std::cin, strW,'\n');
    out();
    std::cout << "You typed " << strW << ". Is this what you meant?\n";
    if(yOn())
        return strW;
    else
        strW = "";
    out();
    std::cout << "Please re-type your input: ";
    }while(strW == "");
    return strW;
}

/**
 Validation out()
 indents

 -perameters: ~none~


 */
void Validation::out()
{
    std::string INDENT = "          ";
    for(int i=0;i<2;i++)
        std::cout << INDENT;
}

void Validation::open(std::fstream * file, std::string name){

	file->open(name.c_str());
	while(!file->is_open()){
		out();
		std::cout << "The file could not be found with the name: " << name << ". \n";
		out();
		std::cout << "Please input a new name to check or type -99 to cancel: ";
		name = word();
		if(name == "-99")
			break;
		file->open(name.c_str());
	}
	if(name != "-99")
	{
		out();
		std::cout << "The file " << name << " was succesfully opened.\n";
	}
	
	
}


std::string Validation::get_s(std::fstream * in){
	char output[100];
	in -> getline(output, 100);
	if(strlen(output)>0)
		return output;
	else get_s(in);
	return output;
}
