#include <iostream>
#include <string>
using namespace std;

class ticketType {
	const int id;
	bool VIP = false;

public:
	ticketType(const int id = 0, bool VIP = 0) :id(id)
	{
		this->VIP = VIP;
	}

	ticketType(const ticketType& s):id(id)
	{
		this->VIP = s.VIP;
	}


};

