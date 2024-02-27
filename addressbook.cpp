#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Contact{
  string name;
  string address;
  string phone;
};

vector<Contact> addressBook;

void addContact(string name, string address, string phone) {
  Contact newContact;
  newContact.name = name;
  newContact.address = address;
  newContact.phone = phone;
  addressBook.push_back(newContact);
}

void displayContacts() {
  if (addressBook.empty()) {
    cout << "Address book is empty." << endl;
    return;
  }

  cout << "Contacts in the address book:" << endl;
  for (int i = 0; i < addressBook.size(); i++) {
    cout << "Name: " << addressBook[i].name << endl;
    cout << "Address: " << addressBook[i].address << endl;
    cout << "Phone: " << addressBook[i].phone << endl;
    cout << "-----------------------------" << endl;
  }
}

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
  
  addContact("John Doe", "123 Main St, Cityville", "555-1234");
  addContact("Jane Smith", "456 Elm St, Townsville", "555-5678");

  displayContacts();
  searchContact("John Doe");

  return 0;
}