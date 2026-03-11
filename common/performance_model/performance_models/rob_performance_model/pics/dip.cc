#include "dip.h"

uint64_t DipStack::s_next_id = 0;

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

UInt64 DipStack::get_base_cyc() const
{
    return base.getFS();
}

UInt64 DipStack::get_fe_stall_cyc() const
{
    return fe_stall.getFS();
}

UInt64 DipStack::get_be_stall_cyc() const
{
    return be_stall.getFS();
}

UInt64 DipStack::get_mispred_cyc() const
{
    return mispred.getFS();
}