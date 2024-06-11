#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int menu()
{
    int choice;
    cout << "********** Welcome to Currency Converter App **********" << endl;
    cout << "********** Currencies you can Convert  **********" << endl;
    cout << " 1. US Dollar( Dollar ) " << endl;
    cout << " 2. Indian Rupees ( Rupees ) " << endl;
    cout << " 3. Pound Sterling ( Sterling ) " << endl;
    cout << " 4. Euro ( Euro ) " << endl;
    cout << " 5. Japanese Yen ( Yen ) " << endl;
    cout << " 6. Kuwaiti Dinar ( Dinar ) " << endl;
    cout << " 7. Swiss Franc ( Franc ) " << endl;
    cout << " 8. Exit " << endl;
    cout << "Enter your choice by pressing the corresponding digit " << endl;
    cin >> choice;
    return choice;
}

void Dollar()
{
    float dol;
    string cname;
    cout << " Enter the amount in dollars " << endl;
    cin >> dol;
    cout << " Enter the currency name in which you want to convert ";
    cin.ignore();  // To ignore the newline character left in the input buffer
    getline(cin, cname);
    if (cname == "Dollar")
    {
        cout << " Your " << dol << " Dollars is equal to " << dol << " US Dollars " << endl;
    }
    else if (cname == "Rupees")
    {
        float crupees = dol * 83.52;
        cout << " Your " << dol << " Dollars is equal to " << crupees << " Indian Rupees " << endl;
    }
    else if (cname == "Sterling")
    {
        float cster = dol * 0.79;
        cout << " Your " << dol << " Dollars is equal to " << cster << " Pound Sterlings " << endl;
    }
    else if (cname == "Euro")
    {
        float ceuro = dol * 0.93;
        cout << " Your " << dol << " Dollars is equal to " << ceuro << " Euros " << endl;
    }
    else if (cname == "Yen")
    {
        float cyen = dol * 157.25;
        cout << " Your " << dol << " Dollars is equal to " << cyen << " Japanese yens " << endl;
    }
    else if (cname == "Dinar")
    {
        float cdin = dol * 0.31;
        cout << " Your " << dol << " Dollars is equal to " << cdin << " Kuwaiti dinar " << endl;
    }
    else if (cname == "Franc")
    {
        float cfranc = dol * 0.9;
        cout << " Your " << dol << " Dollars is equal to " << cfranc << " Swiss Francs " << endl;
    }
    else
    {
        cout << "Enter the Valid Currency " << endl;
    }
}

void Rupees()
{
    float rup;
    string cname;
    cout << " Enter the amount in rupees " << endl;
    cin >> rup;
    cout << " Enter the currency name in which you want to convert ";
    cin.ignore();  // To ignore the newline character left in the input buffer
    getline(cin, cname);
    if (cname == "Rupees")
    {
        cout << " Your " << rup << " Rupees is equal to " << rup << " Indian Rupees " << endl;
    }
    else if (cname == "Dollar")
    {
        float cdol = rup * 0.012;
        cout << " Your " << rup << " Rupees is equal to " << cdol << " US Dollars " << endl;
    }
    else if (cname == "Sterling")
    {
        float cster = rup * 0.0094;
        cout << " Your " << rup << " Rupees is equal to " << cster << " Pound Sterlings " << endl;
    }
    else if (cname == "Euro")
    {
        float ceuro = rup * 0.011;
        cout << " Your " << rup << " Rupees is equal to " << ceuro << " Euros " << endl;
    }
    else if (cname == "Yen")
    {
        float cyen = rup * 1.88;
        cout << " Your " << rup << " Rupees is equal to " << cyen << " Japanese yens " << endl;
    }
    else if (cname == "Dinar")
    {
        float cdin = rup * 0.0037;
        cout << " Your " << rup << " Rupees is equal to " << cdin << " Kuwaiti dinar " << endl;
    }
    else if (cname == "Franc")
    {
        float cfranc = rup * 0.011;
        cout << " Your " << rup << " Rupees is equal to " << cfranc << " Swiss Francs " << endl;
    }
    else
    {
        cout << "Enter the Valid Currency " << endl;
    }
}

void Sterling()
{
    float ster;
    string cname;
    cout << " Enter the amount in Pound Sterlings " << endl;
    cin >> ster;
    cout << " Enter the currency name in which you want to convert ";
    cin.ignore();  // To ignore the newline character left in the input buffer
    getline(cin, cname);
    if (cname == "Sterling")
    {
        cout << " Your " << ster << " Sterling is equal to " << ster << " Pound Sterlings " << endl;
    }
    else if (cname == "Dollar")
    {
        float cdol = ster * 1.27;
        cout << " Your " << ster << " Sterling is equal to " << cdol << " US Dollars " << endl;
    }
    else if (cname == "Rupees")
    {
        float crup = ster * 106.33;
        cout << " Your " << ster << " Sterling is equal to " << crup << " Indian Rupees " << endl;
    }
    else if (cname == "Euro")
    {
        float ceuro = ster * 1.18;
        cout << " Your " << ster << " Sterling is equal to " << ceuro << " Euros " << endl;
    }
    else if (cname == "Yen")
    {
        float cyen = ster * 200.26;
        cout << " Your " << ster << " Sterling is equal to " << cyen << " Japanese yens " << endl;
    }
    else if (cname == "Dinar")
    {
        float cdin = ster * 0.39;
        cout << " Your " << ster << " Sterling is equal to " << cdin << " Kuwaiti dinar " << endl;
    }
    else if (cname == "Franc")
    {
        float cfranc = ster * 1.14;
        cout << " Your " << ster << " Sterling is equal to " << cfranc << " Swiss Francs " << endl;
    }
    else
    {
        cout << "Enter the Valid Currency " << endl;
    }
}

void Euro()
{
    float eur;
    string cname;
    cout << " Enter the amount in Euros " << endl;
    cin >> eur;
    cout << " Enter the currency name in which you want to convert ";
    cin.ignore();  // To ignore the newline character left in the input buffer
    getline(cin, cname);
    if (cname == "Euro")
    {
        cout << " Your " << eur << " Euros is equal to " << eur << " Euros " << endl;
    }
    else if (cname == "Dollar")
    {
        float cdol = eur * 1.08;
        cout << " Your " << eur << " Euros is equal to " << cdol << " US Dollars " << endl;
    }
    else if (cname == "Rupees")
    {
        float crup = eur * 89.99;
        cout << " Your " << eur << " Euros is equal to " << crup << " Indian Rupees " << endl;
    }
    else if (cname == "Sterling")
    {
        float cster = eur * 0.85;
        cout << " Your " << eur << " Euros is equal to " << cster << " Pound Sterling " << endl;
    }
    else if (cname == "Yen")
    {
        float cyen = eur * 169.28;
        cout << " Your " << eur << " Euros is equal to " << cyen << " Japanese yens " << endl;
    }
    else if (cname == "Dinar")
    {
        float cdin = eur * 0.33;
        cout << " Your " << eur << " Euros is equal to " << cdin << " Kuwaiti dinar " << endl;
    }
    else if (cname == "Franc")
    {
        float cfranc = eur * 0.97;
        cout << " Your " << eur << " Euros is equal to " << cfranc << " Swiss Francs " << endl;
    }
    else
    {
        cout << "Enter the Valid Currency " << endl;
    }
}

void Yen()
{
    float yen;
    string cname;
    cout << " Enter the amount in Yens " << endl;
    cin >> yen;
    cout << " Enter the currency name in which you want to convert ";
    cin.ignore();  // To ignore the newline character left in the input buffer
    getline(cin, cname);
    if (cname == "Yen")
    {
        cout << " Your " << yen << " Yens is equal to " << yen << " Japanese Yens " << endl;
    }
    else if (cname == "Dollar")
    {
        float cdol = yen * 0.0064;
        cout << " Your " << yen << " Yens is equal to " << cdol << " US Dollars " << endl;
    }
    else if (cname == "Rupees")
    {
        float crup = yen * 0.53;
        cout << " Your " << yen << " Yens is equal to " << crup << " Indian Rupees " << endl;
    }
    else if (cname == "Sterling")
    {
        float cster = yen * 0.0050;
        cout << " Your " << yen << " Yens is equal to " << cster << " Pound Sterling " << endl;
    }
    else if (cname == "Euro")
    {
        float ceur = yen * 0.0059;
        cout << " Your " << yen << " Yens is equal to " << ceur << " Euros " << endl;
    }
    else if (cname == "Dinar")
    {
        float cdin = yen * 0.0020;
        cout << " Your " << yen << " Yens is equal to " << cdin << " Kuwaiti dinar " << endl;
    }
    else if (cname == "Franc")
    {
        float cfranc = yen * 0.0057;
        cout << " Your " << yen << " Yens is equal to " << cfranc << " Swiss Francs " << endl;
    }
    else
    {
        cout << "Enter the Valid Currency " << endl;
    }
}

void Dinar()
{
    float din;
    string cname;
    cout << " Enter the amount in Dinar " << endl;
    cin >> din;
    cout << " Enter the currency name in which you want to convert ";
    cin.ignore();  // To ignore the newline character left in the input buffer
    getline(cin, cname);
    if (cname == "Dinar")
    {
        cout << " Your " << din << " Dinars is equal to " << din << " Kuwaiti Dinar " << endl;
    }
    else if (cname == "Dollar")
    {
        float cdol = din * 3.26;
        cout << " Your " << din << " Dinars is equal to " << cdol << " US Dollars " << endl;
    }
    else if (cname == "Rupees")
    {
        float crup = din * 272.25;
        cout << " Your " << din << " Dinar is equal to " << crup << " Indian Rupees " << endl;
    }
    else if (cname == "Sterling")
    {
        float cster = din * 2.56;
        cout << " Your " << din << " Dinar is equal to " << cster << " Pound Sterling " << endl;
    }
    else if (cname == "Euro")
    {
        float ceur = din * 3.03;
        cout << " Your " << din << " Dinar is equal to " << ceur << " Euros " << endl;
    }
    else if (cname == "Yen")
    {
        float cyen = din * 512.77;
        cout << " Your " << din << " Dinar is equal to " << cyen << " Japanese Yens " << endl;
    }
    else if (cname == "Franc")
    {
        float cfranc = din * 2.92;
        cout << " Your " << din << " Dinar is equal to " << cfranc << " Swiss Francs " << endl;
    }
    else
    {
        cout << "Enter the Valid Currency " << endl;
    }
}

void Franc()
{
    float fra;
    string cname;
    cout << " Enter the amount in Swiss Francs " << endl;
    cin >> fra;
    cout << " Enter the currency name in which you want to convert ";
    cin.ignore();  // To ignore the newline character left in the input buffer
    getline(cin, cname);
    if (cname == "Franc")
    {
        cout << " Your " << fra << " Francs is equal to " << fra << " Swiss Francs " << endl;
    }
    else if (cname == "Dollar")
    {
        float cdol = fra * 1.11;
        cout << " Your " << fra << " Francs is equal to " << cdol << " US Dollars " << endl;
    }
    else if (cname == "Rupees")
    {
        float crup = fra * 92.56;
        cout << " Your " << fra << " Francs is equal to " << crup << " Indian Rupees " << endl;
    }
    else if (cname == "Sterling")
    {
        float cster = fra * 0.88;
        cout << " Your " << fra << " Francs is equal to " << cster << " Pound Sterling " << endl;
    }
    else if (cname == "Euro")
    {
        float ceur = fra * 1.03;
        cout << " Your " << fra << " Francs is equal to " << ceur << " Euros " << endl;
    }
    else if (cname == "Yen")
    {
        float cyen = fra * 175.51;
        cout << " Your " << fra << " Francs is equal to " << cyen << " Japanese Yens " << endl;
    }
    else if (cname == "Dinar")
    {
        float cdin = fra * 0.34;
        cout << " Your " << fra << " Francs is equal to " << cdin << " Kuwaiti Dinars " << endl;
    }
    else
    {
        cout << "Enter the Valid Currency " << endl;
    }
}

int main()
{
    while (true)
    {
        switch (menu())
        {
        case 1:
            Dollar();
            break;
        case 2:
            Rupees();
            break;
        case 3:
            Sterling();
            break;
        case 4:
            Euro();
            break;
        case 5:
            Yen();
            break;
        case 6:
            Dinar();
            break;
        case 7:
            Franc();
            break;
        case 8:
            cout << " Task Completed " << endl;
            cout << " Thank you for choosing us " << endl;
            exit(0);
        default:
            cout << " Sorry Invalid Input ";
        }
        cout << endl << endl << endl;
    }
    return 0;
}
