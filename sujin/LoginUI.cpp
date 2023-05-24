#include "LoginUI.h"

LoginUI::LoginUI() {
    this->loginController = new LoginController();
}

Member* LoginUI::startInterface(FILE * input_File, FILE * output_File, vector<Member*>& memberList) {

    char cid[50]; char cpassword[50];

    // 값 입력
	fscanf(input_File, "%s %s", cid, cpassword);
 
    string id = cid; string password = cpassword;
    return submitLoginForm(output_File, id, password, memberList);
}

Member* LoginUI::submitLoginForm (FILE * output_File, string id, string password, vector<Member*>& memberList) {
    return (this->loginController)->loginMember(output_File, id, password, memberList);
}