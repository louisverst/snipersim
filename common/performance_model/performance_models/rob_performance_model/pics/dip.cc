#include "dip.h"

void DipStack::add_fe_stall(uint64_t t)
{

}

void DipStack::add_be_stall(uint64_t t)
{

}

void DipStack::add_misspec(uint64_t t)
{

}

uint64_t DipStack::total_stall() const
{
    return fe_stall + be_stall + misspec;
}

bool DipStack::operator<(const DipStack& other) const
{
    // Reverse for min-heap behavior in hot_dips
    return !(total_stall() < other.total_stall());
}