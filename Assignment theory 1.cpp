#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    char ch;
            //Do-While Loop Starts
    do{
            //Declaration of Variables
    int grade ,i;
    float HA,TA,MA,CPF,GS,BS;
    string nam,empID,company;
    int day,month, year;

    cout<<"Enter your Employee Grade(1-3): ";cin>>grade;cout<<endl;

            //While loop starts if user enter invalid grade

    while(grade<1||grade>3){
        cin.clear();
        cin.ignore();
        cout<<"Invalid Grade\nAgain enter Grade: ";cin>>grade;
    }
    cin.ignore();
    cout<<"Enter Employee Name: "; getline(cin,nam);cout<<endl;
    cout<<"Enter Employee ID: "; getline(cin,empID);cout<<endl;
    cout<<"Enter Company Name: "; getline(cin,company);cout<<endl;
    cout<<"Enter Date (DD MM YYYY): ";cin>>day>>month>>year;cout<<endl;

            //Printing of line

    for (i=1;i<=35;i++){
        cout<<"-";
    } cout<<endl;

            //Output of Slip content

    cout<<"Pay Slip\n";
    cout<<setw(30)<<left<<setfill(' ')<<"Employee Name: ";cout<< setw(8) << setfill(' ')<< nam << endl;
    cout<<setw(30)<<left<<setfill(' ')<<"Employee ID: ";cout << setw(8) << setfill(' ') << empID <<endl;
    cout<<setw(30)<<left<<setfill(' ')<<"Employee Grade: " ;cout<< setw(8) << setfill(' ') << grade <<endl;
    cout<<setw(30)<<left<<setfill(' ')<<"Company Name: " ;cout<< setw(8) << setfill(' ') << company <<endl;
    cout<<setw(30)<<left<<setfill(' ')<<"Date: ";cout<<setw(2)<<setfill(' ')<<day<<"/"<<month<<"/"<<year<<endl<<endl;


    cout<<fixed<<setprecision(2);

            //Calculation if Grade is 1

    if(grade==1){
        BS=30000;
        HA=BS*10/100;
        TA=BS*2/100;
        MA=BS*5/100;
        CPF=BS*5/100;
        GS=BS+HA+TA+MA-CPF;
        cout<<setw(30)<<left<<setfill(' ')<<"Basic Salary "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<BS<<endl;

        cout<<setw(30)<<left<<setfill(' ')<<"House Allowance "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<HA<<endl;
        cout<<setw(30)<<left<<setfill(' ')<<"Travelling Allowance "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<TA<<endl;
        cout<<setw(30)<<left<<setfill(' ')<<"Medical Allowance "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<MA<<endl;
        cout<<setw(30)<<left<<setfill(' ')<<"CPF Deduction "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<CPF<<endl;
        cout<<setw(30)<<left<<setfill(' ')<<"Gross Salary "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<GS<<endl;
    }
            //Calculation if grade is 2

    else if(grade==2){
      BS=20000;
        HA=BS*10/100;
        TA=BS*1.5/100;
        MA=BS*4/100;
        CPF=BS*5/100;
        GS=BS+HA+TA+MA-CPF;
        cout<<setw(30)<<left<<setfill(' ')<<"Basic Salary "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<BS<<endl;

        cout<<setw(30)<<left<<setfill(' ')<<"House Allowance "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<HA<<endl;
        cout<<setw(30)<<left<<setfill(' ')<<"Travelling Allowance "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<TA<<endl;
        cout<<setw(30)<<left<<setfill(' ')<<"Medical Allowance "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<MA<<endl;
        cout<<setw(30)<<left<<setfill(' ')<<"CPF Deduction "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<CPF<<endl;
        cout<<setw(30)<<left<<setfill(' ')<<"Gross Salary "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<GS<<endl;
    }
            //Calculation if grade is 3

    else if(grade==3){
          BS=10000;
        HA=BS*10/100;
        TA=BS*1/100;
        MA=BS*3/100;
        CPF=BS*5/100;
        GS=BS+HA+TA+MA-CPF;
       cout<<setw(30)<<left<<setfill(' ')<<"Basic Salary "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<BS<<endl;

        cout<<setw(30)<<left<<setfill(' ')<<"House Allowance "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<HA<<endl;
        cout<<setw(30)<<left<<setfill(' ')<<"Travelling Allowance "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<TA<<endl;
        cout<<setw(30)<<left<<setfill(' ')<<"Medical Allowance "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<MA<<endl;
        cout<<setw(30)<<left<<setfill(' ')<<"CPF Deduction "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<CPF<<endl;
        cout<<setw(30)<<left<<setfill(' ')<<"Gross Salary "; cout<<" Rs."<<setw(8)<<right<<setfill(' ')<<GS<<endl;
    }
            //Choice for user either to check another employee or to exit program

            else
                cout<<"Information is incorrect"<<endl;
                cout<<"Press 0 to Exit Program and \nPress any key to Check Pay slip of another employee";cin>>ch;

    }while(ch!='0');
    cout <<"Program exited."<<endl;
    return 0;
}
