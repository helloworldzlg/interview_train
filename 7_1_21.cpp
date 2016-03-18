#include <iostream>

using namespace std;

class test_1
{
	public:
		test_1(int n){num = n;};
		void output(){cout << num << endl;};
	private:
		int num;
}; 

class test_2
{
	public:
		explicit test_2(int n){num = n;};
		void output(){cout << num << endl;};
		
	private:
		int num;
};

int main()
{
	test_1 a = 12;
	//test_2 b = 12;
	test_2 b(12);
	
	a.output();
	b.output();
	
	return 0;
}
