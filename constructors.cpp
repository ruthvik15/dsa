#include <iostream>
using namespace std;
class Abstract_Demo{
private:
  int  first;
  char second ;
public:
  Abstract_Demo()
  {
    first = 1;
    cout<<"First is: " << first << endl;
  }
   void set_data (int n, char c) 
     { 
      first= n; second = c;
     } 
	void get_data(void) {  // interface2
          cout<<"Second is : " << second <<endl;
   	}
}; 

int main(){
   Abstract_Demo d1, d2;
   void (*func)(int, char);
   func = d1.set_data (5, 'M');
   //void (*fun_ptr)();
   //fun_ptr = d1.get_data();
   
   //d2.set_data(1000,'P');
   
 //  func = d1.get_data();
   
   //d2.get_data();
   //cout <<"Address of d1.set_data() is" << fun_ptr;
   printf("\n Address of function = %p",func);
   return 0;
}
