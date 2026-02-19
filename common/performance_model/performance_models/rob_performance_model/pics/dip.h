#include "pics.h"
#include "subsecond_time.h"

#include <iostream>

class Dip : PICStack {

    private:
        SubsecondTime fe_stall{};
        SubsecondTime be_stall{};
        SubsecondTime misspec{};

    public:
        void add_fe_stall(uint64_t t);
        void add_be_stall(uint64_t t);
        void add_misspec(uint64_t t);

};