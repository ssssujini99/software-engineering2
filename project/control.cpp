#include "Control.h"

vector<Recruitment*> Apply::showRecruitmentList(vector<CompanyMember*> cM_List, char* businessnum)
{
	for (int i = 0; i < cM_List.size(); i++)
	{
		if (strcmp(cM_List[i]->getBusinessNum(), businessnum))
		{
			return cM_List[i]->Get_RecruitmentList();
		}
	}
}

vector<Recruitment*> CheckApplication::Check_Applications(GeneralMember * mem)
{
	return mem->Get_ApplicationList();
}