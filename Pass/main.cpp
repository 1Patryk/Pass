// main.cpp

#include "DATA.h"

int main()
{
    Authorisation* Pass = new Authorisation();
    //Pass->Load_data_from_user(Pass->Data_pointer);
    Pass->Print_pass_in_the_console(Pass->Data_pointer);
    delete Pass;
    Pass = nullptr;
    return 0;
}