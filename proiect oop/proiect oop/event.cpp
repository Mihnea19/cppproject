#include <iostream>
#include <string>
using namespace std;

class event {
private:
	string date;
	char* name;
	int time;
public:
	event(string date="10/10/2022", const char* name="meci", int time=21)
	{
		this->date = date;
		this->name = new char[strlen(name - 1)];
		this->time = time;
	}

	event(const event& s)
	{
		this->date = s.date;
		this->name = new char[strlen(s.name - 1)];
		this->time = s.time;
	}

	~event()
	{
		if (strlen(name - 1) != NULL)
		{
			delete[] name;
		}
	}




};

