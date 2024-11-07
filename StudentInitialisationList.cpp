class Student{

	int age;
	const int rollNumber;
	int &x;

	public:
	
	Student(int r,int age):rollNumber(r),x(this->age){ // initialisation list : used when we have const or reference variables and want to initialise
		this->age = age;                           // at the time of creation itself because we cannot initialise them later.
	}
	
	void display(){
		cout << age << ":" << rollNumber << ":" << x << endl;
	}
};
