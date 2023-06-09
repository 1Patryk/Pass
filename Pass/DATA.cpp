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
    Day = (00);
    Month = (00);
    Year = (1900);
    Number_of_export_document = (0);
    Number_of_collies = (0);
    std::string Signature = { "tak" }; // Nie chce siê "tak" wydrukowaæ
}

void Authorisation::Load_data(Data_base* Data_pointer)
{
    std::cout << "Good morning, please specify the day of the month" << std::endl;
    //std::cin >> Data_base->Day;
    std::cout << "Welcome, please specify number of the month" << std::endl;
    //std::cin >> Data_base->Month;
}

void Authorisation::Print_pass(Data_base* Data_pointer)
{
    std::cout << " _____________________________________________________________" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\t\tM&M\t\t\tM&M Sp. z o.o.\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\tul. Lutnicza 1\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\tPRODUKCJA CZÊŒCI\t|" << std::endl;
    std::cout << "|\t\t\t\t\tMASZYN\t\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\t\tZEZWALAM NA WYWÓZ\t\t\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\tData:\t" << Data_pointer->Day << "/" << Data_pointer->Month << "/" << Data_pointer->Year << "\t\t\t\t\t|" << std::endl;
    std::cout << "|\tDokument wywozowy:\t" << Data_pointer->Number_of_export_document << "\t\t\t\t|" << std::endl;
    std::cout << "|\tIloœæ colli:\t" << Data_pointer->Number_of_collies << "\t\t\t\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\tPodpis:\t" << Data_pointer->Signature << "\t\t\t\t\t\t|" << std::endl;
    std::cout << "|\t\t\t\t\t\t\t\t|" << std::endl;
    std::cout << "|_______________________________________________________________|" << std::endl;

    //std::cout << "Qwerty: " << Data_pointer->Signature << std::endl;
    //std::cout << "Day of the month: " << Data_base->DATA << std::endl;  
    //std::cout << "Number of the month: " << Data_base->Month << std::endl;  
    //std::cout << "Number of the year: " << Data_base->Year << std::endl; 
}
