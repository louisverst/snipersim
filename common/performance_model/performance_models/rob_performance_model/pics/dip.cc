#include "dip.h"

void DipCount::account_fe_stall()
{
    std::cout << "Accounted a front-end stall\n";
    this->fe_stalls++;
}

void DipCount::account_be_stall()
{
    std::cout << "Accounted a back-end stall\n";
    this->be_stalls++;
}

void DipCount::account_misspecs()
{
    std::cout << "Accounted for a misspeculation - Yikes!\n";
    this->misspecs++;
}