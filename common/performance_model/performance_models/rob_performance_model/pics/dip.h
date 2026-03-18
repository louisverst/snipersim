#ifndef DIP_H_
#define DIP_H_

#include "pics.h"
#include "subsecond_time.h"
#include "fixed_types.h"
#include "simulator.h"
#include "dvfs_manager.h"

#include <iostream>

class DipStack : PICStack {
    private:
        SubsecondTime base{SubsecondTime::Zero()};
        SubsecondTime fe_stall{SubsecondTime::Zero()};
        SubsecondTime be_stall{SubsecondTime::Zero()};
        SubsecondTime mispred{SubsecondTime::Zero()};

    public:
        void add_base(SubsecondTime t);
        void add_fe_stall(SubsecondTime t);
        void add_be_stall(SubsecondTime t);
        void add_mispred(SubsecondTime t);

        float get_base_cyc() const;
        float get_fe_stall_cyc() const;
        float get_be_stall_cyc() const;
        float get_mispred_cyc() const;

};

#endif