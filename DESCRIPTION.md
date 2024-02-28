# Project Part 1

[//]: <> (Basic markdown syntax can be found here -https://www.markdownguide.org/basic-syntax/)

[//]: <> (Copy this file and rename it based on the submission number, i.e., PART1.md. Remove all the comments and italisized text before submitting.)

_Describe what the requirements are for the project._

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

I, Briana Harvey, hereby certify that this is my original work completed with the assistance of the resources listed in the reference. I used these resources in the following areas: ***[...]***.


## Analysis of Specifications

_Analysis of specifications is where you identify the inputs, outputs, and processes performed by the code. An example process in a blackjack game would be "generate a random card for the user". This section must contain an IPO chart for each function._

### Main

_Fill in the values in the IPO Chart. See video in Canvas for example._

| Input    | Process  | Output   |
| -------- | -------- | -------- |
| Text     | Text     | Text     |


## Pseudocode

```text=
Begin
Structure Contact
    String name
    String address
    String phone
End Structure

Array of Contact addressBook

Function addContact()
    Create a new Contact object newContact
    Output "Enter name:"
    Input newContact.name
    Output "Enter address:"
    Input newContact.address
    Output "Enter phone number:"
    Input newContact.phone
    Add newContact to addressBook
    Output "Contact added successfully!"
End Function

Function displayContacts()
    If addressBook is empty Then
        Output "Address book is empty."
        Return
    End If

    Output "Contacts in the address book: "
    For each contact in addressBook
        Output "Name: " + contact.name
        Output "Address: " + contact.address
        Output "Phone: " + contact.phone
        Output "---------------------"
    End For
End Function

Function searchContact(String name)
    Boolean found = False
    For each contact in addressBook
        If contact.name is equal to name Then
            Output "Contact found:"
            Output "Name: " + contact.name
            Output "Address: " + contact.address
            Output "Phone: " + contact.phone
            Set found to True
            Exit for
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

|Case #|Case Description|Input|Condition (price > creditLimit)|Output|
|:---:|:---|:---|:---:|:---|
|1|Item that should be approved|Price = 7800|False |Approved|
|2|Item that should be approved (edge case)|Price = 8000 |False|Approved|
|3|Item that should not be approved|Price = 10000|True| Not Approved|


## Code

_Include a link to your `cpp` file._

## User Manual
_Include a link to a separate file called GUIDE.md_

[User Manual](GUIDE.md) <br/>
_Updated: **[DATE]**_

## References

_List all references in [APA 7 Format](https://owl.purdue.edu/owl/research_and_citation/apa_style/apa_formatting_and_style_guide/index.html)._
