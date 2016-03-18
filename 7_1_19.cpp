#include <iostream>
#include <string.h>

using namespace std;

class String
{
	public:
		String(const char *str = NULL);
		String(const String &another);
		~String();
		String& operator = (const String &rhs);
		void output() {cout << m_data << endl;};
	private:
		char *m_data;
};

String::String(const char *str)
{
	if (NULL == str)
	{
		m_data = new char[1];
		m_data[0] = '\0';
	}
	else
	{
		m_data = new char[strlen(str)+1];
		strcpy(m_data, str);
	}
}

String::String(const String &another)
{
	m_data = new char[strlen(another.m_data)+1];
	strcpy(m_data, another.m_data);
}

String::~String()
{
	delete[] m_data;
}

String& String::operator =(const String &rhs)
{
	if (this == &rhs)
		return *this;
		
	delete[] m_data;
	m_data = new char(strlen(rhs.m_data)+1);
	strcpy(m_data, rhs.m_data);
	return *this;
}


int main()
{
	String a("abcdefg");
	a.output();
	String b(a);
	b.output();
	String c = b;
	c.output();
	return 0;
}
