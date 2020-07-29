#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Room
{
protected:
	static int number;
	int roomNumber{};
	string typeOfWard;
	int price{};
	string status;

public:
	Room() = default;
	Room(int roomNumber, string typeOfWard, int price, string status);

	void setTypeOfWard();

	void addRoom();
	void checkAvailability(vector<Room> r);
	void updateRoom(vector<Room> &r);
	void selectRoom(string typeOfWard, vector<Room> &r);
	void searchRoom(vector<Room> r);
	void displayRooms(vector<Room> r);
	void showRoomDetails();
};

