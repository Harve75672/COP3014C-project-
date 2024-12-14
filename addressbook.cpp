/*
Name: Briana Harvey
Date: 4/26/2024
Project Name: Project Part 3
Description: This program is an address book that allows the user to add contacts, display contacts, and search for contacts. The program uses a structure to store contact information and an array to store multiple contacts. The program uses a menu to allow the user to choose between the different options. The program will continue to run until the user chooses to exit.

*/
#include <iostream>
#include <string>
using namespace std;

// Creating the contact structure
struct Contact {
    string name;
    string address;
    string phone;
};

// Defining a max number of contacts
const int MAX_CONTACTS = 100;

// Defining an array to store contacts
Contact addressBook[MAX_CONTACTS];

// Keeping track of number of contacts stored
int numContacts = 0;

// Function that allows user to enter contacts
void addContact() {
    // Making sure we don't put in more than the max
    if (numContacts < MAX_CONTACTS) {
        Contact newContact;
        cout << "Enter name: ";
        getline(cin, newContact.name);
        cout << "Enter address: ";
        getline(cin, newContact.address);
        cout << "Enter phone number: ";
        getline(cin, newContact.phone);
        addressBook[numContacts++] = newContact;
        cout << "Contact added successfully!" << endl;
    } else {
        cout << "Address book is full. Cannot add more contacts." << endl;
    }

}

// Function that displays all contacts
void displayContacts () {
    if (numContacts == 0) {
        cout << "The address book is empty." << endl;
    } else {
        cout << "Contacts in the address book:" << endl;
        for (int i = 0; i < numContacts; i++) {
            cout << "Name: " << addressBook[i].name << endl;
            cout << "Adress: " << addressBook[i].address << endl;
            cout << "Phone: " << addressBook[i].phone << endl;
            cout << "-----------------------------" << endl;
        } 
    }
}

// Function that enables contact searching
void searchContact(string name) {
    bool found = false;
    for (int i = 0; i < numContacts; i++) {
        if (addressBook[i].name == name) {
            cout << "Contact found:" << endl;
            cout << "Name: " << addressBook[i].name << endl;
            cout << "Address: " << addressBook[i].address << endl;
            cout << "Phone: " << addressBook[i].phone << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Contact not found." << endl;
    }
}

// Main function
int main() {
    int choice;
    string searchName;

    do {
        cout << "\nAddress Book Menu\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                cout << "Enter name to search: ";
                getline(cin, searchName);
                searchContact(searchName);
                break;
            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
