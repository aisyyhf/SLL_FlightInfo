#include "SLL.h"

// Membuat list kosong
void Create_List(List &L) {
    L.first = nullptr;
}

// Membuat elemen baru dengan data yang diinputkan
adr New_Elemen(infotype data) {
    adr p = new elmList;
    p->info = data;
    p->next = nullptr;
    return p;
}

// Menyisipkan elemen di awal list
void Insert_First(List &L, adr p) {
    if (L.first == nullptr) {
        L.first = p;
    } else {
        p->next = L.first;
        L.first = p;
    }
}

// Menyisipkan elemen di akhir list
void Insert_Last(List &L, adr p) {
    if (L.first == nullptr) {
        Insert_First(L, p);
    } else {
        adr q = L.first;
        while (q->next != nullptr) {
            q = q->next;
        }
        q->next = p;
    }
}

// Menyisipkan elemen setelah elemen tertentu
void Insert_After(List &L, adr prec, adr p) {
    if (prec != nullptr) {
        p->next = prec->next;
        prec->next = p;
    } else {
        Insert_First(L, p);
    }
}

// Menghapus elemen pertama
void Delete_First(List &L, adr &p) {
    if (L.first == nullptr) {
        p = nullptr;
    } else {
        p = L.first;
        L.first = p->next;
        p->next = nullptr;
    }
}

// Menghapus elemen terakhir
void Delete_Last(List &L, adr &p) {
    if (L.first == nullptr) {
        p = nullptr;
    } else if (L.first->next == nullptr) {
        p = L.first;
        L.first = nullptr;
    } else {
        adr q = L.first;
        while (q->next->next != nullptr) {
            q = q->next;
        }
        p = q->next;
        q->next = nullptr;
    }
}

// Menghapus elemen setelah elemen tertentu
void Delete_After(List &L, adr prec, adr &p) {
    if (prec == nullptr || prec->next == nullptr) {
        p = nullptr;
    } else {
        p = prec->next;
        prec->next = p->next;
        p->next = nullptr;
    }
}

// Menampilkan seluruh elemen pada list
void Show(List L) {
    if (L.first == nullptr) {
        cout << "List kosong" << endl;
    } else {
        adr p = L.first;
        while (p != nullptr) {
            cout << "Flight Number: " << p->info.flightNumber << endl;
            cout << "Departure City: " << p->info.departureCity << endl;
            cout << "Arrival City: " << p->info.arrivalCity << endl;
            cout << "Arrival Time: " << p->info.arrivalTime << endl;
            p = p->next;
            cout << endl;
        }
    }
}

// Mengurutkan list berdasarkan flightNumber
void SortByFlightNumber(List &L) {
    if (L.first == nullptr) {
        cout << "List kosong" << endl;
    } else {
        adr p = L.first->next;
        while (p != nullptr) {
            infotype currentInfo = p->info;
            adr q = L.first;
            while (q != p && q->info.flightNumber < currentInfo.flightNumber) {
                q = q->next;
            }
            while (q != p) {
                infotype temp = q->info;
                q->info = currentInfo;
                currentInfo = temp;
                q = q->next;
            }
            p = p->next;
        }
    }
}

// Mencari elemen berdasarkan flightNumber
adr SearchByFlightNumber(List L, string flightNumber) {
    if (L.first == nullptr) {
        cout << "List kosong" << endl;
        return nullptr;
    } else {
        adr p = L.first;
        while (p != nullptr) {
            if (p->info.flightNumber == flightNumber) {
                cout << "Data penerbangan ditemukan:" << endl;
                cout << "Flight Number: " << p->info.flightNumber << endl;
                cout << "Departure City: " << p->info.departureCity << endl;
                cout << "Arrival City: " << p->info.arrivalCity << endl;
                cout << "Arrival Time: " << p->info.arrivalTime << endl;
                return p;
            }
            p = p->next;
        }
        cout << "Flight tidak ditemukan" << endl;
        return nullptr;
    }
}
