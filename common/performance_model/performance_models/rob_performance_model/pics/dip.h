#include "pics.h"
#include "subsecond_time.h"
#include "stats.h"
#include <iostream>

class DipStack : PICStack {
    private:
        static uint64_t s_next_id;
        const uint64_t m_id{};
        SubsecondTime base{SubsecondTime::Zero()};
        SubsecondTime fe_stall{SubsecondTime::Zero()};
        SubsecondTime be_stall{SubsecondTime::Zero()};
        SubsecondTime mispred{SubsecondTime::Zero()};

    public:
        DipStack() : m_id(++s_next_id) {};

        void init();

        void add_base(SubsecondTime t);
        void add_fe_stall(SubsecondTime t);
        void add_be_stall(SubsecondTime t);
        void add_mispred(SubsecondTime t);
};