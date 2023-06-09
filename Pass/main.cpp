// main.cpp

#include "DATA.h"

int main()
{
    Authorisation* Pass = new Authorisation();
    //Authorisation::Data_base* Download_data = new Authorisation::Data_base;
    //Pass->Load_data(Download_data);
    Pass->Print_pass(Pass->Data_pointer);
    delete Pass;
    Pass = nullptr;

    return 0;
}