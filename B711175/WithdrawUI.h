#ifndef WITHDRAW_UI_H
#define WITHDRAW_UI_H

#include "WithdrawController.h"

class WithdrawUI {
    private:
        WithdrawController* withdrawController;
    public:
        WithdrawUI();
        void startInterface(FILE * input_File, FILE * output_File, Member* member, vector<Member*>& memberList);
        void clickWithdraw(FILE * output_File, Member* member, vector<Member*>& memberList);
};

#endif