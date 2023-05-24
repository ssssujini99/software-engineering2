#include "JoinUI.h"

JoinUI::JoinUI() {
    this->joinController = new JoinController();
}

Member* JoinUI::startInterface(FILE * input_File, FILE * output_File, vector<Member*>& memberList) {

    int memberType;
    
    char cname[50]; char cnumber[50]; char cid[50]; char cpassword[50];

    // 값 입력
	fscanf(input_File, "%d %s %s %s %s", &memberType, cname, cnumber, cid, cpassword);

    string name = cname; string number = cnumber; string id = cid; string password = cpassword;

    return submitJoinForm(output_File, memberType, name, number, id, password, memberList);
}

Member* JoinUI::submitJoinForm (FILE * output_File, int memberType, string name, string number, string id, string password, vector<Member*>& memberList) {
    return (this->joinController)->joinMember(output_File, memberType, name, number, id, password, memberList);
}