#include<iostream>
#include<cstring>
using namespace std;
#include "StudentShallowDeepCopy.cpp"

int main(){
	char name[] = "ajay";
	Student s1(21,name);
	s1.display();

	name[3] = 's';
	Student s2(22,name);
	s2.display();

	s1.display();
}
