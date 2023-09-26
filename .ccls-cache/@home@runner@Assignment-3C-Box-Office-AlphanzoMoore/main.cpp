#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Constants
    const double ADULT_TICKET_PRICE = 10.00;
    const double CHILD_TICKET_PRICE = 6.00;
    const double BOX_OFFICE_PERCENT = 0.20;  // 20%

    // Variables
    string movieName;
    int adultTicketsSold, childTicketsSold;
    double grossBoxOfficeProfit, netBoxOfficeProfit, amountPaidToDistributor;

    // Input movie details
    cout << "Enter the movie name: ";
    getline(cin, movieName);

    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTicketsSold;

    cout << "Enter the number of child tickets sold: ";
    cin >> childTicketsSold;

    // Calculate the gross box office profit
    grossBoxOfficeProfit = (adultTicketsSold * ADULT_TICKET_PRICE) + (childTicketsSold * CHILD_TICKET_PRICE);

    // Calculate the net box office profit
    netBoxOfficeProfit = grossBoxOfficeProfit * (1.0 - BOX_OFFICE_PERCENT);

    // Calculate the amount paid to the distributor
    amountPaidToDistributor = grossBoxOfficeProfit - netBoxOfficeProfit;

    // Display the report with proper formatting
    cout << fixed << setprecision(2); // Set precision to two decimal places

    cout << "\nMovie Name: " << setw(36) << left << movieName << endl;
    cout << "Adult Tickets Sold: " << setw(24) << right << adultTicketsSold << endl;
    cout << "Child Tickets Sold: " << setw(24) << right << childTicketsSold << endl;
    cout << "Gross Box Office Profit: $" << setw(16) << right << grossBoxOfficeProfit << endl;
    cout << "Net Box Office Profit: $" << setw(18) << right << netBoxOfficeProfit << endl;
    cout << "Amount Paid to Distributor: $" << setw(14) << right << amountPaidToDistributor << endl;

    return 0;
}

