#include "LogoutController.h"

void LogoutController::logoutMember(FILE * output_File, Member* member, vector<Member*>& memberList) {

    member->deactivateMember(output_File, member, memberList);

}