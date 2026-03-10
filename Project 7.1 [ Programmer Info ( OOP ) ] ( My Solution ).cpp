#include <iostream>
using namespace std;

class clsPerson
{
    short _ID = 0;
    string _FirstName = "";
    string _LastName = "";
    string _Email = "";
    string _Phone = "";

public:

    clsPerson(short ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    short GetID()
    {
        return _ID;
    }

    string GetFirstName()
    {
        return _FirstName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }

    string GetEmail()
    {
        return _Email;
    }

    string GetPhone()
    {
        return _Phone;
    }

    void Print()
    {
        cout << "\nInfo :";
        cout << "\n______________________________";
        cout << "\nID         : " << _ID;
        cout << "\nFirst Name : " << _FirstName;
        cout << "\nLast Name  : " << _LastName;
        cout << "\nFull Name  : " << GetFullName();
        cout << "\nEmail      : " << _Email;
        cout << "\nPhone      : " << _Phone;
        cout << "\n______________________________\n";
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message sent successfully to email : " << _Email;
        cout << "\nSubject : " << Subject;
        cout << "\nBody : " << Body << endl;
    }

    void SendSMS(string TextMessage)
    {
        cout << "\nThe following SMS message sent successfully to phone : " << _Phone;
        cout << "\n" << TextMessage << endl;
    }
};

class clsEmployee : public clsPerson
{
    string _Title = "";
    string _Department = "";
    float _Salary = 0;

public:

    clsEmployee(short ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
        : clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }

    void SetTitle(string Title)
    {
        _Title = Title;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
    }

    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }

    string GetTitle()
    {
        return _Title;
    }

    string GetDepartment()
    {
        return _Department;
    }

    float GetSalary()
    {
        return _Salary;
    }

    void Print()
    {
        cout << "\nInfo :";
        cout << "\n_________________________________";
        cout << "\nID         : " << GetID();
        cout << "\nFirst Name : " << GetFirstName();
        cout << "\nLast Name  : " << GetLastName();
        cout << "\nFull Name  : " << GetFullName();
        cout << "\nEmail      : " << GetEmail();
        cout << "\nPhone      : " << GetPhone();
        cout << "\nTitle      : " << _Title;
        cout << "\nDepartment : " << _Department;
        cout << "\nSalary     : " << _Salary;
        cout << "\n_________________________________\n";
    }
};

class clsProgrammer : public clsEmployee
{
    string _MainProgrammingLanguage = "";

public:

    clsProgrammer(short ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary
                    , string MainProgrammingLanguage)
        : clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    void SetMainProgrammingLanguage(string MainProgrammingLanguage)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    string GetMainProgrammingLanguage()
    {
        return _MainProgrammingLanguage;
    } 

    void Print()
    {
        cout << "\nInfo :";
        cout << "\n_________________________________";
        cout << "\nID         : " << GetID();
        cout << "\nFirst Name : " << GetFirstName();
        cout << "\nLast Name  : " << GetLastName();
        cout << "\nFull Name  : " << GetFullName();
        cout << "\nEmail      : " << GetEmail();
        cout << "\nPhone      : " << GetPhone();
        cout << "\nTitle      : " << GetTitle();
        cout << "\nDepartment : " << GetDepartment();
        cout << "\nSalary     : " << GetSalary();
        cout << "\nMain Programming Language : " << _MainProgrammingLanguage;
        cout << "\n_________________________________\n";
    }
};

int main()
{
    clsProgrammer Programmer1(10, "Ahmed", "Yaser", "a@gmail.com", "9384303", "Software Developer", "ProgrammingAdvices", 5000, "C++");

    Programmer1.Print();

    Programmer1.SendEmail("Hi", "How are you?");

    Programmer1.SendSMS("How are you?");

    system("pause>0");
    return 0;
}

