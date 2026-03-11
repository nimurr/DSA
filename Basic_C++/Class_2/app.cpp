#include <iostream>
using namespace std;

//? This is starting point of CP

int main()
{
    // cout << "Hellow Nerob 2.0" << " Hellow Nerob 2.1" << endl;

    //===================== Data types with variables ======================

    // int age = 20;
    // cout << "My age is " << age << endl;

    // char great = 'A';
    // cout << "My great is " << great << endl;

    // char name[6] = "Nerob";
    // cout << "My name is " << name << endl;

    // bool isGood = true;
    // cout << "isGood is " << isGood << endl;

    // float gpa = 3.501f;
    // cout << "My gpa is " << gpa << endl;

    // double gpa2 = 3.5025;
    // cout << "My gpa is " << gpa2 << endl;

    //===================== Type casting ======================

    // float price = 1000.50;
    // int newPrice = (int)price;
    // cout << newPrice << endl;

    // int age = 20;
    // cout << "My age is " << age << endl;
    // cout << "My age is " << (float) age << endl;
    // cout << "My age is " << (double) age << endl;
    // cout << "My age is " << (char) age << endl;

    //===================== Input ======================
    // int age, age2;
    // cout << "Enter your age: ";
    // cin >> age;

    // cout << "Enter your new age: ";
    // cin >> age2;

    // cout << "Average age is " << (age + age2) / 2 << endl;

    //===================== Operators ======================

    // int a = 10;
    // int b = 20;

    // cout << "a + b = " << a + b << endl;
    // cout << "a * b = " << a * b << endl;

    //===================== Conditionals ======================

    // int age1, age2;

    // cout << "Enter your age 1: ";
    // cin >> age1;
    // cout << "Enter your age 2: ";
    // cin >> age2;

    // if (age1 > age2)
    // {
    //     cout << "Age 1 is older than age 2" << endl;
    // }
    // else if (age1 == age2)
    // {
    //     cout << "Age 1 is equal to age 2" << endl;
    // }
    // else
    // {
    //     cout << "Age 1 is younger than age 2" << endl;
    // }

    int mark1 = 70;
    int mark2 = 90;

    if (mark1 > mark2)
    {
        cout << "Mark 1 is higher than mark 2" << endl;
    }
    else if (mark1 == mark2)
    {
        cout << "Mark 1 is equal to mark 2" << endl;
    }
    else
    {
        cout << "Mark 1 is lower than mark 2" << endl;
    }

    return 0;
}