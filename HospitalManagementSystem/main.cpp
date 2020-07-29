#include <iostream>
#include "Employee.h"
#include "Nurse.h"
#include "Doctor.h"
#include "Room.h"
#include "Human.h"
#include "Patient.h"

int main()
{
	cout << "\n\n\n\n\n\n\t\t\t|*******************************************************|" << endl;
	cout << "\t\t\t|                                                       |" << endl;
	cout << "\t\t\t|         Welcome To Hospital Management System         |" << endl;
	cout << "\t\t\t|                                                       |" << endl;
	cout << "\t\t\t|=======================================================|\n" << endl;
	system("pause");
	system("cls");
	char num;


	Employee* empPtr = nullptr;//pointer to use polymorphism virtual funtion
	Employee e1;
	Nurse n1;
	Doctor d1;
	
	Room r1;
	vector<Room> r;

	Patient p1;
	vector<Patient> p;

	Patient appoint;
	vector<Patient> appointment;

	do {
		cout
			<< "\n\n\n\t\tMAIN MENU\n\n"
			<< "\t\t1. Employees Section\n\n"
			<< "\t\t2. Nurses Section\n\n"
			<< "\t\t3. Doctors Section\n\n"
			<< "\t\t4. Patients File Section\n\n"
			<< "\t\t5. Manage Rooms\n\n"
			<< "\t\t0. Exit\n\n" << endl;
		cout << "\t\tSelect a number : ";
		cin >> num;
		cout << endl;
		system("cls");

		// starting of emp data
		if (num == '1')
		{
			empPtr = &e1;
			do {
				cout
					<< "\n\n\n\t\t1. Add Employee\n\n"
					<< "\t\t2. Display Employees\n\n"
					<< "\t\t3. Update Employees\n\n"
					<< "\t\t4. Search for Employee record\n\n"
					<< "\t\t0. Back to MAIN MENU\n\n" << endl;

				cout << "\t\tSelect a number : ";
				cin >> num;
				system("cls");

				cout << endl;

				if (num == '1')
				{
					empPtr->add();
					system("pause");
					system("cls");
				}
				else if (num == '2') {
					empPtr->display();
					system("pause");
					system("cls");
				}
				else if (num == '3') {
					empPtr->update();
				}
				else if (num == '4') {
					empPtr->search();
				}
				else if (num == '0') {
					break;

				}
				else {
					cout << "\t\tInvaild choice..\n" << endl;
				}

			} while (num != 0);

		}
		// ending of emp data
		//starting of Nurse data
		else if (num == '2') {
			empPtr = &n1;
			do
			{
				cout
					<< "\n\n\n\t\t1. Add Nurse\n\n"
					<< "\t\t2. Display Nurse\n\n"
					<< "\t\t3. Update Nurse\n\n"
					<< "\t\t4. Search for Nurse record\n\n"
					<< "\t\t0. Back to MAIN MENU\n\n" << endl;
				cout << "\t\tSelect a number : ";
				cin >> num;

				system("cls");
				//cout << endl;
				if (num == '1')
				{
					empPtr->add();
					system("pause");
					system("cls");
				}
				else if (num == '2') {
					empPtr->display();
					system("pause");
					system("cls");
				}
				else if (num == '3') {
					empPtr->update();
				}
				else if (num == '4') {
					empPtr->search();
				}
				else if (num == '0') {
					break;
				}
				else {
					cout << "\t\tInvaild choice.." << endl;
				}
			} while (num != 0);

		}
		//ending of Nurse data

		//starting of Doctor data
		else if (num == '3') {
			do
			{
				empPtr = &d1;
				//e1.display();
				cout
					<< "\t\t1. Add Doctor\n"
					<< "\t\t2. Display Doctor\n"
					<< "\t\t3. Update Doctor record\n"
					<< "\t\t4. Search for Doctor record\n"
					<< "\t\t0. Back to MAIN MENU\n\n" << endl;


				cout << "\t\tSelect a number : ";
				cin >> num;
				system("cls");

				cout << endl;

				if (num == '1')
				{
					empPtr->add();
					system("pause");
					system("cls");
				}
				else if (num == '2') {
					empPtr->display();
					system("pause");
					system("cls");
				}
				else if (num == '3') {
					empPtr->update();
				}
				else if (num == '4') {
					empPtr->search();
				}
				else if (num == '0') {
					break;
				}
				else {
					cout << "\t\tInvaild choice..\n" << endl;
				}
			} while (num != 0);
		}
		//ending of Doctor data

		//starting of Patient data
		else if (num == '4') {
			do
			{
				cout
					<< "\t\t1. Add New Patient Record\n"
					<< "\t\t2. Add Aappointment \n"
					<< "\t\t3. Add Emergency Appointment\n"
					<< "\t\t4. Display Appointments\n"
					<< "\t\t5. patient Fees\n"
					

					//<< "\t\t4. Add Diagnosis Information\n"
					//<< "\t\t5. Update Appointment\n"
					//<< "\t\t6. Cancel Appointment\n"
					//<< "\t\t7. Full History of the Patient\n"
					<< "\t\t0. Back to MAIN MENU\n\n" << endl;

				cout << "\t\tSelect a number : ";
				cin >> num;
				cout << endl;

				if (num == '1')
				{
					p1.add(r);
					p.push_back(p1);

					system("pause");
					system("cls");
				}
				else if (num == '2') {

					appoint.addAppointment(p);
					appointment.push_back(appoint);
					
					system("pause");
					system("cls");
				}
				else if (num == '3') {
					appoint.addEmerAppointment(p);
					appointment.insert(appointment.begin(), appoint);
					system("pause");
					system("cls");
				}
				else if (num == '4') {
					appoint.displayAppointments(p, appointment);
					system("pause");
					system("cls");
				}
				else if (num == '5') {
					p1.patientFee(p,  appoint);
					system("pause");
					system("cls");
				}
				else if (num == '0') {
					break;
				}
				else {
					cout << "\t\tInvaild choice.." << endl;
				}
			} while (num != 0);
		}//ending of Patient data
		else if (num == '5') {
			do
			{
				cout
					<< "\t\t1. Add Room\n"
					<< "\t\t2. Check Availability\n"
					<< "\t\t3. Update Room\n"
					<< "\t\t4. Search For a Room\n"
					<< "\t\t5. Display All Rooms\n"
					<< "\t\t0. Back to MAIN MENU\n\n" << endl;

				cout << "\t\tSelect a number : ";
				cin >> num;
				cout << endl;
				system("cls");

				if (num == '1')
				{
					r1.addRoom();
					r.push_back(r1);
					
					system("pause");
					system("cls");
				}
				else if (num == '2') {
					r1.checkAvailability(r);
					system("pause");
					system("cls");
				}
				else if (num == '3') {
					r1.updateRoom(r);
				}
				else if (num == '4') {
					r1.searchRoom(r);
				}
				else if (num == '5') {
					r1.displayRooms(r);
				}
				else if (num == '0') {
					break;
				}
				else {
					cout << "\t\tInvaild choice.." << endl;
				}
			} while (num != 0);
		}
		//ending of Room data
		else if (num == '0'){
			exit(0);
		}
	} while (num != 0);

	empPtr->~Employee();
	//empPtr2->~Nurse();
	//delete empPtr;
	return 0;
}