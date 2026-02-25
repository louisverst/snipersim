#include "pics.h"
#include "subsecond_time.h"

#include <iostream>

class DipStack : PICStack {
    
    public:
        SubsecondTime base{SubsecondTime::Zero()};
        SubsecondTime fe_stall{SubsecondTime::Zero()};
        SubsecondTime be_stall{SubsecondTime::Zero()};
        SubsecondTime mispred{SubsecondTime::Zero()};
        

        void add_base(SubsecondTime t);
        void add_fe_stall(SubsecondTime t);
        void add_be_stall(SubsecondTime t);
        void add_mispred(SubsecondTime t);
        SubsecondTime total_stall() const;
        bool operator<(const DipStack& other) const;

};