#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>
#include <thread>
#include <chrono>
#include <sstream>
#include <string>
using namespace std;

const char* HOST = "localhost";
const char* USER = "root";
const char* PW = "yash@soldier001";
const char* DB = "db1";

class Flight
{
  private:
    string Fnum, Dep, Des; // flight no., departure, destination
    int Seat;
  public:
    Flight(string fnum, string dep, string des, int seat)
    {
        Fnum = fnum;
        Dep = dep;
        Des = des;
        Seat = seat; 	
    }
	
    string getFnum()
    {
        return Fnum;
    }
	
    string getDep()
    {
        return Dep;		
    }		
	
    string getDes()
    {
        return Des;
    }
	
    int getSeat()
    {
        return Seat;
    }
};

void display(MYSQL* conn)
{
    string dis = "SELECT * FROM Airline";
    if (mysql_query(conn, dis.c_str()))
    {
        cout << "Error: " << mysql_error(conn) << endl;
    }	
    else
    {
        MYSQL_RES* res = mysql_store_result(conn);
        if (res)
        {
            int num = mysql_num_fields(res); // get number of columns
            MYSQL_ROW row;
            while ((row = mysql_fetch_row(res)))
            {
                for (int i = 0; i < num; i++)
                {
                    cout << " " << row[i];
                }
                cout << endl;
            }
        }
    }  
}

int main()
{
    MYSQL* conn = mysql_init(NULL);
	
    if (!mysql_real_connect(conn, HOST, USER, PW, DB, 3306, NULL, 0)) // establish connection
    {
        cout << "Error: " << mysql_error(conn) << endl; // error from database
    }
    else
    {
        cout << "Logged in Database" << endl;
    }
	
    this_thread::sleep_for(chrono::seconds(3)); // sleep for 3 seconds
	
    Flight f1("Flight101", "UAE", "Canada", 50);
    Flight f2("Flight102", "UAE", "USA", 40);
    Flight f3("Flight103", "UAE", "China", 30);

    int intS1 = f1.getSeat();
    int intS2 = f2.getSeat();
    int intS3 = f3.getSeat();

    stringstream ss1, ss2, ss3;
    
    ss1 << intS1;
    string strS1 = ss1.str();
    
    ss2 << intS2;
    string strS2 = ss2.str();
    
    ss3 << intS3;
    string strS3 = ss3.str();
    
    string insert1 = "INSERT INTO Airline(Fnumber, Departure, Destination, Seat) VALUES('" + f1.getFnum() + "', '" + f1.getDep() + "', '" + f1.getDes() + "', '" + strS1 + "')";       
    string insert2 = "INSERT INTO Airline(Fnumber, Departure, Destination, Seat) VALUES('" + f2.getFnum() + "', '" + f2.getDep() + "', '" + f2.getDes() + "', '" + strS2 + "')";
    string insert3 = "INSERT INTO Airline(Fnumber, Departure, Destination, Seat) VALUES('" + f3.getFnum() + "', '" + f3.getDep() + "', '" + f3.getDes() + "', '" + strS3 + "')";

    if (mysql_query(conn, insert1.c_str()) || mysql_query(conn, insert2.c_str()) || mysql_query(conn, insert3.c_str()))
    {
        cout << "Error: " << mysql_error(conn) << endl;
    }
    else
    {
        cout << "Inserted Successfully" << endl;
    }
    this_thread::sleep_for(chrono::seconds(3));
	
    bool exit = false;
    while (!exit)
    {
        system("cls");
		
        cout << endl;
        cout << "Welcome To Airlines Reservation System" << endl;
        cout << "**************************************" << endl;
        cout << "1. Reserve a Seat" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice" << endl;
        int val;
        cin >> val;
		
        if (val == 1)
        {
            system("cls");
            display(conn);
            string flight;
            cout << endl;
            cout << "Enter flight number: ";
            cin >> flight;
            int total;
		    
            string check = "SELECT Seat FROM Airline WHERE Fnumber = '" + flight + "'";
            if (mysql_query(conn, check.c_str()))
            {
                cout << "Error: " << mysql_error(conn) << endl;
            }
            else
            {
                MYSQL_RES* res = mysql_store_result(conn);
                if (res)
                {
                    MYSQL_ROW row = mysql_fetch_row(res);
                    if (row)
                    {
                        total = atoi(row[0]); // total seats
                    }
                }
            }
            if (total > 0)
            {
                total--;
                stringstream sst;
                sst << total;
                string strT = sst.str(); // converted into string
				
                string update = "UPDATE Airline SET Seat = '" + strT + "' WHERE Fnumber = '" + flight + "'";
                if (mysql_query(conn, update.c_str()))
                {
                    cout << "Error: " << mysql_error(conn) << endl;
                }
                else
                {
                    cout << "Seat is Reserved Successfully in: " << flight << endl;
                } 
                if (total == 0)
                {
                    cout << "Sorry! No seat available!" << endl;
                }      
            }
            this_thread::sleep_for(chrono::seconds(8));
			
        }
        else if (val == 2)
        {
            exit = true;
            cout << "Good Luck... For your journey!" << endl;
            this_thread::sleep_for(chrono::seconds(3));		
        }
        else
        {
            cout << "Invalid Input" << endl;
            this_thread::sleep_for(chrono::seconds(3));
        }
    }	
    return 0;
}
