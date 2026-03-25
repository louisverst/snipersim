#include "dip.h"

//#define DEBUG_DIP

void DipStack::add_fe_stall(SubsecondTime t)
{
#ifdef DEBUG_DIP
    std::cout << "Adding fe: " << static_cast<float>(t.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS()) << "\n";
#endif
    fe_stall += t;
}

void DipStack::add_be_stall(SubsecondTime t)
{
#ifdef DEBUG_DIP
    std::cout << "Adding be: " << static_cast<float>(t.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS()) << "\n";
#endif
    be_stall += t;
}

void DipStack::add_mispred(SubsecondTime t)
{
#ifdef DEBUG_DIP
    std::cout << "Adding mispred: " << static_cast<float>(t.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS()) << "\n";
#endif
    mispred += t;
}

void DipStack::add_base(SubsecondTime t)
{
#ifdef DEBUGDIP
    std::cout << "Adding base: " << static_cast<float>(t.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS()) << "\n";
#endif
    base += t;
}

float DipStack::get_base_cyc() const
{
    return static_cast<float>(base.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS());
}

float DipStack::get_fe_stall_cyc() const
{
    return static_cast<float>(fe_stall.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS());
}

float DipStack::get_be_stall_cyc() const
{
    return static_cast<float>(be_stall.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS());
}

float DipStack::get_mispred_cyc() const
{
    return static_cast<float>(mispred.getFS()) / static_cast<float>(Sim()->getDvfsManager()->getGlobalDomain()->getPeriod().getFS());
}
