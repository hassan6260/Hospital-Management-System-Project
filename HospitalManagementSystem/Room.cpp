#include "Room.h"

int Room::number = 0;

Room::Room(int roomNumber, string typeOfWard, int price, string status) : typeOfWard(typeOfWard),
price(price), status(status), roomNumber(roomNumber)
{
}

void Room::setTypeOfWard()
{
	char type;
	cout << "\n\t\tType Of Ward";
	cout << "\n\t\t\t1. Sharing Ward"
		<< "\n\t\t\t2. Special Ward"
		<< "\n\t\t\t3. Private Room";
	x: cout << "\nSelect The Room Type (1 - 3) : ";
	cin >> type;
	switch (type)
	{
	case '1': typeOfWard = "Sharing Ward";
		price = 1000;
		break;
	case '2': typeOfWard = "Special Ward";
		price = 2000;
		break;
	case '3': typeOfWard = "Private Room";
		price = 4000;
		break;
	default:
		cout << "invalid choice...\n";
		goto x;
	}
	cout << "\n\t\tType Of Ward : " << typeOfWard
		 << "\n\t\tPrice        : " << price;
}

void Room::addRoom()
{
		roomNumber = ++number;
		cout << "\t\tRoom number : " << roomNumber << endl;
		setTypeOfWard();
		status = "Available";
		cout << "\n\t\tStatus       : " << status << endl;

		cout << "Room added..." << endl;
		cout << "\t\t--------------------\n";
}

void Room::checkAvailability(vector<Room> r)
{
	int av = 0, notAv = 0;
	for (size_t i = 0; i < r.size(); i++)
	{
		if (r[i].status == "Available") {
			av++;
		}
		if (r[i].status != "Available") {
			notAv++;
		}
	}
	cout << "There is " << av << " Available" << endl;
	cout << "There is " << notAv << " Not Available" << endl;
}

void Room::updateRoom(vector<Room> &r)
{
	int num;
	bool isFound = false;
	cout << "Enter room number : ";
	cin >> num;

	for (size_t i = 0; i < r.size(); i++)
	{
		if (r[i].roomNumber == num)
		{
			r[i].setTypeOfWard();

			cout << "\n-----------------\n" << endl;
			cout << "\nRoom Updated...\n" << endl;
			r[i].showRoomDetails();
			isFound = true;
		}
	}
	if (isFound == false){
		cout << "Not found\n";
	}
	system("pause");
	system("cls");
	
}
void Room::selectRoom(string typeOfWard, vector<Room> &r)
{
	
	bool isFound = false;
	for (size_t i = 0; i < r.size(); i++)
	{
		if (r[i].typeOfWard == typeOfWard && r[i].status == "Available")
		{
			r[i].status = "Not Available";
			cout << "\nRoom reseved...\n" << endl;
			r[i].showRoomDetails();
			isFound = true;
			break;
		}
	}
	if (isFound == false) {
		cout << "Not found\n";
	}
	system("pause");
	system("cls");
}
void Room::searchRoom(vector<Room> r)
{
	int num;
	bool isFound = false;
	cout << "Enter room number : ";
	cin >> num;
	for (size_t i = 0; i < r.size(); i++)
	{
		if (r[i].roomNumber == num)
		{
			r[i].showRoomDetails();
			isFound = true;
		}
	}
	if (isFound == false){
		cout << "Not found\n";
	}
	system("pause");
	system("cls");
}

void Room::displayRooms(vector<Room> r)
{
	for (size_t i = 0; i < r.size(); i++)
	{
		r[i].showRoomDetails();
		cout << endl;
	}
	system("pause");
	system("cls");
}

void Room::showRoomDetails()
{
	cout << "Room Number : " << roomNumber
		<< "\nType Of Ward: " << typeOfWard
		<< "\nPrice        : " << price
		<< "\nStatus       : " << status
		<< "\n----------------------------" << endl;
}