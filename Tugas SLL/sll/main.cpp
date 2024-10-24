#include <iostream>
#include <string>
#include "SLL.h"

using namespace std;

int main() {
    List MAH;
    infotype data1, data2;
    adr p1, p2, p;

    // Create list
    Create_List(MAH);

    // Input data for flight 1
    cout << "Enter data for flight 1:" << endl;
    cout << "Flight Number: ";
    cin.ignore();
    getline(cin, data1.flightNumber);
    cout << "Departure City: ";
    getline(cin, data1.departureCity);
    cout << "Arrival City: ";
    getline(cin, data1.arrivalCity);
    cout << "Arrival Time: ";
    getline(cin, data1.arrivalTime);

    // Create new element and insert it
    p1 = New_Elemen(data1);
    Insert_First(MAH, p1);

    // Input data for flight 2
    cout << "Enter data for flight 2:" << endl;
    cout << "Flight Number: ";
    getline(cin, data2.flightNumber);
    cout << "Departure City: ";
    getline(cin, data2.departureCity);
    cout << "Arrival City: ";
    getline(cin, data2.arrivalCity);
    cout << "Arrival Time: ";
    getline(cin, data2.arrivalTime);

    // Create new element and insert it
    p2 = New_Elemen(data2);
    Insert_Last(MAH, p2);

    // Display list
    cout << "List after initial insertions:" << endl;
    Show(MAH);

    // Search and delete second data
    adr prec = SearchByFlightNumber(MAH, data2.flightNumber);
    if (prec != nullptr) {
        Delete_After(MAH, prec, p);
        cout << "Deleted flight after " << data2.flightNumber << endl;
    }

    // Sort list
    SortByFlightNumber(MAH);

    // Display sorted list
    cout << "List after deletions and sorting:" << endl;
    Show(MAH);

    return 0;
}
