#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>
using namespace std;

class Login
{
private:
    string LoginID, Password;

public:
    Login() : LoginID(""), Password("") {}

    void setID(string id)
    {
        LoginID = id;
    }

    void setPW(string pw)
    {
        Password = pw;
    }

    string getID()
    {
        return LoginID;
    }

    string getPW()
    {
        return Password;
    }
};

void registration(Login log)
{
    system("cls");
    string id, pw;

    cout << "\t Enter login id " << endl;
    cin >> id;
    log.setID(id);

start:
    cout << "\t Enter your password " << endl;
    cin >> pw;
    if (pw.length() >= 8)
    {
        log.setPW(pw);
    }
    else
    {
        cout << "\t Enter minimum 8 characters " << endl;
        goto start;
    }

    ofstream outfile("C:\\Users\\HP\\Documents\\Yash Siddhpura\\Technical Skills\\C++\\P7_Registration & Login Form\\Login.txt", ios::app);
    if (!outfile)
    {
        cout << "\t Error: File cannot open! " << endl;
    }
    else
    {
        outfile << "\t" << log.getID() << " : " << log.getPW() << endl << endl;
        cout << "\t USER Registered Successfully " << endl;
    }
    outfile.close();
    Sleep(3000);
}

void login()
{
    system("cls");
    string id, pw;

    cout << "\t Enter login id " << endl;
    cin >> id;

    cout << "\t Enter password " << endl;
    cin >> pw;

    ifstream infile("C:\\Users\\HP\\Documents\\Yash Siddhpura\\Technical Skills\\C++\\P7_Registration & Login Form\\Login.txt");
    if (!infile)
    {
        cout << "\t Error: File cannot open" << endl;
    }
    else
    {
        string line;
        bool found = false;
        while (getline(infile, line))
        {
            stringstream ss(line);
            string userID, userPW;
            char delimiter;

            ss >> userID >> delimiter >> userPW;

            if (id == userID && pw == userPW)
            {
                found = true;
                cout << "\t Please Wait " << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << ".";
                    Sleep(800);
                }
                system("cls");
                cout << "\t Welcome to this Page: " << endl;
                break;
            }
        }
        if (!found)
        {
            cout << "\t Incorrect Login Credentials " << endl;
        }
    }
    infile.close();
    Sleep(5000);
}

int main()
{
    Login log;

    bool exit = false;
    while (!exit)
    {
        system("cls");
        int val;
        cout << "\t Welcome To Registration & Login Form " << endl;
        cout << "\t ************************************ " << endl;
        cout << "\t 1. Register. " << endl;
        cout << "\t 2. Login. " << endl;
        cout << "\t 3. Exit. " << endl;
        cout << "\t Enter Choice: " << endl;
        cin >> val;

        if (val == 1)
        {
            registration(log);
        }
        else if (val == 2)
        {
            login();
        }
        else if (val == 3)
        {
            system("cls");
            exit = true;
            cout << "\t Good luck ...! " << endl;
        }
        Sleep(3000);
    }
    return 0;
}

