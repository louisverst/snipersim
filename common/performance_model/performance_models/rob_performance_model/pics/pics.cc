#include "pics.h"

#define DEBUG_PICS

void PICS_d::add_fe_stall(SubsecondTime t)
{
#ifdef DEBUG_PICS
    std::cout << "Adding fe: " << static_cast<float>(t.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS()) << "\n";
#endif
    fe_stall += t;
}

void PICS_d::add_be_stall(SubsecondTime t)
{
#ifdef DEBUG_PICS
    std::cout << "Adding be: " << static_cast<float>(t.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS()) << "\n";
#endif
    be_stall += t;
}

void PICS_d::add_mispred(SubsecondTime t)
{
#ifdef DEBUG_PICS
    std::cout << "Adding mispred: " << static_cast<float>(t.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS()) << "\n";
#endif
    mispred += t;
}

void PICS_d::add_base(SubsecondTime t)
{
#ifdef DEBUG_PICS
    std::cout << "Adding base: " << static_cast<float>(t.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS()) << "\n";
#endif
    base += t;
}

float PICS_d::get_base_cyc() const
{
    return static_cast<float>(base.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS());
}

float PICS_d::get_fe_stall_cyc() const
{
    return static_cast<float>(fe_stall.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS());
}

float PICS_d::get_be_stall_cyc() const
{
    return static_cast<float>(be_stall.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS());
}

float PICS_d::get_mispred_cyc() const
{
    return static_cast<float>(mispred.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS());
}

void PICS_c::add_compute(SubsecondTime t)
{
#ifdef DEBUG_PICS
    std::cout << "Adding compute: " << static_cast<float>(t.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS()) << "\n";
#endif
    compute += t;
}

void PICS_c::add_drained(SubsecondTime t)
{
#ifdef DEBUG_PICS
    std::cout << "Adding drained: " << static_cast<float>(t.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS()) << "\n";
#endif
    drained += t;
}

void PICS_c::add_stalled(SubsecondTime t)
{
#ifdef DEBUG_PICS
    std::cout << "Adding stalled: " << static_cast<float>(t.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS()) << "\n";
#endif
    stalled += t;
}

void PICS_c::add_flushed(SubsecondTime t)
{
#ifdef DEBUG_PICS
    std::cout << "Adding flushed: " << static_cast<float>(t.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS()) << "\n";
#endif
    flushed += t;
}

float PICS_c::get_compute_cyc() const
{
    return static_cast<float>(compute.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS());
}

float PICS_c::get_drained_cyc() const
{
    return static_cast<float>(drained.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS());
}

float PICS_c::get_stalled_cyc() const
{
    return static_cast<float>(stalled.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS());
}

float PICS_c::get_flushed_cyc() const
{
    return static_cast<float>(flushed.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS());
}
