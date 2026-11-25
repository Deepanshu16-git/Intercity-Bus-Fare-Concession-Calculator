#include <iostream>


using namespace std;

class passenger
{
public:
    string name;
    int age;
    float distance;

    int basefare;

    passenger()
    {
        name = "";
        age = 0;
        distance = 0;
        basefare = 0;
    };
    passenger(string n, int a, float d)
    {

        name = n;
        age = a;
        distance = d;
        basefare = 2 * distance;
    }

    virtual float fare()
    {
        return basefare;
    }

    void displaydetails()
    {
        cout << "passenger information are" << endl;
        cout << name << endl;
        cout << age << endl;
        cout << distance << endl;
        cout << fare() << endl;
    }

    float getBaseFare()
    {
        return basefare;
    }
};

class student : public passenger
{
    string studentId;
    float finalfare;

    student()
    {

        studentId = "";
        finalfare = 0;
    }

    student(string n, int a, float d, string sI)
    {
        finalfare = 0;
        studentId = sI;
    }

    float fare() override
    {
        finalfare = basefare - (basefare * 25 / 100);
        return finalfare;
    }

    void displayDetails()
    {
        cout << "student details are" << endl;
        cout << name;
        cout << age;
        cout << distance;
        cout << studentId;
        cout << "final fare is" << fare() << endl;
    }
};

class seniorCitizen : public passenger
{

public:
    seniorCitizen()
    {
        found = false;
        finalfare = 0;
    };

    bool found = false;
    int finalfare;

    seniorCitizen(string n, int a, float d)
    {
        name = n;
        age = a;
        distance = d;

        if (age >= 60)
        {
            found = true;
        }
    }
    float fare() override
    {
        if (found == true)
        {
            finalfare = basefare - (basefare * 30 / 100);
        }
        else
        {
            finalfare = basefare;
        }
        return finalfare;
    }

    void displayTickets()
    {
        cout << "seniorcitizen tickets and details are" << endl;
        cout << name << endl;
        cout << age << endl;
        cout << distance << endl;
        cout << fare() << endl;
    }
};

class divyang : public passenger
{
public:
    string disabilitytype;
    int finalfare = 0;

    divyang()
    {
        disabilitytype = "";
        finalfare = 0;
    };

    divyang(string n, int a, float d, string dI)
    {
        disabilitytype = dI;
        finalfare=0;
    }

    float fare() override
    {
        finalfare = basefare - (basefare * 40 / 100);
        return finalfare;
    }

    void displayTickets()
    {
        cout << "divyang details" << endl;
        cout << name << endl;
        cout << age << endl;
        cout << distance << endl;
        cout << disabilitytype << endl;
        cout << fare() << endl;
    }
};

class premiumSenior : public seniorCitizen
{
public:
    string membershipId;
    int finalfare;
    premiumSenior();

    premiumSenior(string n, int a, float d, string mI)
    {
        finalfare=0;
        membershipId = mI;
    };

    float fare() override
    {
        finalfare = basefare - (basefare * 40 / 100);
        return finalfare;
    }

    void displayTicket()
    {
        cout << "premium senior details" << endl;
        cout << name << endl;
        cout << age << endl;
        cout << distance << endl;
        cout << membershipId << endl;
        cout << fare() << endl;
    }
};

class bus
{
    int busNumber;
    string routeName;
    int totalPassengers;
    int totalRevenue;
    int passengers[];

    bus()
    {
        cout << "bus details" << endl;
        cout << busNumber << endl;
        cout << totalPassengers << endl;
        cout << totalRevenue << endl;
    }

    void addPassenger()
    {
    }
};
int main()
{

    return 0;
}