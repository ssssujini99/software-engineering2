#include "WithdrawUI.h"

WithdrawUI::WithdrawUI() {
    this->withdrawController = new WithdrawController();
}

void WithdrawUI::startInterface(FILE * input_File, FILE * output_File, Member* member, vector<Member*>& memberList) {

    // cout << "1.2 회원탈퇴\n";

    clickWithdraw(output_File, member, memberList);
}

void WithdrawUI::clickWithdraw (FILE * output_File, Member* member, vector<Member*>& memberList) {
    (this->withdrawController)->withdrawMember(output_File, member, memberList);
}