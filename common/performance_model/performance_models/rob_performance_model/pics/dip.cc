#include "dip.h"

uint64_t DipStack::s_next_id = 0;

void DipStack::add_fe_stall(SubsecondTime t)
{
    fe_stall += t;
}

void DipStack::add_be_stall(SubsecondTime t)
{
    be_stall += t;
}

void DipStack::add_mispred(SubsecondTime t)
{
    mispred += t;
}

void DipStack::add_base(SubsecondTime t)
{
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
