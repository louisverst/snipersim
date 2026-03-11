#include "dip.h"

void DipStack::add_fe_stall(SubsecondTime t)
{
    std::cout << "Front end stall add " << t << "\n";
    fe_stall += t;
}

void DipStack::add_be_stall(SubsecondTime t)
{
    std::cout << "Back end stall add " << t << "\n";
    be_stall += t;
}

void DipStack::add_mispred(SubsecondTime t)
{
    std::cout << "Misprediction stall add " << t << "\n";
    mispred += t;
}

void DipStack::add_base(SubsecondTime t)
{
    std::cout << "Base add " << t << "\n";
    base += t;
}