#include <iostream>
using namespace std;

class Fraction
{

private:
   int numerator;
   int denominator;

public:

   int getNumerator() const {
      return numerator;
   }

   int getDenominator() const {
      return denominator;
   }
    
   void setNumerator(int n){
      numerator = n;
   }
   
   void setDenominator(int d){
      denominator = d;
   }

   Fraction(){
	
   }

   Fraction(int num, int denum)
   {

      numerator = num;

      if (denum != 0)
      {
         denominator = denum;
     }
   }

   void simplify() 
   {
      int gcd = 1;
      int j = min(numerator, denominator);
      for (int i = 1; i <= j; i++)
      {        if (numerator % i == 0 && denominator % i == 0)
         {
            gcd = i;
         }
      }

      numerator = numerator / gcd;
      denominator = denominator / gcd;
  }

   void printFraction() const
   {

      cout << numerator << "/" << denominator << endl;
   }

   void addFractions(Fraction const &f2)   {   
      int lcm = denominator * f2.denominator;
      int x = lcm / denominator;
      int y = lcm / f2.denominator;
      int num = numerator * x + f2.numerator * y;

      numerator = num;
      denominator = lcm;

      simplify();
   }
	
   Fraction operator+(Fraction const &f2){
      int lcm = denominator * f2.denominator;
      int x = lcm / denominator;
      int y = lcm / f2.denominator;
      int num = numerator * x + f2.numerator * y;    

     Fraction fNew(num,lcm);
     fNew.simplify();
     return fNew;
   }

   void multiplyFractions(Fraction const &f2)
   {
      int num = numerator * f2.numerator;
      int denum = denominator * f2.denominator;
      numerator = num;
      denominator = denum;
      simplify();
   }

   bool operator==(Fraction const &f2){
     return (this->numerator == f2.numerator && this->denominator == f2.denominator);
   }
};

int main()
{
   Fraction f1(10, 2);
   Fraction f2(15, 4);
   
   Fraction f3 = f1+f2;
   f1.printFraction();
   f2.printFraction();
   f3.printFraction();   
   
   if(f1 == f2){
     cout << "Equal" << endl;
   }
   else{
     cout << "Not Equal" << endl;
   }
}

