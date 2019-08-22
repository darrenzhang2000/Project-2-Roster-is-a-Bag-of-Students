#include "Roster.hpp"
#include <string>

	/**
	default constructor for empty roster
	**/
Roster::Roster():ArrayBag<Student>(){	
}


	 /**parameterized constructor
	 @pre the input file is expected to be in CSV
	 (comma separated value) where each line has format:
	 “id,first_name_,last_name\n"
	 @param input_file_name the name of the input csv file
	 @post Student objects are added to roster as per the data
	 in the input file
	 **/
Roster::Roster(std::string input_file_name):ArrayBag<Student>(){	
	std::ifstream infile; 
	infile.open(input_file_name);
	int id_int;
	std::string id, first, last; //the variables to store the inputted data 
	while(getline(infile, id, ',')&&getline(infile, first, ',') && getline(infile, last)){ //comma is the delimiter
		id_int = std::stoi(id); // s to i converts the string id to integer id 
		Student temp = Student(id_int, first, last); //creates student object using student constructor
		add(temp); //add student object to 
	}
}

	/**@post displays all students in roster, one per line
	 in the form "first_name_ last_name_\n"
	 **/
void Roster::display(){
	for(int i=0; i< item_count_; i++){
		std::cout << items_[i].getFirstName() << " " << items_[i].getLastName() << "\n";
	}
}
