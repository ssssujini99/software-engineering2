#include "LogoutUI.h"

LogoutUI::LogoutUI() {
    this->logoutController = new LogoutController();
}

void LogoutUI::startInterface(FILE * output_File, Member* member, vector<Member*>& memberList) {

    // cout << "2.2 로그아웃\n";

    clickLogout(output_File, member, memberList);
}

void LogoutUI::clickLogout (FILE * output_File, Member* member, vector<Member*>& memberList) {
    (this->logoutController)->logoutMember(output_File, member, memberList);
}