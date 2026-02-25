#include "hot_dips.h"

void HotDips::add_dip(DipStack dip) 
{
	m_dips.push(dip);
    if(m_dips.size() > 5)
        m_dips.pop();
}