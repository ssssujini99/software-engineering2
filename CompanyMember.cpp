
#include "CompanyMember.h"

	Recruitment* CompanyMember::Add_Recruitment(char work[], int number, char deadline[])
	{
		Recruitment* recruitment = new Recruitment(companyName, work, number, deadline);
		recruitment_List.push_back(recruitment);

		return recruitment;
	}

	vector<Recruitment*> CompanyMember::Get_RecruitmentList()
	{
		return recruitment_List;
	}

	Recruitment* CompanyMember::listRecruitmentSearchInfo(string companyname)
	{
		if (companyname == this->getCompanyName())
		{
			for (int i = 0; i < recruitment_List.size(); i++) {
				return recruitment_List[i];
			}

		}
