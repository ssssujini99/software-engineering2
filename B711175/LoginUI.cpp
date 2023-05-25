#include "LoginUI.h"

LoginUI::LoginUI() {
    this->loginController = new LoginController();
}

Member* LoginUI::startInterface(FILE * input_File, FILE * output_File, vector<Member*>& memberList) {

    char cid[MAX_STRING]; char cpassword[MAX_STRING];

    // 값 입력
	fscanf(input_File, "%s %s", cid, cpassword);
 
    return submitLoginForm(output_File, cid, cpassword, memberList);
}

Member* LoginUI::submitLoginForm (FILE * output_File, char * id, char * password, vector<Member*>& memberList) {
    return (this->loginController)->loginMember(output_File, id, password, memberList);
}