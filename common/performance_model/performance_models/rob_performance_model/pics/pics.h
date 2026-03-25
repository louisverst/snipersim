#ifndef PICS_H_
#define PICS_H_

#include "subsecond_time.h"
#include "simulator.h"
#include "dvfs_manager.h"

class PICS_d
{
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

class PICS_c
{
private:
    SubsecondTime compute{SubsecondTime::Zero()};
    SubsecondTime drained{SubsecondTime::Zero()};
    SubsecondTime stalled{SubsecondTime::Zero()};
    SubsecondTime flushed{SubsecondTime::Zero()};

public:
    void add_compute(SubsecondTime t);
    void add_drained(SubsecondTime t);
    void add_stalled(SubsecondTime t);
    void add_flushed(SubsecondTime t);

    float get_compute_cyc() const;
    float get_drained_cyc() const;
    float get_stalled_cyc() const;
    float get_flushed_cyc() const;
};

#endif