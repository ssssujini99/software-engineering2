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



vector<Recruitment*> SearchRecruitmentInfo::showRecruitmentList(vector<Member*> M_List, char* companyname)
{
	CompanyMember* cM;

	for (int i = 0; i < M_List.size(); i++)
	{
		if (M_List[i]->getType() == 1)
		{
			cM = dynamic_cast<CompanyMember*>(M_List[i]);

			if (strcmp(cM->getCompanyName(), companyname) == 0)
			{
				return cM->Get_RecruitmentList();
			}
		}

	}
}

vector<Recruitment*> StatisticRecruitmentInfo::showRecruitmentStatistic(CompanyMember* mem) {
	return mem->Get_RecruitmentList();
}