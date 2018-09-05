/*
 * Plant.cpp
 * 
 * Copyright 2018 Mason Fisher 
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include "Plant.hpp"
/* checkS(string, string, int)
 * 
 * obj: This function searches the first string 'in' for the second string , 'given', starting
 * 		at point 'i'. If at any point the characters differ the method will return 
 * 		false. If each character found in the string given is found in the string
 * 		in then the method will return true
 * args: This method will take a string (in) and a second string(given) and an 
 * 		integer (i)
 * 
 */
bool Plant::checkS(std::string in, std::string given, int i){
int x=given.size();
for(int y=0;y<x;y++)
	if(in[i+y]!=given[y])
		return 0;
return 1;
}
/* Plant constructor
 *
 * This contructor creates an output text file in the current 
 * directory where the input strings will be converted into plant 
 * uml. 
 * 
 */
Plant::Plant(){
	output.open("output.txt");
	input_ptr = & input;
	output_ptr = & output;
}
/* setInput(string)
 * 
 * This function should be passed a string with the path to a file
 * or, if the file is in the current directory, just the name of the file that
 * is to be converted into plant uml
 */
void Plant::setInput(){ 	
	std::string name;
	if(!input.is_open())
	{
		check.out();
		std::cout << "Type the name of the file you'd like to have translated.\n";
		name = check.word();
		check.open(input_ptr, name);
	}
	else 
	{
		check.out();
		std::cout << "The file has already been opened and is in use. Restart the program to change the file.\n";
	}
}
/*start()
 * 
 * This is the first method to be called by main that will take 
 * the input of the file name and send it to setInput(string).
 * It will then begin the loop of line by line translating. 
 */
void Plant::start(){
    setInput();
    check.out();
    for(int i = 0; i < 3; i++)
		std::cout << check.get_s(input_ptr);
	
}

Plant::~Plant(){}
