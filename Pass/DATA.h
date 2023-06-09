// DATA.h

#ifndef DATA_H
#define DATA_H

#include <string>

class Authorisation
{
public:

    struct Data_base
    {
        Data_base();

        int Day;
        int Month;
        int Year;
        int Number_of_export_document;
        int Number_of_collies;
        std::string Signature;
    };

    Data_base* Data_pointer;

    void Load_data(Data_base* Data_base);
    void Print_pass(Data_base* Data_base);

    Authorisation();
};

#endif // DATA_H
