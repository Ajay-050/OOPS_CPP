#include<iostream>
using namespace std;
#include "student.cpp"

int main(){
   
     Student s1(21,101);
     cout << "s1 :"  << endl;
     s1.display();

     Student s2(s1); // copy constructor : copies all the value of properties from s1 to s2 properties
     // Student s2 = s1 :  this is same as Sudent s2(s1); it's not copy assignement operator.

     cout << "s2 :" << endl;
     s2.display();

     Student *s3 = new Student(23,901);
     cout << "s3 : " << endl;
     s3->display();
    
    /* Student *s4 = new Student(*s3);
     cout << "s4 : " << endl;
     s4->display();
     
     // copy assignment operator
     // after creation of objects if we want to copy all the values in an object to another object then we use copy assignment operator(=).
     
     Student s5(24,523);
     Student s6(29,234);
     // if i want s6 age as 24 and rollNumber as 523 then
     s6 = s5;
     s5.display();
     s6.display();*/

    // Destructor
    // destructor is called when function is about to return
    // for statically allocated objects destructor is called but for dynamically allocated objects we need to deallocate memory in heap
    // and we do it like  this 
    // delete s3;
    
    
	
}
