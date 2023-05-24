#include "CompanyMember.h"

Recruitment * CompanyMember::Add_Recruitment(char work[], int number, char deadline[])
{
	Recruitment * recruitment = new Recruitment(companyName, work, number, deadline);
	recruitment_List.push_back(recruitment);

	return recruitment;
}

vector<Recruitment*> CompanyMember::Get_RecruitmentList()
{
	return recruitment_List;
}
