#include "WithdrawController.h"

void WithdrawController::withdrawMember(FILE * output_File, Member* member, vector<Member*>& memberList) {

    member->deleteMember(output_File, member, memberList);

}