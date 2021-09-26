#ifndef TICKETMACHINE_H_
#define TICKETMACHINE_H_

class TicketMachine{
public:
    TicketMachine(); //构造函数
    virtual ~TicketMachine(); //析构函数
    void showPrompt();
    void insertMoney(int money);
    void showBalance();
    void printTicket();
    void showTotal();
private:
    const int PRICE = 10;
    int balance = 0;
    int total = 0;
};

#endif /* TICKETMACHINE_H_*/