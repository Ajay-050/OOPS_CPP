class Student{

	public:

	char name[5];
	int age;

	private:
	int rollNumber;

	public:
    ~Student(){
	 cout << "Destructor Called" << endl;
	}

	Student(){
	 cout << "Default constructor called" << endl;
	}

	Student(int r){
	  rollNumber = r;		
	}

	Student(int a,int b){
	 this->age = a;
	 this->rollNumber = b;
	}
	
	void display(){
	  cout << name << " " << rollNumber << endl;
	}
	
	void setRoll(int x){
	 rollNumber = x;
	}
	
	int getRoll(){
	 return rollNumber;
	}
			
};




