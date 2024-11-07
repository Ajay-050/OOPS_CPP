#include<iostream>
using namespace std;



class Student{

	int age;
	int rollNumber;
	static int totalStudents;

	public:
	Student(){
		totalStudents++;
	}
	static int getTotalStudents(){
		return totalStudents;
	}
	
	
};

int Student::totalStudents = 0;


int main(){
	
	Student s1,s2,s3,s4,s5;
	
	cout << Student::getTotalStudents() << endl;
	
}
