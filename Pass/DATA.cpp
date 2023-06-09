// DATA.cpp

#include "DATA.h"
#include <iostream>

Authorisation::Authorisation()
{
    Data_base();
    Authorisation::Data_pointer = new Data_base;
    std::cout << "Good morning" << std::endl;
}

Authorisation::Data_base::Data_base()
{
    Day = (0);
    Month = (0);
    Year = (2000);
    Number_of_export_document = (0);
    Number_of_collies = (0);
    Signature = "Patric";
}

void Authorisation::Load_data_from_user(Data_base* Data_pointer)
{
    std::cout << "Good morning, please input the data below: " << std::endl;
    std::cout << "Day of the month (e.g. 01): " << std::endl;
    std::cin >> Data_pointer->Day;
    std::cout << "Number of the month (e.g. 03): " << std::endl;
    std::cin >> Data_pointer->Month;
    std::cout << "Year (e.g. 2023): " << std::endl;
    std::cin >> Data_pointer->Year;
    std::cout << "Number of export document (e.g. 20231218): " << std::endl;
    std::cin >> Data_pointer->Number_of_export_document;
    std::cout << "Number of collies (e.g. 5): " << std::endl;
    std::cin >> Data_pointer->Number_of_collies;
    std::cout << "Signature (e.g. John): " << std::endl;
    std::cin >> Data_pointer->Signature;
}

void Authorisation::Print_pass_in_the_console(Data_base* Data_pointer)
{
    std::cout << " _______________________________________________________________" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\tM&M\t\t\t\tM&M Sp. z o.o.\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\tul. Lutnicza 1\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\tPRODUKCJA CZ¨—CI\t|" << std::endl;
    std::cout << "|\t\t\t\t\tMASZYN\t\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\tZEZWALAM NA WYWàZ\t\t\t\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\tData: " << Data_pointer->Day << "/" << Data_pointer->Month << "/" << Data_pointer->Year << "\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\tDokument wywozowy: " << Data_pointer->Number_of_export_document << "\t\t\t\t\t|" << std::endl;
    std::cout << "|\tIlo˜† colli:\t" << Data_pointer->Number_of_collies << "\t\t\t\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\tPodpis:\t" << Data_pointer->Signature << "\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|_______________________________________________________________|" << std::endl;
}
