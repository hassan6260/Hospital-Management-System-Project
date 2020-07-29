#include "Patient.h"
#include "Doctor.h"
int Patient::id = 0;
int Patient::appoint = 0;

Patient::Patient(int pId, string firstName, unsigned short int age, char gender, char weight[], char bloodGroup[])
	: Human(firstName, age, gender), pId(pId)
{
	memcpy(this->weight, weight, sizeof(weight));
	memcpy(this->bloodGroup, bloodGroup, sizeof(bloodGroup));
}

bool hasRoom = false;
bool hasAppoint = false;
void Patient::add(vector<Room> &r)
{

		pId = ++id;
		cout << "\t\tPatient id : " << pId << endl;
		cout << "\t\tFirst name : ";
		cin >> firstName;
		cout << "\t\tage : ";
		cin >> age;
		cout << "\t\tgender : ";
		cin >> gender;
		cout << "\t\tweight : ";
		cin >> weight;
		cout << "\t\tbloodGroup : ";
		cin >> bloodGroup;

		char yesNo;
		cout << "\ndo you need reseve a room, \'Y\' for yes & \'N\' for no : ";
		cin >> yesNo;
		if (yesNo == 'y' || yesNo == 'Y')
		{
			hasRoom = true;
			char type;
			cout << "\n\t\tType Of Ward";
			cout << "\n\t\t\t1. Sharing Ward"
				<< "\n\t\t\t2. Special Ward"
				<< "\n\t\t\t3. Private Room";

		x: cout << "\nSelect The Room Type (1 - 3) : ";
			string typeOfWard1;
			cin >> type;
			switch (type)
			{
			case '1': typeOfWard1 = "Sharing Ward";
				price = 1000;
				break;
			case '2': typeOfWard1 = "Special Ward";
				price = 2000;
				break;
			case '3': typeOfWard1 = "Private Room";
				price = 4000;
				break;
			default:
				cout << "invalid choice...\n";
				goto x;
			}
		
			cout << "\t\t-----------------\n";

			selectRoom(typeOfWard1, r);
		}
		else if (yesNo == 'N' || yesNo == 'n')
		{
			hasRoom = false;
		}
		else
		{
			cout << "invalid choice...\n";
		}



}



void Patient::addAppointment(vector<Patient> &p)
{
	int pId;
	cout << "Enter Patient id : ";
	cin >> pId;
	size_t i;
	for (i = 0; i < p.size(); i++) {
		if (pId == p[i].pId) {
			cout << "\t\tPatient id : " << p[i].pId << endl;

			appointNum = ++appoint;
			cout << "\t\tAppointment Number : " << appointNum << endl;
			cout << "\t\tAppointment time : ";
			cin >> time;
			cout << "\t\tAppointment price : ";
			cin >> appointPrice;
			hasAppoint = true;
		}
	}
}

void Patient::addEmerAppointment(vector<Patient> &p)
{
	addAppointment(p);
}

void Patient::displayAppointments(vector<Patient>& p, vector<Patient> &appoint)
{
	for (size_t i = 0; i < appoint.size(); i++)
	{
			cout << "Patient id          : " << pId
				<< "\nAppointment Number  : " << appoint[i].appointNum
				<< "\nAppointment time    : " << appoint[i].time
				<< "\n----------------------------" << endl;
			cout << endl;
	}
}

void Patient::showAppointmentsDetails(vector<Patient>& p)
{
	cout << "Patient id          : " << firstName
		<< "\nAppointment Number  : " << appointNum
		<< "\nAppointment time    : " << time
		<< "\n----------------------------" << endl;
}

void Patient::patientFee(vector<Patient>& p, Patient& app)
{
	int pId;
	double totalFees = 0;
	cout << "Enter Patient id : ";
	cin >> pId;
	size_t i;
	for (i = 0; i < p.size(); i++) {
		if (pId == p[i].pId) {
			cout << "\t\tPatient id : " << p[i].pId << endl;
			if (p[i].hasRoom == true)
			{
				cout << "\t\tRoom price : " << price << endl;
				totalFees += price;
			}
			if (app.hasAppoint == true)
			{
				cout << "\t\tAppointment price : " << app.appointPrice << endl;
				totalFees += app.appointPrice;
			}
			break;
		}

	}
		cout << "Total fees : " << totalFees << endl;

}