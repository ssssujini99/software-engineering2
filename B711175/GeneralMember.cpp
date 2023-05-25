#include "GeneralMember.h"

GeneralMember::GeneralMember(const char * userName, const char * identificationNumber, const char * id, const char * password, int memberType)
    : Member(id, password, memberType) {
	strcpy(this->userName, userName);
	strcpy(this->identificationNumber, identificationNumber);
}

void GeneralMember::addApplication(Recruitment* recruitment)
{
	apply_Recruitment_List.push_back(recruitment);
	recruitment->addApplyDetails();
}

void GeneralMember::cancelApplication(int index)
{
	apply_Recruitment_List[index]->cancelApply();
	apply_Recruitment_List.erase(apply_Recruitment_List.begin() + index);
}

vector<Recruitment*> GeneralMember::getApplyList()
{
	return apply_Recruitment_List;
}

char* GeneralMember::getUserName()
{
	return userName;
}

char* GeneralMember::getIdentificationNumber()
{
	return identificationNumber;
}