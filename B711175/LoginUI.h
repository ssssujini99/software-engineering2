#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include "LoginController.h"

class LoginUI {
    private:
        LoginController* loginController;
    public:
        LoginUI();
        Member* startInterface(FILE * input_File, FILE * output_File, vector<Member*>& memberList);
        Member* submitLoginForm(FILE * output_File, char* id, char* password, vector<Member*>& memberList);
};

#endif