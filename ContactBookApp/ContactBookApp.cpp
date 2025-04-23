#include <iostream>
#include <fstream>       // for file input/output (ifstream, ofstream)
#include <string>
using namespace std;

// Define a struct to hold contact info
struct contact {
    string name;
    string phone; // phone is string incase the user uses - or + or other characters in their number, int would give an error
    string email;
};

// Function to add a contact and save it to the file
void addContact() {
    contact person;  // Create a new contact object

    // Ask the user for contact details
    cout << "What is your name?" << endl;
    getline(cin, person.name);  // Use getline to handle names with spaces

    cout << "What is your phone number?" << endl;
    getline(cin, person.phone);  // Use getline to allow dashes or parentheses

    cout << "Please enter your email" << endl;
    getline(cin, person.email);

    // Open the file in append mode (adds to the end without erasing previous content)
    ofstream fileWrite("contactInfo.txt", ios::app);

    // Check if the file opened successfully
    if (fileWrite.is_open()) {
        // Write contact details to the file
        fileWrite << "Name: " << person.name << endl;
        fileWrite << "Phone Number: " << person.phone << endl;
        fileWrite << "Email: " << person.email << endl;
        fileWrite << "---" << endl;  // Separator line between contacts
        fileWrite.close();  // Close the file
        cout << "Contact Saved!" << endl;
    } else {
        // If file can't be opened, show error
        cout << "Failed to open file" << endl;
    }
}

// Function to display all saved contacts
void viewContact() {
    ifstream fileRead("contactInfo.txt");  // Open the file for reading
    string line;

    // Check if the file opened successfully
    if (!fileRead.is_open()) {
        cout << "No saved contacts found" << endl;
        return;  // Exit the function
    }

    cout << "\n--- Saved Contact ---\n";

    // Read the file line by line and print each line
    while (getline(fileRead, line)) {
        cout << line << endl;
    }

    fileRead.close();  // Close the file after reading
}

// Main function: shows menu and loops until user exits
int main() {
    int choice;  // Store user's menu choice

    // Repeat the menu until the user chooses to exit (choice 3)
    do {
        // Show menu
        cout << "\n--- Contact Book Menu ---\n";
        cout << "1. Add a new contact\n";
        cout << "2. View contacts \n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Clear input buffer to safely use getline later

        // Perform action based on user choice
        switch (choice) {
            case 1:
                addContact();  // Call function to add a contact
                break;
            case 2:
                viewContact();  // Call function to display contacts
                break;
            case 3:
                cout << "Goodbye" << endl;  // Exit message
                break;
            default:
                cout << "Invalid choice" << endl;  // Handle invalid input
        }

    } while (choice != 3);  // Repeat until user chooses to exit

    return 0;  // End of program
}
