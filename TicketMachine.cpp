#include "TicketMachine.h"
#include <iostream>
using namespace std;

TicketMachine::TicketMachine()
{

};

TicketMachine::~TicketMachine()
{
    
};

void TicketMachine::showPrompt()
{
    cout << "something";
}

void TicketMachine::insertMoney(int money)
{
    balance += money;
}

void TicketMachine::showBalance()
{
    cout << balance << "\n";
}