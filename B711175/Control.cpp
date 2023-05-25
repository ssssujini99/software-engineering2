#include "Control.h"

Recruitment * AddRecruitment::Create_Recruitment(CompanyMember *mem, char job[], int num, char deadline[])
{

	Recruitment* recruitment;
	recruitment = (mem->Add_Recruitment(job, num, deadline));

	return recruitment;
}

vector<Recruitment*> CheckRecruitment::Check_Recruitments(CompanyMember * mem)
{
	return mem->Get_RecruitmentList();
}



vector<Recruitment*> SearchRecruitmentInfo::showRecruitmentList(vector<CompanyMember*> cM_List, char* companyname)
{
	for (int i = 0; i < cM_List.size(); i++)
	{
		if (strcmp(cM_List[i]->getCompanyName(), companyname))
		{
			return cM_List[i]->Get_RecruitmentList();
		}
	}
}

vector<Recruitment*> StatisticRecruitmentInfo::showRecruitmentStatistic(CompanyMember* mem) {
	return mem->Get_RecruitmentList();
}