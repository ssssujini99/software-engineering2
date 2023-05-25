#include "CompanyMember.h"

CompanyMember::CompanyMember(const char _companyName[MAX_STRING], const char _businessNum[MAX_STRING],
	const char _ID[MAX_STRING], const char _password[MAX_STRING], int _memberType) :Member(_ID, _password, _memberType)
{
	strcpy(companyName, _companyName);
	strcpy(businessNum, _businessNum);
}

char * CompanyMember::getCompanyName()
{
	return companyName;
}

char* CompanyMember::getBusinessNum()
{
	return businessNum;
}

Recruitment * CompanyMember::Add_Recruitment(char work[], int number, char deadline[])
{
	Recruitment * recruitment = new Recruitment(companyName, businessNum, work, number, deadline);
	recruitment_List.push_back(recruitment);

	return recruitment;
}

vector<Recruitment*> CompanyMember::Get_RecruitmentList()
{
	return recruitment_List;
}
