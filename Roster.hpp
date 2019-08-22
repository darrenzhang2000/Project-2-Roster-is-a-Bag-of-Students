#ifndef _ROSTER_
#define _ROSTER_
#include "ArrayBag.hpp"
#include <fstream>
#include "Student.hpp"
#include "Person.hpp"

class Roster:public ArrayBag<Student>{
public:
	/**
	default constructor for empty roster
	**/
	Roster(); 
	
	 /**parameterized constructor
	 @pre the input file is expected to be in CSV
	 (comma separated value) where each line has format:
	 “id,first_name_,last_name\n"
	 @param input_file_name the name of the input csv file
	 @post Student objects are added to roster as per the data
	 in the input file
	 **/
	 Roster(std::string input_file_name);	
		
	/**@post displays all students in roster, one per line
	 in the form "first_name_ last_name_\n"
	 **/
	 void display(); 	
	 
};

#endif 