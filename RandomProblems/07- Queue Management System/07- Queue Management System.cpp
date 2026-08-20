#include <iostream>
#include "E:/DS/clsQueueLine.h"

using namespace std;


int main()
{

	clsQueueLine PayBillsQueue("A0",10);

	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();

	cout << "\n\t\t\t\t\tPay Bills Queue Info : \n";
	PayBillsQueue.PrintInfo();

	PayBillsQueue.PrintTicketsLineRTL();
	PayBillsQueue.PrintTicketsLineLTR();

	cout << "\n\t\t\t\t       ---Tickets--- \n";
	PayBillsQueue.PrintAllTickets();

	PayBillsQueue.ServeNextClient();

	cout << "\n\t\t\t\tPay Bills Queue After Serve one client\n";
	PayBillsQueue.PrintInfo();

	PayBillsQueue.PrintAllTickets();

	

	system("pause>0");
	return 0;
}