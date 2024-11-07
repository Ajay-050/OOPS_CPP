#include<iostream>
using namespace std;


class Complex{
	
	private:
	
	int real;
        int imaginary;

        public:

	Complex(int a,int b){
		real = a;
		imaginary = b;
	}
	
	void print(){

		if(imaginary < 0){
			cout << real << imaginary << "i" << endl;
		}
		else{
			cout << real << "+" << imaginary << "i" << endl;
		}

	}
        
        void plus(Complex const &c2){
		int r = real+c2.real;
                int i = imaginary+c2.imaginary;
                real = r;
  		imaginary = i;
	}
	
	void multiply(Complex const &c2){
		int r = real*c2.real+(-1*(imaginary*c2.imaginary));
		int i = real*c2.imaginary+imaginary*c2.real;
		real=r;
		imaginary=i;
	}
};


int main(){
	
	Complex c1(3,4);
	Complex c2(2,-4);

	int choice;
	cout << "give your choice" << endl;
	cin >> choice;
	
	cout << "Here's the result for your choice" << endl;
	if(choice == 1){
		c1.plus(c2);
		c1.print();
                c2.print();
	}
	
	if(choice == 2){
		c1.multiply(c2);
		c1.print();
		c2.print();
	}
}
