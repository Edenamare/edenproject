//University of District of Columbia 
//Engineering and Applied Sciences Department
//Advance Object Oriented Programing/Senior Graduting Class of Spring 2022

//Done By:Eden Amare

//This project is to make a reservation for a local and internation flights
//Eden created class local reservation and merging codes Also helping kidus  on the maain function connect the local reservation


//*****************************************************************************************************************************************************//

//****************************************(Local Reservation Class) Part*********************************************************************//

#include <iostream>
#include<fstream>
#include<string.h>

using namespace std;

int localNameRecord=0; //global variables
int internatinalNameRecord=10;
//class  for local booking

class LocalReservation
{
protected:
    int localtravelerNameRecord;
    // LocalName record members
    char local_airline[10],arrivaltime[10],departuretime[10];
    long int localdeparturedate;
    int option,departure,arrival;
    //public member functions
public:
    void localTravelerRecord()
    {
        // increment variable
        localNameRecord++;
        localtravelerNameRecord=localNameRecord;
    }
    // function declaration and definition for local journey
    int itemForlocal()
    {
        cout << "\nEnter Departure Date(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin >> localdeparturedate;
        cout << "\n 1.Washington DC (press 1) \n 2.Ohio Colombus (press 2) \n 3.Texas(press 3) \n 4.Boston (press 4)" << endl << endl;
        cout << "\tEnter Departure" << endl;
        cin >> departure;
        cout << "\tEnter arrival" << endl;
        cin >> arrival;

        // Create condition
        if((departure==1 && arrival==2) || (departure==2 && arrival==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Washington DC(1)\t08:00Am\t\t10:17PM\t\tRs.250\t\tRefundable\n";
            cout << "\2.Fly Boston (2)\t08:00Am\t\t10:17PM\t\tRs.250\t\tRefundable\n";
            cout << "\3.United Airlines (3)\t19:00\t\t22:05\t\tRs.250\t\tRefundable\n";
        }
            //condition Else if Statement
        else if((departure==1 && arrival==3) || (departure==3 && arrival==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Washington DC(1)\t08:00Am\t\t10:17PM\t\tRs.250\t\tRefundable\n";
            cout << "\2.Fly Boston (2)\t08:00Am\t\t10:17PM\t\tRs.250\t\tRefundable\n";
            cout << "\3.United Airlines (3)\t19:00\t\t22:05\t\tRs.250\t\tRefundable\n";
        }
            //condition
        else if((departure==1 && arrival==4) || (departure==4 && arrival==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Washington DC(1)\t08:00Am\t\t10:17PM\t\tRs.250\t\tRefundable\n";
            cout << "\2.Fly Boston (2)\t08:00Am\t\t10:17PM\t\tRs.250\t\tRefundable\n";
            cout << "\3.United Airlines (3)\t19:00\t\t22:05\t\tRs.250\t\tRefundable\n";
        }
            //condition
        else if((departure==2 && arrival==3) || (departure==3 && arrival==2))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Washington DC(1)\t08:00Am\t\t10:17PM\t\tRs.250\t\tRefundable\n";
            cout << "\2.Fly Boston (2)\t08:00Am\t\t10:17PM\t\tRs.250\t\tRefundable\n";
            cout << "\3.United Airlines (3)\t19:00\t\t22:05\t\tRs.250\t\tRefundable\n";
        }
            //condition

        else if((departure==2 && arrival==4) || (departure==4 && arrival==2))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Washington DC(1)\t08:00Am\t\t10:17PM\t\tRs.250\t\tRefundable\n";
            cout << "\2.Fly Boston (2)\t08:00Am\t\t10:17PM\t\tRs.250\t\tRefundable\n";
            cout << "\3.United Airlines (3)\t19:00\t\t22:05\t\tRs.250\t\tRefundable\n";
        }
            //condition
        else if((departure==3 && arrival==4) || (departure==4 && arrival==3))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Washington DC(1)\t08:00Am\t\t10:17PM\t\tRs.250\t\tRefundable\n";
            cout << "\2.Fly Boston (2)\t 08:00Am\t\t10:17PM\t\tRs.250\t\tRefundable\n";
            cout << "\3.United Airlines (3)\t19:00\t\t22:05\t\tRs.250\t\tRefundable\n";
        }
            //condition
        else if(departure==arrival)
        {
            cout << "\nSource and arrivalination can't be same.\nTry again\n\n\n" << endl;
            return itemForlocal();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return itemForlocal();
        }

    }
    //function declaration and definition for selecting flight
    int  choose_localflight()
    {   cout << "\nEnter your choice" << endl; cin >> option;
        // switch case
        switch(option)
        {
            //condition
            case 1:
                cout << "\nFlight selected:"<<endl;
                //copy to string
                cout << "Washington DC"<<endl; strcpy(local_airline,"Washington DC");
                cout << "Departure Time : 08:00"<<endl;
                //copy to string
                cout << "Arrival Time: 11:05"<<endl;strcpy(departuretime,"8:00"); strcpy(arrivaltime,"11:05");
                break;
                //condition
            case 2:
                cout << "\nFlight selected:"<<endl;
                cout << "Fly Boston"<<endl; strcpy(local_airline,"Fly Boston");
                cout << "Departure Time : 14:00"<<endl;
                cout << "Arrival Time: 17:05"<<endl; strcpy(departuretime,"14:00");strcpy(arrivaltime,"17:05");
                break;
                //condition
            case 3:
                // copy to string
                cout << "\nFlight selected:" << endl;
                cout << "United Airlines" << endl; strcpy(local_airline,"United Airlines");
                cout << "Departure Time : 19:00" << endl;
                // copy to string
                cout << "Arrival Time: 22:05" << endl; strcpy(departuretime,"19:00"); strcpy(arrivaltime,"22:05");
                break;
                //condition
            default:
                cout << "Wrong input entered.\nTry again" << endl;
                return choose_localflight();
        }
    }
};
//*****************************************************************************************************************************************************//

//***(International Reservation Class) Part*********************************************************************//

class IntReservation//class for international booking
{
protected://protected members
    int inttravelerNameRecord;
    char International_airline[10],INTarrivaltime[10],INTdeparturetime[10];
    long int INTdeparturedate;
    int INTdeparture,INTarrival,Option;
    //public member functions
public:
    void intTravelerRecord()
    {
        //increment variable
        internatinalNameRecord++;
        inttravelerNameRecord=internatinalNameRecord;
    }

    // function declaration and definition for journey details
    int intTravelist()
    {
        cout << "Enter Departure Date(DDMMYY)." << "Please enter a valid date." << endl;;
        cin >> INTdeparturedate;
        cout << "\1.Ethiopia, AA(press 1) \2.China(press 2) \3.Washington, DC(press 3) \4.Senegal(press 4) \5.UK(press 5) " << endl << endl;
        cout << "\tEnter Departure" << endl;
        cin >> INTdeparture;
        cout << "\nEnter Arrival Destination" ;
        cin >> INTarrival;
        cout << "\t \t \tFlights Found" << endl << endl;
        //condition
        if((INTdeparture==1 && INTarrival==3) || (INTdeparture==3 && INTarrival==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Addis Ababa(1)\t10:00\t\t14:05\t\tRs.1500\tRefundable\n";
            cout << "\2.Fly ET(2)\t14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "\3. ET Airlines Star Alliance(3)\t18:00\t\t22:05\t\tRs.24000\tRefundable\n";
        }
//condition
        else if((INTdeparture==1 && INTarrival==4) || (INTdeparture==4 && INTarrival==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1..Addis Ababa(1)\t10:00\t\t14:05\t\tRs.25500\tRefundable\n";
            cout << "\2.Fly ET(2)\t14:00\t\t18:05\t\tRs.21300\tRefundable\n";
            cout << "\3.ET Airlines Star Alliance(3)\t18:00\t\t22:05\t\tRs.24650\t\tRefundable\n";
        }
            //condition
        else if((INTdeparture==1 && INTarrival==5) || (INTdeparture==5 || INTarrival==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1..Addis Ababa(1)\t10:00\t\t14:05\t\tRs.52500\tRefundable\n";
            cout << "\2.Fly ET(2)\t14:00\t\t18:05\t\tRs.59420\tRefundable\n";
            cout << "\3.ET Airlines Star Alliance(3)\t18:00\t\t22:05\t\tRs.64892\tRefundable\n";
        }
            //condition
        else if((INTdeparture==2 && INTarrival==3) || (INTdeparture==3 && INTarrival==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Addis Ababa(1)\t10:00\t\t14:05\t\tRs.17800\tRefundable\n";
            cout << "\2.Fly ET(2)\t14:00\t\t18:05\t\tRs.14900\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.18700\tRefundable\n";
        }
            //condition

        else if((INTdeparture==2 && INTarrival==4) || (INTdeparture==4 && INTarrival==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Washington(1)\t10:00\t\t14:05\t\tRs.32000\tRefundable\n";
            cout << "\2.Fly China(2)\t14:00\t\t18:05\t\tRs.38500\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs41259\tRefundable\n";        }

//condition
        else if(INTdeparture==2 && INTarrival==5 || (INTdeparture==5 && INTarrival==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Washington(1)\t10:00\t\t14:05\t\tRs.82500\tRefundable\n";
            cout << "\2.Fly China(2)\t14:00\t\t18:05\t\tRs.87550\tRefundable\n";
            cout << "\3.ET Airlines Star Alliance(3)\t18:00\t\t22:05\t\tRs81478\tRefundable\n";

        }
            //condition
        else if(INTdeparture==INTarrival)
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return intTravelist();
        }
            //condition
        else
        {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return intTravelist();
        }

    }
//function declaration and definition for International selecting flight
    int choose_intflight()
    {
        cout << "\nEnter your option" << endl;
        cin >> Option;
        switch(Option)//switch case
        {
            case 1://condition
                cout << "\nFlight selected:" <<endl;
                //copy to string
                cout << "Washington" << endl; strcpy(International_airline,"Washington");//copy to string
                cout << "Departure Time: 10:00" << endl;
                cout << "Arrival Time: 14:05" << endl;strcpy(INTdeparturetime,"10:00"); strcpy(INTarrivaltime,"14:05");//copy to string
                break;
            case 2://condition
                cout << "\nFlight selected:" << endl;
                //copy to string
                cout << "Fly China" << endl; strcpy(International_airline,"Fly China");//copy to string
                cout << "Departure Time: 14:00" << endl;
                cout << "Arrival Time: 18:05" << endl; strcpy(INTdeparturetime,"14:00");strcpy(INTarrivaltime,"18:05");//copy to string
                break;
            case 3://condition
                cout << "\nFlight selected:" << endl;
                //copy to string
                cout << "Senegal" << endl; strcpy(International_airline,"Fly Senegal");//copy to string
                cout << "Departure Time : 18:00" << endl;
                cout << "Arrival Time: 22:05" << endl; strcpy(INTdeparturetime,"18:00"); strcpy(INTarrivaltime,"22:05");//copy to string
                break;
            default://condition
                cout << "Wrong input entered" << endl;
                return choose_intflight();
        }
    }
};


class traveler: public LocalReservation,public IntReservation//class traveler publicly inherited from class LocalReservation and IntReservation
{
    //protected members
protected:
    char First_name [20],Last_name [20],Email_Address [50];
    int Age,gender;
    long int Contact_Number;
    //public member functions
public:
    //function declaration and definition
    void Traveler_detail(int x)
    //if else for local and international booking selection
    {   if(x==1)
            //function call
        { itemForlocal();
            //function call
            choose_localflight();
        }
        else
            //function
        {  intTravelist();
            //function call
            choose_intflight();
        }
        cout << "\n\n\nEnter traveler details";
        cout << "\nFirst Name:";
        cin >> First_name;
        cout << "Last Name:";
        cin >> Last_name;
    }
    //to check gender input as valid
    int sex()
    {
        cout << "\nGender:\nMale-press:1::\nFemale-press:2::";
        cin >> gender;
        if(gender>2)//condition
        {

            // function call
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;

            return sex();
        }
    }
    //to take more details of the traveler
    void traveler_info()
    {
        cout << "Age:";  cin >> Age;
        cout << "Email_Address  Id:"; cin >> Email_Address;
        cout << "Contact no.(10 digits):";  cin >> Contact_Number ;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << First_name << " " << Last_name << endl;
        //displaying details with Gender
        // Age
        // Email And ID
        // contact number
        cout << "Gender:" << gender << endl;
        cout << "Age:" << Age << endl;
        cout << "Email id:" << Email_Address << endl;
        cout << "Contact No.:" << Contact_Number << endl;
    }

    //function to get TravelerTicket for local booking
    int locTravelerTicket()
    {
        return localtravelerNameRecord;
    }
    //function to get travelerNameRecord for International booking
    int intTravelerTicket()
    {
        return inttravelerNameRecord;
    }
    //function to display details for local booking
    void localShow()
    {
        cout<<"localtravelerNameRecord:" << localtravelerNameRecord << endl;
        cout<<"Flight:" << local_airline << endl;
        cout<<"Name:" << First_name << " " << Last_name << endl;
        cout<<"localdeparturedate:" << localdeparturedate << endl;
        cout<<"Departure Time:" << departuretime << endl;
        cout<<"Arrival Time:" << arrivaltime;
    }
    //function to display details for International booking
    void intShow()
    {
        cout<<"inttravelerNameRecord:" << inttravelerNameRecord << endl;
        cout<<"Flight:" << International_airline << endl;
        cout<<"Name:" << First_name << " " << Last_name << endl;
        cout<<"IntDeparturedate:" << INTdeparturedate << endl;
        cout<<"Departure Time:" << INTdeparturetime<< endl;
        cout<<"Arrival Time:" << INTarrivaltime;
    }
};
//*****************************************************************************************************************************************************//

//****************************************(Finance Class)Part*********************************************************************//

//class for payment you can use International payment and credit card
class finance
{
    //protected members
protected:
    long
    int choice,bank,card,date,cvv,user_id;
    char password[10];
    //public members functions
public:
//function declaration and definition for finance method
    void finance_detail()
    {     cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n\1.Debit Card(1) \n\2.Credit Card(2) \n\3.Net Banking(3)";
        cout << "\n\nEnter your option";
        cin >> choice;
        //switch case
        switch(choice)
        {
            //condition
            case 1:
                cout << "\nEnter card no.:"; cin >> card;
                cout << "\nEnter expiry date:"; cin >> date;
                cout << "\nEnter CVV no.:"; cin >> cvv;
                cout << "\nTransaction Successful\n";
                break;
                //condition
            case 2:
                cout << "\nEnter card no.:"; cin >> card;
                cout << "\nEnter expiry date:"; cin >> date;
                cout << "\nEnter password:"; cin >> password;
                cout << "\nTransaction Successful\n";
                break;
                //condition
            case 3:
                cout << "Banks Available: \1.West Pac Bank(1) \2.Nabil Bank(2) \3.Standard Chartered Bank(3) \4.AMP Bank(4) \5.Others(5)";
                cout << "\nSelect your bank:"; cin >> bank;
                cout << "\nYou have selected:" << bank;
                cout << "\nEnter user Id:"; cin >> user_id;
                cout << "\nEnter password:"; cin >> password;
                cout << "\nTransaction Successful\n";
                break;
                //condition
            default:
                cout << "\nWrong input entered.\nTry again\n\n";
                return finance_detail();
        }
    }

};

//file creation for local booking
void localMakefile(traveler p)//Changed
{  ofstream fin("local.txt",ios::binary|ios::app);
    //writing to file
    fin.write((char*)&p,sizeof(p));
    //closing file
    fin.close();
}

//function to void Local reserved ticket
void localvoidticket(int x)// Changed
{  traveler p;
    int f=0;
    //for reading file
    ifstream fout("local.txt",ios::binary|ios::app);
    //for writing to a new file
    ofstream fin("local1.txt",ios::binary|ios::app);
    //reading file
    fout.read((char *)&p,sizeof(p));
    while(fout)
    {
        //checking travelerNameRecord
        if(p.locTravelerTicket()!=x)
            //writing to file
            fin.write((char *)&p,sizeof(p));
        else
        {
            //display details
            p.localShow();
            cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: Rs 1000\n";
            //incrementing f if travelerNameRecord found
        }
        f++;
        //reading another record from file
        fout.read((char *)&p,sizeof(p));
    }
    //if f==0,travelerNameRecord not found
    if(f==0)
        cout<<"Ticket not found\n";
    //closing file
    fout.close();
    //closing file
    fin.close();
    //deleting old file
    remove("local.txt");
    //renaming new file
    rename("local1.txt","local.txt");

}
//function to cancel International reserved ticket
void intvoidticket(int x)
{  traveler p;
    int f=0;
    ifstream fout("international.txt",ios::binary|ios::app);//opening file
    ofstream fin("international.txt",ios::binary|ios::app);//writing to a new file
    fout.read((char *)&p,sizeof(p));//reading old file
    while(fout)
    {
        if(p.intTravelerTicket()!=x)//checking Traveler ticket
            fin.write((char *)&p,sizeof(p));//writing to new file;
        else
        {
            p.intShow();//display details
            cout<<"Your Above ticket is being deleted:\n"<<"Amount refunded: Rs 1000\n";
            f++;//incrementing f if travelerNameRecord found
        }
        fout.read((char *)&p,sizeof(p));//reading another record from old file
    }
    if(f==0)//if f==0,travelerNameRecord not found
        cout<<"\nTicket not found\n";
    fout.close();//closing file
    fin.close();//closing file
    remove("international.txt");//deleting old file
    rename("international1.txt","international.txt");//renaming new file

}
//*****************************************************************************************************************************************************//
//****************************************(Check ticket and Close Function) Part*****************************************************************//

//function to check ticket
void localcheckticket(int x)
{  traveler p;
    int f=0;
    //opening file
    ifstream fout("local.txt",ios::binary);
    //reading file
    fout.read((char *)&p,sizeof(p));
    while(fout)
    {
        //checking travelerNameRecord
        if(p.locTravelerTicket()==x)
            //display details
        {p.localShow();
            cout<<"\nYour ticket"<<endl;
            //incrementing f if onr found
            f++;
            break;
        }
        //reading another record from the same file
        fout.read((char *)&p,sizeof(p));

    }
    //closing file
    fout.close();
    //if f==0, travelerNameRecord not found
    if(f==0)
        cout<<"Ticket not found"<<endl;

}

//opening a file for international booking
void intMakefile(traveler p)
{  ofstream fin("international.txt",ios::binary|ios::app);
//writing to file
    fin.write((char*)&p,sizeof(p));
    //closing file
    fin.close();
}

//function to check TravelerTicket or ticket
void intcheckticket(int x)
{  traveler p;
    int f=0;
    ifstream fout("international.txt",ios::binary);
    //reading file
    fout.read((char *)&p,sizeof(p));
    while(fout)
    {
        //checking TravelerTicket
        if(p.intTravelerTicket()==x)
            //display details
        {p.intShow();
            cout<<"\nYour ticket"<<endl;
            //incrementing f if TravelerTicket found
            f++;
            break;
        }
        //reading another record from the file
        fout.read((char *)&p,sizeof(p));

    }
    //closing file
    fout.close();
    //if f==0, TravelerTicket not found
    if(f==0)
        cout<<"Ticket not found"<<endl;

}
//*****************************************************************************************************************************************************//
//****************************************(Main Function) Part*********************************************************************//

//main function
int main()
{
    //object for class LocalReservation
    class LocalReservation LR;

    //object for class IntReservation
    class IntReservation IR;

    //object for class traveler
    class traveler TR;
    //object for class finance
    class finance PT;
    //integer variables
    int option,choice,GeneratedTicketNumber;
    //character variables
    char input;
    //do//do while loop
    
    {

        cout << "\t *********************Flight Reservation*****************************"  << endl;
        cout << "\t   *****************Reserve A Flight Ticket********************" << endl;
        cout <<"\t         Eden Amare  ";

        cout << "\n\n 1.Reserve Flight (press 1)   \n 2.Void Fight (press 2)   \n 3.Check Ticket (press 3)   \n 4.Close (press 4)" << endl;
        cout << "\n Please Select your option:";
        cin >> option;
        switch(option)
            //witch case
        {
            case 1:
                //condition
            
                cout << "\n\n A.local Fights(press 1) \n B.International Flights(press 2)" << endl;
                cout << "\nPlease Select your option" << endl;
                cin >> choice;
                switch(choice)
                    //inner switch case
                {
                    case 1:
                        //for booking local ticket
                        TR.localTravelerRecord();
                        TR.Traveler_detail(1);
                        //function calls
                        TR.sex();
                        TR.traveler_info();
                        PT.finance_detail();
                        TR.localShow();
                        localMakefile(TR);
                        //call to create file
                        break;
                    case 2:
                        //for booking international ticket
                        TR.Traveler_detail(2);
                        TR.intTravelerRecord();
                        //function calls
                        TR.sex();
                        TR.traveler_info();
                        PT.finance_detail();
                        TR.intShow();
                        intMakefile(TR);
                        //call to create file
                        break;
                    default://wrong input
                        cout << "Wrong input entered\nTry again\n\n\n" << endl;
                        return main();
                }
                break;
                //for canceling ticket
            case 2:
                
                cout << "\n A.Local Fights(press 1) \n B.International Flights(press 2)" << endl;
                cout << "\nPlease select your option" << endl;
                cin >> choice;
                if(choice==1)
                {
                    cout << "Please enter your passanger Name Record no.:" << endl;
                    cin>>GeneratedTicketNumber;
                    //function call for Local booking cancellation
                    // will cancel the ticket based on the provided ticket number
                    localvoidticket(GeneratedTicketNumber);
                }
                else if(choice==2)
                {  cout << "Please enter your passanger Name Record no.:" << endl;
                    cin>>GeneratedTicketNumber;
                    //function call for International cancellation
                    intvoidticket(GeneratedTicketNumber);
                }
                else
                {
                    cout << "Wrong input entered\nTry again\n\n\n";
                    return main();
                }
                break;

                //for displaying booked ticket details
            case 3:

                
                cout << "\1. Local Fights(press 1) \n\2. International Flights(press 2)" << endl;
                cout << "\n Please enter your option" << endl;
                cin >> choice;
                if(choice==1)
                {cout << "Please enter your ticket#.:" << endl;
                    cin>>GeneratedTicketNumber;
                    //function call to display local ticket details
                    localcheckticket(GeneratedTicketNumber);}

                else if(choice==2)
                {  cout << "Please enter your ticket#.:" << endl;
                    cin>>GeneratedTicketNumber;
                    //function call to display local ticket details
                    intcheckticket(GeneratedTicketNumber);

                }
                else
                {
                    cout << "Wrong input entered.\n Try again\n\n\n";
                    return main();
                }
                break;
            case 4:
                return 0;
                //for wrong input
            default:
                cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
                return main();
        }
        cout<<"\n\n\nDo you went to continue:(Y/N)" << endl;
        cin >> input;

    }
    //condition for do while loop

    while(input=='Y' || input=='Y');
    return 0;
}

//*****************************************************************************************************************************************************//


