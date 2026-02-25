#include "pics.h"
#include "subsecond_time.h"

#include <iostream>

class DipStack : PICStack {

    private:
        uint64_t fe_stall{};
        uint64_t be_stall{};
        uint64_t misspec{};

    public:
        void add_fe_stall(uint64_t t);
        void add_be_stall(uint64_t t);
        void add_misspec(uint64_t t);
        uint64_t total_stall() const;
        bool operator<(const DipStack& other) const;

};