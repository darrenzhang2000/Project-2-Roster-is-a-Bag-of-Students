#include "ArrayBag.hpp"
#include "Roster.hpp"
#include "Student.hpp"

int main(){
		/*
		ArrayBag<int> a1;
		a1.add(1);
		a1.add(2);
		a1.add(1);
		
		ArrayBag<int> a2;
		a2.add(1);
		a2.add(3);
		
		a1 -= a2;
			
		a1.display(); // 2
		*/
		
		Roster x = Roster("data.csv");
		x.display();	
}