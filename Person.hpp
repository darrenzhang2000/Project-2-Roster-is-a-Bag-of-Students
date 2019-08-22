#ifndef _PERSON_
#define _PERSON_
#include <string>

class Person{
public:
	//default constructor
	Person();

	//@param id unique id of person
	//@param first firstname of person	
	//@param last lastname of person object 
	//@pre id>0
	//@post creates an instance of a person object 
	//constructor
	Person(int id, std::string first, std::string last);

	//accessor - returns ID
	//@pre none
	//@post return value of ID 
	//@return the value of ID
	int getID() const;

	//accessor - returns first name
	//@pre none
	//@post return value of firstname
	//@return firstname of person object
	std::string getFirstName() const;

	//accessor - returns last name
	//@pre none
	//@post return value of lastname
	//@return lastname of person object
	std::string getLastName() const;
	
	bool operator==(Person p2) const;
protected:
	//protected data members
	int id_;
	std::string first_name_;
	std::string last_name_;
};

#endif
