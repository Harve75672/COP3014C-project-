#include <iostream>
#include <vector>
#include <string>

using namespace std;

// This is the structure for storing the contact information.
struct Contact {
    string name;
    string address;
    string phone;
};

// This is the vector that will store the contacts.
vector<Contact> addressBook;

// This function will allow user to add contacts to the address book.
void addContact() {
    Contact newContact;
    cout << "Enter name: ";
    getline(cin, newContact.name);
    cout << "Enter address: ";
    getline(cin, newContact.address);
    cout << "Enter phone number: ";
    getline(cin, newContact.phone);
    addressBook.push_back(newContact);
    cout << "Contact added 
    successfully!" << endl;
}

// This function will allow the program to display contacts in the book.
void displayContacts() {
    if (addressBook.empty()) {
        cout << "Address book is empty!" << endl;
        return;
    }

    cout << "Contacts in the address book:" << endl;
    for (int i = 0; i < addressBook.size(); i++) {
        cout << "Name: " << addressBook[i].name << endl;
        cout << "Address: " << addressBook[i].address << endl;
        cout << "Phone: " << addressBook[i].phone << endl;
        cout << "--------------------------" << endl;
    }
}

// This function enables the user to search for contacts using names.
void searchContact(string name) {
    bool found = false;
    for (int i = 0; i < addressBook.size(); i++) {
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
    } while (choice !=4);

    return 0;
}