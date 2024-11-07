class Student{
	
	int age;

	public:
	char *name;
	Student(int age,char *name){
		
		this->age = age;
		// shallow copy : copies the addreess recieved in parameter name in this->name instead copying the entrire array at parameter name
		// into new array. this can modify the original array which we don't want so instead we use deep copy.
		// this->name = name;	
		
		// Deep Copy
		this->name = new char[strlen(name)+1];
		strcpy(this->name,name);
	
	}		
	
	Student(Student const &s){
		this->age = s.age;

		// Deep Copy
		this->name = new char[strlen(s.name)+1];
		strcpy(this->name,s.name);

	}

	void display(){	
		cout << age << " " << name << endl;
	}
	
	
};
