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

void DipStack::record(){
    registerStatsMetric("dip", m_id, "base", &base);
    registerStatsMetric("dip", m_id, "fe_stall", &fe_stall);
    registerStatsMetric("dip", m_id, "be_stall", &be_stall);
    registerStatsMetric("dip", m_id, "mispred", &mispred);
}