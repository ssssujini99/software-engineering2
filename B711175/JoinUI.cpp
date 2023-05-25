#include "JoinUI.h"

JoinUI::JoinUI() {
    this->joinController = new JoinController();
}

Member* JoinUI::startInterface(FILE * input_File, FILE * output_File, vector<Member*>& memberList) {

    int memberType;
    
    char cname[MAX_STRING]; char cnumber[MAX_STRING]; char cid[MAX_STRING]; char cpassword[MAX_STRING];

    // 값 입력
	fscanf(input_File, "%d %s %s %s %s", &memberType, cname, cnumber, cid, cpassword);


    return submitJoinForm(output_File, memberType, cname, cnumber, cid, cpassword, memberList);
}

Member* JoinUI::submitJoinForm (FILE * output_File, int memberType, char* name, char* number, char* id, char* password, vector<Member*>& memberList) {
    return (this->joinController)->joinMember(output_File, memberType, name, number, id, password, memberList);
}