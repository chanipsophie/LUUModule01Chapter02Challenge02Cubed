#include<iostream>
using namespace std;

double Cubed(double number);

int main()
{
    auto number{ 0 };
    cout << "Please enter a number: ";
    cin >> number;
    auto cubedNum{ Cubed(number) };
    cout << "The cube number of " << number << " is " << cubedNum << endl;
}

double Cubed(double number)
{
    auto cube{ number * number * number };
    return cube;
}