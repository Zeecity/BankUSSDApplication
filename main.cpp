#include <iostream>

using namespace std;

/*
    EMETU MONICA UCHA
    BHU/20/04/05/0017
    COMPUTER SCIENCE
*/




string bankName, code, numOperation, network;
int numOperation2, accountNumber2, num2, userPin;
double otherNumber;
string errorMessage1 = "Invalid Input";
double amount;
int acctBalance = 1000000;

int outputOne();

int output();

int stepOne();

int main()
{

    int num, userPin, userPin1;

    string userfName;
    string userlName;

    int accountNumber1; //for user
     //for other


    cout << "Welcome To USSD Banking" << endl;
    cout << stepOne();


    return 0;
}

stepOne()
{
    cout << endl;
    cout << "FCMB         *329#" << endl;
    cout << "Access Bank  *901#" << endl;
    cout << "Zenith Bank  *966#" << endl;
    cout << "GT Bank      *737#" << endl;
    cout << "First Bank   *894#" << endl;
    cout << endl;
    cout << "Please enter the code for your bank: " << endl;
    cin >> code;

        if( code == "*329#" || code == "*901#" || code == "*966#" || code == "*737#"  || code == "*894#")
        {
            if(code == "*329#")
            {
                bankName = "FCMB";
            }
            else if(code == "*901#")
            {
                bankName = "Access Bank";
            }
            else if(code == "*966#")
            {
                bankName = "Zenith Bank";
            }
            else if(code == "*737#")
            {
                bankName = "GT Bank";
            }
            else if(code == "*894#")
            {
                bankName = "First Bank";
            }
            cout << output();
        }
        else
        {
            cout << errorMessage1 << endl;
            cout << stepOne();
        }
    return 0;
}

output()
{

    cout << "Welcome To " << bankName << endl;

    cout << "1.  Buy Data" << endl;
    cout << "2.  Buy Airtime" << endl;
    cout << "3.  Transfer " << endl;
    cout << "4.  pay bills " << endl;
    cout << "5.  check Balance " << endl;

    cout << "Please Select An Operation:";
    cin >> num2;

    if(num2 == 1 || num2 == 2 || num2 == 3 || num2 == 4 || num2 == 5)
    {
        cout << outputOne();
    }
    else
    {
        cout << errorMessage1;
        cout << output();
    }
    return 0;
}

outputOne() //buydata...etc
{
    if (num2 == 1)
        {
            numOperation = "BuyData";
            cout << "1. For Self" << endl ;
            cout << "2. For Someone else" << endl;

            cout << " Select an option: " << endl;
            cin >> numOperation2 ;
            if(numOperation2 == 1 || numOperation2 == 2)
            {
                if(numOperation2 == 1)
                {
                    cout << "Enter amount: ";
                    cin >> amount;

                    cout << "Enter your 4 digit pin: ";
                    cin >> userPin;

                    cout << " Processing..." << endl;
                    cout << "Transaction complete" << endl;
                    cout << "acct:" << acctBalance - amount << endl;

                }
                if(numOperation2 == 2)
                {
                    cout << "Enter amount: ";
                    cin >> amount;

                    cout << "Enter mobile number: ";
                    cin >> otherNumber;

                    cout << "Network: ";
                    cin >> network;

                    cout << "Enter your 4 digit pin: ";
                    cin >> userPin;

                    cout << " Processing...";
                    cout << "Transaction complete" << endl;
                    cout << "Acct:" << acctBalance - amount << endl;

                }
            }
            else
            {
                cout << errorMessage1 << endl;
                cout << "Task ended" << endl;
            }
        }
    if(num2 == 2)
    {
        numOperation = "Buy Airtime";
        cout << "1. For Self" << endl ;
            cout << "2. For Someone else" << endl;

            cout << " Select an option: " << endl;
            cin >> numOperation2 ;
            if(numOperation2 == 1 || numOperation2 == 2)
            {
                if(numOperation2 == 1)
                {
                    cout << "Enter amount: ";
                    cin >> amount;

                    cout << "Enter your 4 digit pin: ";
                    cin >> userPin;

                    cout << " Processing..." << endl;
                    cout << "Transaction complete" << endl;
                    cout << "Acct:" << acctBalance - amount << endl;

                }
                if(numOperation2 == 2)
                {
                    cout << "Enter amount: ";
                    cin >> amount;

                    cout << "Enter mobile number: ";
                    cin >> otherNumber;

                    cout << "Network: ";
                    cin >> network;

                    cout << "Enter your 4 digit pin: ";
                    cin >> userPin;

                    cout << " Processing..."<< endl;
                    cout << "Transaction complete" << endl;
                    cout << "Acct:" << acctBalance - amount << endl;

                }
                else
                {
                    cout << errorMessage1 << endl;
                    cout << "Task ended" << endl;
                }
            }
    }
    if(num2 == 3)
    {
        numOperation = "Transfer";
        cout << "Enter amount: ";
        cin >> amount;

        cout << "Enter account Number";
        cin >> accountNumber2;

        cout << "Enter your 4 digit pin: ";
        cin >> userPin;

        cout << " Processing..." << endl;
        cout << "Transaction complete" << endl;
        cout << "Acct:" << acctBalance - amount << endl;
    }
    if(num2 == 4)
    {
        numOperation = "Pay Bills";
        cout << " Netflix subs" << endl;
        cout << "1. Mobile Subscription for #1,200"<< endl;
        cout << "2. Basic Subscription for #2900" << endl;
        cout << "3. Standard Subscription for #3600" << endl;
        cout << "4. Premium Subscription for #4,400" << endl;
        cin >> numOperation2;

        if(numOperation2 == 1 || numOperation2 == 2 || numOperation2 == 3 || numOperation2 == 4 || numOperation2 == 5)
        {
            cout << "You have already subscribed." << endl;
            cout << "Acct:" << acctBalance - amount << endl;

        }
        else
        {
            cout << errorMessage1 << endl;
            cout << "Task ended" << endl;
        }
    }
    if(num2 == 5)
    {
        numOperation = "Check Balance";

        cout << "Acct:" << acctBalance << endl;
    }
    return 0;
}
