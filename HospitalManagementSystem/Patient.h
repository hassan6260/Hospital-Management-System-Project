#pragma once
#include "Human.h"
#include "Room.h"
class Patient : public Human, Room
{
	static int id;
	int pId;
	char weight[5];
	char bloodGroup[5];

	static int appoint;
	int appointNum;
	int appointPrice{};
	string time;

	bool hasRoom;
	bool hasAppoint;

public:

	Patient() = default;
	Patient(int pId, string firstName, unsigned short int age, char gender, char weight[], char bloodGroup[]);

	void add(vector<Room> &r);
	void addAppointment(vector<Patient> &p);
	void addEmerAppointment(vector<Patient> &p);
	void displayAppointments(vector<Patient>& p, vector<Patient> &appoint);
	void showAppointmentsDetails(vector<Patient>& p);
	void patientFee(vector<Patient>& p, Patient& app);
	

};

