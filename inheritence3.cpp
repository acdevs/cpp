// Example: 

#include <iostream> 
using namespace std; 

class A 
{ 
	private: 
	int a; 
	public: 
	void get_a() 
	{ 
	cout << "Enter the value of 'a' : "; 
	cin>>a; 
	} 
    int return_a(){
        return a;
    }
}; 
	
class B : public A 
{ 
	protected: 
	int b; 
	public: 
	void get_b() 
	{ 
	cout << "Enter the value of 'b' : "; 
	cin>>b; 
	} 
}; 
class C 
{ 
	protected: 
	int c; 
	public: 
	void get_c() 
	{ 
		cout << "Enter the value of c is : "; 
		cin>>c; 
	} 
}; 
	
class D : public B, public C 
{ 
	protected: 
	int d; 
	public: 
	void mul() 
	{ 
		get_a(); 
		get_b(); 
		get_c(); 
		cout << "Multiplication of a,b,c is : " <<return_a()*b*c; 
	} 
}; 


int main() 
{ 
	D d; 
	d.mul(); 
	return 0; 
}
