#include<iostream>
using namespace std;
#include<cstring>
#include "StudentShallowDeepCopy.cpp"

int main(){
	
	char name[] = "abcd";
	Student s1(20,name);
	s1.display();
	
	Student s2(s1);

	// default copy constructor causes shallow copy modifying the s1.name even though we modified only s2.name
	// beacuse we are trying to copy all the values of s1 to s2 so if s1.name address is 700 now s2.name also points to this address so modifying s2.name 	      // modifies s1.name too.

	s2.name[0]='x';
	
	s1.display();
	s2.display();
	
}
