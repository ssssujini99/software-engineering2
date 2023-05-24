#include "LoginController.h"

Member* LoginController::loginMember(FILE * output_File, string id, string password, vector<Member*>& memberList) {

    Member* member = new Member(id, password);

    bool isVerify = member->verifyMember(memberList);
    if (isVerify == 1) {
        return member->activateMember(output_File, memberList);
    }
    else {
        member = nullptr;
        return member;
    }

}