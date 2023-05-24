#include "Control.h"

Recruitment* AddRecruitment::Create_Recruitment(CompanyMember* X, char a[], int b, char c[])
{

	Recruitment* recruitment;
	recruitment = (X->Add_Recruitment(a, b, c));

	return recruitment;
}

vector<Recruitment*> SearchRecruitment::Search_Recruitments(CompanyMember* mem)
{
	return mem->Get_RecruitmentList();
}

Recruitment* SearchRecruitmentInfo::showRecruitmentList(string companyname)
{
	return companyMemberPtr->listRecruitmentSearchInfo(companyname);
}

