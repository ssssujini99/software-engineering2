#include "LoginController.h"

Member* LoginController::loginMember(FILE* output_File, char* id, char* password, vector<Member*>& memberList) {

    Member* member = new Member(id, password, 1);

    member = member->verifyMember(memberList);
    if (member != NULL) {
        member->activateMember(output_File, memberList);
    }
    else {
        member = nullptr;
    }
    return member;

}