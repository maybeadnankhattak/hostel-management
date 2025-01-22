#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name;
    int rollNo;
    string roomType;
    int stayDuration; 
    double fee;
};
double calculateFee(string roomType, int stayDuration) {
    double ratePerDay = 0;
    if (roomType == "Single") {
        ratePerDay = 1000;
    } else if (roomType == "Double") {
        ratePerDay = 800;
    } else if (roomType == "Triple") {
        ratePerDay = 600;
    }
    return 0;
}
int main() {
    Student student;
    cout << "Enter Student Name: ";
    getline(cin, student.name);
    cout << "Enter Roll Number: ";
    cin >> student.rollNo;
    cout << "Enter Room Type (Single/Double/Triple): ";
    cin >> student.roomType;
    cout << "Enter Stay Duration (in days): ";
    cin >> student.stayDuration;
    student.fee = calculateFee(student.roomType, student.stayDuration);
    cout << "\n--- Hostel Fee Details ---" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNo << endl;
    cout << "Room Type: " << student.roomType << endl;
    cout << "Stay Duration: " << student.stayDuration << " days" << endl;
    cout << "Total Fee: " << student.fee << " PKR" << endl;

    return 0;
}