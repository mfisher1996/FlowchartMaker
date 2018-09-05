//
//  Validation.hpp
//  Project
//
//  Created by Mason Fisher on 11/20/17.
//  Copyright © 2017 Mason Fisher. All rights reserved.
//

#ifndef Validation_hpp
#define Validation_hpp

#include <iostream>
#include <fstream>




class Validation{
public:
    /**
     Author: MASON FISHER
     
     Validation constructor
     
     Perameters: none

     
     */
    Validation();
    /**
     Author: MASON FISHER
     
     Validation destructor
     
     Perameters: none
     
     
     */
    ~Validation();
    /**
     Author: MASON FISHER
     
     Validation yOn()
     
     Yes or no input validation.
     Returns true if user types Y or Yes and false if user inputs N or no
     
     Perameters: none
     
     Returns: true if 'Y' is input and false if 'N' is input
     
     */
    bool yOn();
    
    /**
     Author: MASON FISHER
     
     Validation numb(int)
     
     Discribtion:
     Is passed an argument that will disabiguate the function call.
     
     Perameters:
     
        -int num
     
     Returns: an integer from input
     
     */
    int numb(int);
    /**
     Author: MASON FISHER
     
     Validation numb(int, int, int)
     
     Discribtion:
     Is passed an argument that will disabiguate the function call, a low number that should not be less than the input and a high number that is not to be exceeded.
     
     Perameters:
     
        -int num
        -int high
        -int low
    
     Returns: an integer below high and above low
     
     */
    int numb(int, int, int);
    /**
     Author: MASON FISHER
     
     Validation numb(double)
     
     Discribtion:
     Is passed an argument that will disabiguate the function call.
     
     Perameters:
     
        -double num
     
     Returns: a double
     
     */
    double numb(double);
    /**
     Author: MASON FISHER
     
     Validation numb(double, double, double)
     
     Discribtion:
     Is passed an argument that will disabiguate the function call, a low number that should not be less than the input and a high number that is not to be exceeded.
     
     Perameters:
     
        -double num     // Number to be validated. Also passed to disabiguate function call.
        -double high    // Number that should not be exceded by num
        -double low     // Number that should not exced num
     
     Returns: a double below high and above low
     
     */
    double numb(double, int, int);
    /**
     Author: MASON FISHER
     
     Validation numb(float)
     
     Discribtion:
     Is passed an argument that will disabiguate the function call.
     
     Perameters:
     
        -float num
     
     Returns: a float
     
     */
    float numb(float);
    /**
     Author: MASON FISHER
     
     Validation numb(float, float, float)
     
     Discribtion:
     Is passed an argument that will disabiguate the function call, a low number that should not be less than the input and a high number that is not to be exceeded.
     
     Perameters:
     
        -float num      // Number to be validated. Also passed to disabiguate function call.
        -float high     // Number that should not be exceded by num
        -float low      // Number that should not exced num
     
    Returns: a float below high and above low
     
     */
    float numb(float, int, int);
    /**
     Author: MASON FISHER
     
     Validation word()
     
     Discribtion:
     gets a line from input and asks the user if that is what they meant to type.
     
     Perameters: none
     
     Returns: a string that the user confirms
     */
    std::string word();
    /**
     Author: MASON FISHER
     
     Validation clear()
     
     Description:
     clears the input buffer. Used in input functions invloving numbers or anything not including strings.
     
     Perameters: none
     
     
     */
    void clear(){std::cin.clear(); std::cin.ignore(40,'\n');};
    void open(std::fstream *, std::string);
    void out();
    std::string get_s(std::fstream *);
    
};


#endif /* Validation_hpp */
