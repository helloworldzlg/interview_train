#include <iostream>
#include <string.h>

using namespace std;

class CA
{
	public:
		CA(int b, char* cstr);
		CA(const CA &c);
		void show();
		~CA();
	private:
		int a;
		char *str;
};

CA::CA(int b, char *cstr)
{
	a = b;
	
	str = new char[b];
	if (str != NULL)
		strcpy(str, cstr);	
}

CA::CA(const CA &c)
{
	a   = c.a;
	str = new char[a];
	if (str != NULL)
		strcpy(str, c.str);
}

void CA::show()
{
	cout << str << endl;
}

CA::~CA()
{
	delete str;
}

int main()
{
	CA A(10, "hello");
	CA B = A;
	
	B.show();
	
	return 0;
}
