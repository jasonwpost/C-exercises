#include <iostream>

struct Sale_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sale_data total;
    double totalPrice;
    if (std::cin >> total.bookNo >> total.units_sold >> totalPrice)
    {
        total.revenue = total.units_sold * totalPrice;

        Sale_data transaction;
        double transactionPrice;
        while (std::cin >> transaction.bookNo >> transaction.units_sold >> transactionPrice)
        {
            transaction.revenue = transaction.units_sold * transactionPrice;

            if (total.bookNo == transaction.bookNo)
            {
                total.units_sold += transaction.units_sold;
                total.revenue += transaction.revenue;
            }
            else
            {
                std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
                if (total.units_sold != 0)
                    std::cout << total.revenue / total.units_sold << std::endl;
                else
                    std::cout << "no sale" << std::endl;

                total.bookNo = transaction.bookNo;
                total.units_sold = transaction.units_sold;
                total.revenue = transaction.revenue;
            }
        }

        std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
        if (total.units_sold != 0)
            std::cout << total.revenue / total.units_sold << std::endl;
        else
            std::cout << "no sale" << std::endl;

        return 0;
    }
    else
    {
        std::cout << "No data" << std::endl;
        return -1;
    }
}
