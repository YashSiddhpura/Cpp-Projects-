#include<iostream>
#include<stdlib.h>
using namespace std;

float totalAmt=0.0;
int tquan=0,mquan=0,lquan=0,dquan=0,squan=0,hquan=0;
float mbillAmt=0.0,lbillAmt=0.0,dbillAmt=0.0,sbillAmt=0.0,hbillAmt=0.0;

void mobile()
{
    int item, quantity;
    float billAmt = 0.0;
    cout << "\n\n";
    cout << " Mobile Details " << endl;
    cout << " (1) Apple   => Price : 60000 " << endl;
    cout << " (2) VIVO    => Price : 30000 " << endl;
    cout << " (3) OPPO    => Price : 25000 " << endl;
    cout << " (4) Redmi   => Price : 35000 " << endl;
    cout << " (5) Realme  => Price : 28000 " << endl;
    cout << " (6) Samsung => Price : 45000 " << endl;
    cout << " Enter your choice " << endl;
    cin >> item;
    cout << "\n";
    cout << " Enter Quantity " << endl;
    cin >> quantity;

    switch (item)
    {
        case 1:
            billAmt = quantity * 60000;
            break;
        case 2:
            billAmt = quantity * 30000;
            break;
        case 3:
            billAmt = quantity * 25000;
            break;
        case 4:
            billAmt = quantity * 35000;
            break;
        case 5:
            billAmt = quantity * 28000;
            break;
        case 6:
            billAmt = quantity * 45000;
            break;
        default:
            cout << "\n Sorry the following item does not exist in our platform " << endl;
            return;
    }

    mquan += quantity;
    mbillAmt += billAmt;
    totalAmt += billAmt;
    tquan += quantity;
    cout << "\n\n";
}

void laptop()
{
    int item, quantity;
    float billAmt = 0.0;
    cout << "\n\n";
    cout << " Laptop Details " << endl;
    cout << " (1) Dell    => Price : 70000 " << endl;
    cout << " (2) Hp      => Price : 80000 " << endl;
    cout << " (3) MAC     => Price : 125000 " << endl;
    cout << " (4) Lenovo  => Price : 55000 " << endl;
    cout << " (5) Acer    => Price : 58000 " << endl;
    cout << " (6) ASUS    => Price : 45000 " << endl;
    cout << " Enter your choice " << endl;
    cin >> item;
    cout << "\n";
    cout << " Enter Quantity " << endl;
    cin >> quantity;

    switch (item)
    {
        case 1:
            billAmt = quantity * 70000;
            break;
        case 2:
            billAmt = quantity * 80000;
            break;
        case 3:
            billAmt = quantity * 125000;
            break;
        case 4:
            billAmt = quantity * 55000;
            break;
        case 5:
            billAmt = quantity * 58000;
            break;
        case 6:
            billAmt = quantity * 45000;
            break;
        default:
            cout << "\n Sorry the following item does not exist in our platform " << endl;
            return;
    }

    lquan += quantity;
    lbillAmt += billAmt;
    totalAmt += billAmt;
    tquan += quantity;
    cout << "\n\n";
}

void desktop()
{
    int item, quantity;
    float billAmt = 0.0;
    cout << "\n\n";
    cout << " Desktop Details " << endl;
    cout << " (1) Intel   => Price : 60000 " << endl;
    cout << " (2) Hp      => Price : 50000 " << endl;
    cout << " (3) Lenovo  => Price : 45000 " << endl;
    cout << " (4) ASUS    => Price : 35000 " << endl;
    cout << " Enter your choice " << endl;
    cin >> item;
    cout << "\n";
    cout << " Enter Quantity " << endl;
    cin >> quantity;

    switch (item)
    {
        case 1:
            billAmt = quantity * 60000;
            break;
        case 2:
            billAmt = quantity * 50000;
            break;
        case 3:
            billAmt = quantity * 45000;
            break;
        case 4:
            billAmt = quantity * 35000;
            break;
        default:
            cout << "\n Sorry the following item does not exist in our platform " << endl;
            return;
    }

    dquan += quantity;
    dbillAmt += billAmt;
    totalAmt += billAmt;
    tquan += quantity;
    cout << "\n\n";
}

void speaker()
{
    int item, quantity;
    float billAmt = 0.0;
    cout << "\n\n";
    cout << " Speaker Details " << endl;
    cout << " (1) JBL   => Price : 10000 " << endl;
    cout << " (2) BOAT  => Price : 8000 " << endl;
    cout << " (3) Noise => Price : 15000 " << endl;
    cout << " Enter your choice " << endl;
    cin >> item;
    cout << "\n";
    cout << " Enter Quantity " << endl;
    cin >> quantity;

    switch (item)
    {
        case 1:
            billAmt = quantity * 10000;
            break;
        case 2:
            billAmt = quantity * 8000;
            break;
        case 3:
            billAmt = quantity * 15000;
            break;
        default:
            cout << "\n Sorry the following item does not exist in our platform " << endl;
            return;
    }

    squan += quantity;
    sbillAmt += billAmt;
    totalAmt += billAmt;
    tquan += quantity;
    cout << "\n\n";
}

void headphone()
{
    int item, quantity;
    float billAmt = 0.0;
    cout << "\n\n";
    cout << " Headphone Details " << endl;
    cout << " (1) HYPERX     => Price : 11000 " << endl;
    cout << " (2) BOAT       => Price : 5000 " << endl;
    cout << " (3) Skullcandy => Price : 7500 " << endl;
    cout << " Enter your choice " << endl;
    cin >> item;
    cout << "\n";
    cout << " Enter Quantity " << endl;
    cin >> quantity;

    switch (item)
    {
        case 1:
            billAmt = quantity * 11000;
            break;
        case 2:
            billAmt = quantity * 5000;
            break;
        case 3:
            billAmt = quantity * 7500;
            break;
        default:
            cout << "\n Sorry the following item does not exist in our platform " << endl;
            return;
    }

    hquan += quantity;
    hbillAmt += billAmt;
    totalAmt += billAmt;
    tquan += quantity;
    cout << "\n\n";
}

void details()
{
    cout << "\n\n";
    cout << " Total Bill of the customer is " << totalAmt << " & the total equipments bought is " << tquan << endl;
    cout << " Details .....! " << endl;
    cout << " Bill of mobile section is " << mbillAmt << " & the total equipments bought is " << mquan << endl;
    cout << " Bill of laptop section is " << lbillAmt << " & the total equipments bought is " << lquan << endl;
    cout << " Bill of desktop section is " << dbillAmt << " & the total equipments bought is " << dquan << endl;
    cout << " Bill of speaker section is " << sbillAmt << " & the total equipments bought is " << squan << endl;
    cout << " Bill of headphone section is " << hbillAmt << " & the total equipments bought is " << hquan << endl;
}

void onlineShopping()
{
    char choice;
    cout << " ********** Welcome to online shopping ************ " << endl;
    cout << " Please Follow the instructions " << endl;
    cout << " (1) Please enter m to order mobile phones " << endl;
    cout << " (2) Please enter l to order Laptops " << endl;
    cout << " (3) Please enter d to order desktops " << endl;
    cout << " (4) Please enter s to order Speaker " << endl;
    cout << " (5) Please enter h to order Headphone " << endl;
    cout << " (6) Exit from the system " << endl;
    cout << " Enter you choice " << endl;
    cin >> choice;

    switch (choice)
    {
        case 'm':
            mobile();
            break;
        case 'l':
            laptop();
            break;
        case 'd':
            desktop();
            break;
        case 's':
            speaker();
            break;
        case 'h':
            headphone();
            break;
        case '6':
            details();
            cout << "\n\n Thank you ...VISIT SOON FOR SHOPPING ...! " << endl;
            exit(0);
        default:
            cout << " Sorry Invalid Input " << endl;
    }
}

int main()
{
    char ch, start;
    do
    {
        cout << "\n Press S for beginning the shopping " << endl;
        cin >> start;
        if (start == 's' || start == 'S')
        {
            onlineShopping();
            cout << " Do you want to continue shopping then enter Y or y " << endl;
            cin >> ch;
        }
        else
        {
            cout << " You have entered wrong value, kindly enter s" << endl;
        }
    } while (ch == 'Y' || ch == 'y');

    return 0;
}
