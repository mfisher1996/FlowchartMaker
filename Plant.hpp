/*
 * Plant.hpp
 * 
 * Copyright 2018 Mason Fisher <mason@mason-M68MT-S2>
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
 
#ifndef Plant_hpp
#define Plant_hpp

#include <iostream>
#include <fstream>
#include "Validation.hpp"

class Plant{

public:
	Plant();
	~Plant();
	bool checkS(std::string, std::string, int);
	void setInput();
	void start();
private:	
	Validation check; 
	std::fstream * input_ptr;
	std::fstream * output_ptr;
	std::fstream input;
	std::fstream output;
};

#endif 
