#ifndef LOGOUT_UI_H
#define LOGOUT_UI_H

#include "LogoutController.h"

class LogoutUI {
    private:
        LogoutController* logoutController;
    public:
        LogoutUI();
        void startInterface(FILE * output_File, Member* member, vector<Member*>& memberList);
        void clickLogout(FILE * output_File, Member* member, vector<Member*>& memberList);
};

#endif