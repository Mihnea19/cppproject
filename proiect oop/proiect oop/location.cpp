#include <iostream>
#include <string>
using namespace std;

enum class Type{PELUZA, TRIBUNA};

class location {
private:
	int noSeats;
	int* row;
	Type type;
	int seat;

public:
	location(int noSeats = 50, int* row = 0, Type type = Type::PELUZA, int seat = 0)
	{
		this->noSeats = noSeats;
		this->row = new int[noSeats];
		for (int i = 0; i < noSeats; i++)
		{
			this->row[i] = row[i];
		}
		this->type = type;
		this->seat = seat;
	}

	location(const location& s)
	{
		this->noSeats = s.noSeats;
		this->row = new int[s.noSeats];
		for (int i = 0; i < s.noSeats; i++)
		{
			this->row[i] = s.row[i];
		}
		this->type = s.type;
		this->seat = s.seat;
	}

	~location()
	{
		if (noSeats != 0)
		{
			delete[] row;
		}
	}




};



