#include "Boundary.h"

void ApplyUI::applyCompany(FILE* businessnum, FILE* out_fp, vector<CompanyMember*> cM_List, GeneralMember* mem)
{

	Apply apply;
	vector <Recruitment*> v;

	char searchBusinessNum[MAX_STRING];
	fscanf(businessnum, "%s", searchBusinessNum);

	v = apply.showRecruitmentList(cM_List, searchBusinessNum);
	fprintf(out_fp, "4.2. 채용 지원\n");
	for (int i = 0; i < v.size(); i++)
	{
		fprintf(out_fp, "> %s %s %s\n",v[i]->getCompanyName(), v[i]->getBusinessNum(), v[i]->getWork());
	}
}

void CheckApplicationUI::Check_Applications(FILE* output_File, GeneralMember* mem)
{
	CheckApplication check_Application;
	vector<Recruitment*> v;

	v = check_Application.Check_Applications(mem);

	fprintf(output_File, "4.3. 등록된 지원 정보 조회\n");
	for (int i = 0; i < v.size(); i++)
	{
		fprintf(output_File, "> %s %d %s\n", v[i]->getWork(), v[i]->getNumber(), v[i]->getDeadline());
	}
	fprintf(output_File, "\n");
}

void CancelApplicationUI::ClickCancelApplication(FILE* businessnum, FILE* out_fp, vector<CompanyMember*> GeneralMember* mem)
{

	CancelApplication cancelApplication;
	vector <Recruitment*> v;

	char searchBusinessNum[MAX_STRING];
	fscanf(businessnum, "%s", searchBusinessNum);

	v = apply.showRecruitmentList(cM_List, searchBusinessNum);
	fprintf(out_fp, "4.2. 채용 지원\n");
	for (int i = 0; i < v.size(); i++)
	{
		fprintf(out_fp, "> %s %s %s\n",v[i]->getCompanyName(), v[i]->getBusinessNum(), v[i]->getWork());
	}
}





