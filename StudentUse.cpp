
#include<iostream>
#include<cstring>
using namespace std;
#include "student.cpp"

int main()
{
	Student s1,s2;

	strcpy(s1.name,"ajay");

	// char naam[] = "ajay";
	// s1.name = naam; this will give you error because naam stores the address of first character but not the entire string.

	s1.age=21;

	s1.display();

	s1.setRoll(123);
	cout << s1.getRoll() << endl;

	Student *s3 = new Student(10);

	strcpy((*s3).name,"Satwika");
	(*s3).age = 20;
	
	s3->display();
}
