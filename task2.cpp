/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool registerUser();
bool loginUser();
string encryptPassword(const string& password);

int main() 
{
    int choice;
    cout << "\n\t\t\t\t\t======================================================" << endl;
    cout << "\t\t\t\t\t|    Welcome to the Login and Registration System    |" << endl;
    cout << "\t\t\t\t\t======================================================" << endl << endl;
    
    while (true)
    {
        cout << "Which option would you perform ?" << endl;
        cout << "-------------------------------" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "-------------------------------" << endl;
        cout << "Select option: ";
        cin >> choice;
        cout << "-------------------------------" << endl;

        if (choice == 3)
        {

            cout << "Exiting..." << endl;
            cout << "-------------------------------" << endl;
            break;

        }
        switch (choice)
        {
        case 1:

            if (registerUser())
            {
                cout << "-------------------------------" << endl;
                cout << "Registration successful!" << endl;
                cout << "-------------------------------" << endl;
            }
            else
            {
                cout << "-------------------------------" << endl;
                cout << "Registration failed. User may already exist." << endl;
                cout << "-------------------------------" << endl;
            }
            break;

        case 2:

            if (loginUser())
            {
                cout << "-------------------------------" << endl;
                cout << "Login successful!" << endl;
                cout << "-------------------------------" << endl;
            }
            else
            {
                cout << "-------------------------------" << endl;
                cout << "Login failed. Invalid credentials." << endl;
                cout << "-------------------------------" << endl;
            }
            break;

        default:
            cout << "-------------------------------" << endl;
            cout << "Invalid choice." << endl;
            cout << "-------------------------------" << endl;
            break;
        }
    }
    return 0;
}

bool isValidPassword(const string& password)
{
    bool hasUpper = false, hasLower = false, hasSpecial = false;
    for (char c : password)
    {
        if (isupper(c))
        {
            hasUpper = true;
        }
        if (islower(c))
        {
            hasLower = true;
        }
        if (ispunct(c))
        {
            hasSpecial = true;
        }
    }
    return hasUpper && hasLower && hasSpecial;

}



bool registerUser() 
{
    cin.ignore();
    string username, password;
    cout << "Enter a username: ";
    getline(cin,username);
    cout << "Enter a password: ";
    getline(cin, password);
    cin.ignore();


    while (!isValidPassword(password))
    {
        cout << "Password must contain at least one uppercase letter, one lowercase letter, and one special character." << endl;
        cout << "Re-enter password: " << endl;
        cout << "-------------------------------" << endl;
        getline(cin, password);
    }

    ifstream checkFile("C:\\Users\\PC\\Desktop\\Internship\\ConsoleApplication1\\ConsoleApplication1\\" + username + ".txt");
    if (checkFile.is_open()) 
    {
        checkFile.close();
        return false;
    }

    ofstream file("C:\\Users\\PC\\Desktop\\Internship\\ConsoleApplication1\\ConsoleApplication1\\" + username + ".txt");
    if (file.is_open()) 
    {
        file << username << endl;
        file << password << endl;
     
        file.close();
        return true;
    }
    else 
    {
        return false; 
    }
}

bool loginUser() 
{
    cin.ignore();
    string username, password, storedUsername, storedPassword;
    cout << "Enter your username: ";
    getline(cin,username);
    cout << "Enter your password: ";
    getline(cin, password);
    cin.ignore();

    ifstream file("C:\\Users\\PC\\Desktop\\Internship\\ConsoleApplication1\\ConsoleApplication1\\" + username + ".txt");
    
    if (file.is_open()) 
    {
        getline(file, storedUsername);
        getline(file, storedPassword);
        file.close();

        if (username == storedUsername && password == storedPassword) 
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    else 
    {
        return false;
    }
}


*/