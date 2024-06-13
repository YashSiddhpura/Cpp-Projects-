#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>
#include <algorithm> // For std::remove_if
#include <cctype>    // For std::isspace

using namespace std;

class PhoneBook
{
private:
    string Name, PhNo, Address;

public:
    PhoneBook() : Name(""), PhNo(""), Address("") {} // initializing in one line

    void setName(string name)
    {
        Name = name;
    }

    void setPhNo(string phNo)
    {
        PhNo = phNo;
    }

    void setAddress(string address)
    {
        Address = address;
    }

    string getName()
    {
        return Name;
    }

    string getPhNo()
    {
        return PhNo;
    }

    string getAddress()
    {
        return Address;
    }
};

void addNo(PhoneBook &ph)
{
    system("cls");
    string name, phNo, address;

    cout << "\t Enter name of the user " << endl;
    cin >> name;
    ph.setName(name);

    cout << "\t Enter phone number of the user " << endl;
    cin >> phNo;
    ph.setPhNo(phNo);

    cout << "\t Enter Address of the user " << endl;
    cin >> address;
    ph.setAddress(address);

    ofstream outfile("C:\\Users\\HP\\Documents\\Yash Siddhpura\\Technical Skills\\C++\\P5_PhoneBook Management System\\PhoneBook.txt", ios::app); //for saving data in the file along with keeping the early data same so its appending
    if (!outfile)
    {
        cout << "\t Error: File not open ! " << endl;
    }
    else
    {
        outfile << "\t" << ph.getName() << " : " << ph.getPhNo() << " : " << ph.getAddress() << endl << endl;
    }
    outfile.close();
    cout << "\t Phone Number Added to the phone book " << endl;
    Sleep(3000);
}

void trim(string &str) {
    str.erase(str.begin(), find_if(str.begin(), str.end(), [](unsigned char ch) {
        return !isspace(ch);
    }));
    str.erase(find_if(str.rbegin(), str.rend(), [](unsigned char ch) {
        return !isspace(ch);
    }).base(), str.end());
}

void searchNo()
{
    system("cls");
    string name;
    cout << "\t Enter the name of the user: ";
    cin >> name;

    ifstream infile("C:\\Users\\HP\\Documents\\Yash Siddhpura\\Technical Skills\\C++\\P5_PhoneBook Management System\\PhoneBook.txt");
    if (!infile)
    {
        cout << "\t Error: File can't open ! " << endl;
    }
    else
    {
        string line;
        bool found = false;
        while (getline(infile, line))
        {
            stringstream ss(line);
            string userName, userPhNo, userAddress;

            if (getline(ss, userName, ':') && getline(ss, userPhNo, ':') && getline(ss, userAddress, ':'))
            {
                // Remove leading and trailing whitespace from extracted strings
                trim(userName);
                trim(userPhNo);
                trim(userAddress);

                // Debugging output
              //  cout << "Debug: Comparing '" << name << "' with '" << userName << "'" << endl;

                if (name == userName)
                {
                    found = true;
                    cout << "\t" << userName << "\t" << userPhNo << "\t" << userAddress << endl;
                }
            }
        }

        if (!found)
        {
            cout << "\t User Not Found in the PhoneBook! " << endl;
        }
        infile.close();
        Sleep(5000);
    }
}

int main()
{
    PhoneBook ph;

    bool exit = false;
    while (!exit)
    {
        system("cls");
        int val;

        cout << "\t WELCOME TO PHONE BOOK MANAGEMENT SYSTEM " << endl;
        cout << "\t *************************************** " << endl;
        cout << "\t 1. Add Number " << endl;
        cout << "\t 2. Search Number " << endl;
        cout << "\t 3. Exit " << endl;
        cout << "\t Enter your choice " << endl;
        cin >> val;

        switch (val)
        {
        case 1:
            addNo(ph);
            break;
        case 2:
            searchNo();
            break;
        case 3:
            system("cls");
            Sleep(3000);
            exit = true;
            cout << "\t Good luck ...! " << endl;
            break;
        default:
            cout << "\t Invalid choice! Please try again." << endl;
            Sleep(2000);
            break;
        }
    }

    return 0;
}
