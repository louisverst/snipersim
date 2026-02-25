#include "dip.h"

#include <queue>

class HotDips
{
private:
    std::priority_queue<DipStack> m_dips;
public:
    void add_dip(DipStack dip);
};


