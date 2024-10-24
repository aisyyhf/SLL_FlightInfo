#include "SLL.h"

int main() {
    List MAH;
    infotype data1, data2, data3, data4, data5, data6;
    adr p1, p2, p3, p4, p5, p6;

    // 01. Create list
    Create_List(MAH);

    // Input data pertama
    cout << "Input Flight Number: "; cin >> data1.flightNumber;
    cout << "Input Departure City: "; cin >> data1.departureCity;
    cout << "Input Arrival City: "; cin >> data1.arrivalCity;
    cout << "Input Arrival Time: "; cin >> data1.arrivalTime;

    // 02. Create elemen pertama
    p1 = New_Elemen(data1);

    // 03. Insert pertama (Insert First)
    Insert_First(MAH, p1);

    // Input data kedua
    cout << "Input Flight Number: "; cin >> data2.flightNumber;
    cout << "Input Departure City: "; cin >> data2.departureCity;
    cout << "Input Arrival City: "; cin >> data2.arrivalCity;
    cout << "Input Arrival Time: "; cin >> data2.arrivalTime;

    // 04. Create elemen kedua
    p2 = New_Elemen(data2);

    // 05. Insert kedua (Insert Last)
    Insert_Last(MAH, p2);

    // Input data ketiga
    cout << "Input Flight Number: "; cin >> data3.flightNumber;
    cout << "Input Departure City: "; cin >> data3.departureCity;
    cout << "Input Arrival City: "; cin >> data3.arrivalCity;
    cout << "Input Arrival Time: "; cin >> data3.arrivalTime;

    // 06. Create elemen ketiga
    p3 = New_Elemen(data3);

    // 07. Insert ketiga (Insert First)
    Insert_First(MAH, p3);

    // Input data keempat
    cout << "Input Flight Number: "; cin >> data4.flightNumber;
    cout << "Input Departure City: "; cin >> data4.departureCity;
    cout << "Input Arrival City: "; cin >> data4.arrivalCity;
    cout << "Input Arrival Time: "; cin >> data4.arrivalTime;

    // 08. Create elemen keempat
    p4 = New_Elemen(data4);

    // 09. Insert keempat (Insert Last)
    Insert_Last(MAH, p4);

    // Input data kelima
    cout << "Input Flight Number: "; cin >> data5.flightNumber;
    cout << "Input Departure City: "; cin >> data5.departureCity;
    cout << "Input Arrival City: "; cin >> data5.arrivalCity;
    cout << "Input Arrival Time: "; cin >> data5.arrivalTime;

    // 10. Create elemen kelima
    p5 = New_Elemen(data5);

    // 11. Insert kelima (Insert After elemen keempat)
    Insert_After(MAH, p4, p5);

    // Input data keenam
    cout << "Input Flight Number: "; cin >> data6.flightNumber;
    cout << "Input Departure City: "; cin >> data6.departureCity;
    cout << "Input Arrival City: "; cin >> data6.arrivalCity;
    cout << "Input Arrival Time: "; cin >> data6.arrivalTime;

    // 12. Create elemen keenam
    p6 = New_Elemen
