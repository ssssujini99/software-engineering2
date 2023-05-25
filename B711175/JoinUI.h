#ifndef JOIN_UI_H
#define JOIN_UI_H

#include "JoinController.h"

class JoinUI {
    private:
        JoinController* joinController;
    public:
        JoinUI();
        Member* startInterface(FILE * input_File, FILE * output_File, vector<Member*>& memberList);
        Member* submitJoinForm(FILE * output_File, int memberType, char* name, char* number, char* id, char* password, vector<Member*>& memberList);
};

#endif