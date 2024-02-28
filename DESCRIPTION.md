# Project Part 1

Requirements:
Data Types:
Understand the basic data types in C++ such as int, double, and string.
Explore the usage of data types in variable declarations and assignments.
Must use at least 3 different types.

File Input/Output:
Learn to read from and write to files using ifstream and ofstream classes.
Understand file handling concepts to persistently store and retrieve data.
Should incorporate either reading from or writing to a file.

If/Else Statements:
Grasp the fundamentals of conditional statements using if/else.
Implement decision-making logic based on certain conditions.
Should include error-checking as well as other uses of the if and/or if-else statements.
The use of a switch is optional.

## Table of Contents
1. [Statement of Independent Effort](#statement-of-independent-effort)
1. [Analysis of Specifications](#analysis-of-specifications)
    - [Main](#main)
1. [Pseudocode](#pseudocode)
1. [Flowchart](#flowchart)
1. [Test Cases](#test-cases)
1. [Code](#code)
1. [User Manual](#user-guide)
1. [References](#references)

## Statement of Independent Effort

I, Briana Harvey, hereby certify that this is my original work completed with the assistance of the resources listed in the reference. I used these resources in the following areas: with the use of a switch.


## Analysis of Specifications

My program is an address book. You input the persons name, address, and phone number. It then creates the contact then stores it so you can access it at a later date. You also have the ability to see how many contacts you have. There is limited capicity to 100 at this moment in time.

### Main

_Fill in the values in the IPO Chart. See video in Canvas for example._

| Input                              | Process          | Output           |
| ---------------------------------- | ---------------- | ---------------- |
| Names, addresses, phone numbers    | Storing info     | Contact Info     |


## Pseudocode

```text=
Begin
Structure Contact
    String name
    String address
    String phone
End Structure

Constant MAX_CONTACTS = 100
Declare array addressBook[MAX_CONTACTS]
Declare integer numContacts = 0

Function addContact()
  If numContacts < MAX_CONTACTS:
    Output "Enter name:"
    Input newContact.name
    Output "Enter address:"
    Input newContact.address
    Output "Enter phone number:"
    Input newContact.phone
    addressBook[numContacts] = newContact
    Increment numContacts by 1
    Output "Contact added successfully!"
  Else
    Output "Address book is full. Cannot add more contacts."
End Function

Function displayContacts()
    If numContacts == 0:
        Output "Address book is empty."
    Else
        For i = 0 to numContacts - 1:
            1. Print "Name: ", addressBook[i].name
            2. Print "Address: ", addressBook[i].address
            3. Print "Phone: ", addressBook[i].phone
            4. Print "------------------------------"
    End If
End Function

Function searchContact(String name)
    Boolean found = False
    For i = 0 to numContacts - 1:
        If addressBook[i].name == name:
            1. Print "Contact found:"
            2. Print "Name: ", addressBook[i].name
            3. Print "Address: ", addressBook[i].address
            4. Print "Phone: ", addressBook[i].phone
            5. Set found to true
            6. Break the loop
        End If
    End For
    If found is False Then
        Output "Contact not found."
    End If
End Function

Function main()
    Integer choice
    String searchName

    Do
       Output "Address Book Menu"
       Output "1. Add Contact"
       Output "2. Display Contacts"
       Output "3. Search Contact"
       Output "4. Exit"
       Output "Enter your choice:"
       Input choice

       Switch choice
           Case 1:
               Call addContact()
               Break
           Case 2:
               Call displayContacts()
               Break
           Case 3:
               Output "Enter name to search:"
               Input searchName
               Call searchContact(searchName)
               Break
           Case 4:
               Output "Existing program. Goodbye!"
               Break
           Default:
               Output "Invalid choice. Please try again."
      End Switch
   While choice is not equal to 4

   Return 0
End Function

End Function
```

## Flowchart

_Paste flowchart image here. Note that the image has to uploaded to your repository and then a link added here_

[//]: <> (The syntax to add an image can be found here - https://www.markdownguide.org/basic-syntax/#images-1)

## Test Cases

_Test cases should include edge cases (values near the upper and lower bounds of the allowed values), and acceptable and unacceptable values. Produce at least 5 unique cases._

**Example (remove from submission)**

|Case #|Case Description|Input|Condition (numContacts < 100)|Output|
|:---:|:---|:---|:---:|:---|
|1|Item that should be approved|Contact 10 has been successfully added.|True |Approved|
|2|Item that should be approved (edge case)|Contact 99 has been successfully added. |True|Approved|
|3|Item that should not be approved|Contact 101 has not been added. Address book met capicity|False| Not Approved|


## Code

[Code](addressbook.cpp)

## User Manual

[User Manual](GUIDE.md) <br/>

## References

Chatgpt. ChatGPT. (2024). https://chat.openai.com/
