// scott-assignment 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
return 0;
}


#include <iostream>
using namespace std;

void Compute_Engine_Cost();
void Compute_Interior_Trim_Cost();
void Compute_Radio_Cost();
void Display_Selling_Price();

float BasePrice; // the base price of vehicle
float EngineCost; // the cost of the different kinds of engines
float TrimCost; // the cost of the different kinds of trims
float RadioCost; // the cost of the different kinds of radios
int main()
{

cout << "Enter the base price of your vehicle: ";
cin >> BasePrice;
Compute_Engine_Cost();
Compute_Interior_Trim_Cost();
Compute_Radio_Cost();
Display_Selling_Price();

return 0;
}



void Compute_Engine_Cost()
{
// asking which kind of engine (submodule)
char EnginePrice;

cout << "S - 6 cylinder engine"
<< "E - 8 cylinder engine"
<< "D - Diesel engine"
<< "What is your selection? ";
cin >> EnginePrice;


//case statement of choices
switch (EngineCost)
{
case 'S': EngineCost= 150 ; break;
case 'E': EngineCost= 475 ; break;
case 'D': EngineCost= 750 ; break;
}
}


void Compute_Interior_Trim_Cost() //choice of kind of trim (submodule)
char TrimPrice

cout << "V - Vynyl interior trim"
<< "C - Cloth interior trim"
<< "L - Leather interior trim"
<< "What is your selection? ";
cin >> TrimPrice;

//Case statement of trim choice
switch (TrimCost)
{
case 'V': TrimCost= 50 ; break;
case 'C': TrimCost= 225 ; break;
case 'L': TrimCost= 800 ; break;
}
}


void Compute_Radio_Cost()
{
char R;
char O;
//choice of kind of radio (submodule)
char RadioCost

cout << "R - AM/FM Radio"
<< "O - CD/DVD"
<< "What is your selection?";
cin >> RadioCost;


//if-else statement of radio choice
if (RadioCost == R) RadioCost = 100;
else RadioCost = 400;
}
void Display_Selling_Price()
{
// selling price which includes shipping, dealer charges, and selling price
float ShippingCharge;
float DealerCharge;
float SellingPrice;



//calclations (submodule)
ShippingCharge = 500;
DealerCharge = 175;
SellingPrice= BasePrice + EngineCost + TrimCost + RadioCost +ShippingCharge + DealerCharge;

cout << "The total selling price for your vehicle is $ " + SellingPrice;

}