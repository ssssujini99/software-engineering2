#include<iostream>
#include<vector>

#include "Member.h"
#include "Recruitment.h"

class GeneralMember : public Member {
private:
    char userName[MAX_STRING];
    char identificationNumber[MAX_STRING];
public:
    GeneralMember(char * userName, char * identificationNumber, char * id, char * password);
};