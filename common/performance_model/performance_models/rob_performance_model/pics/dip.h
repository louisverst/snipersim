#include <iostream>

class DipCount {

    private:
        int fe_stalls{};
        int be_stalls{};
        int misspecs{};

    public:
        void account_fe_stall();
        void account_be_stall();
        void account_misspecs();

};