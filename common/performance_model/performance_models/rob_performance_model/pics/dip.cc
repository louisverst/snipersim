#include "dip.h"

void DipStack::add_fe_stall(uint64_t cycles)
{
    fe_stall += cycles;
}

void DipStack::add_be_stall(uint64_t cycles)
{
    be_stall += cycles;
}

void DipStack::add_misspec(uint64_t cycles)
{
    misspec += cycles;
}