#include "Boundary.h"


void AddRecruitmetnUI::Typing_New_Recruitment(FILE * input_File, FILE * output_File, CompanyMember* mem)
{
	AddRecruitment add_Recruitment;
	Recruitment* recruitment;

	// �Է� �� ���� ����
	char work[MAX_STRING];
	char deadline[MAX_STRING];
	int num_Of_People;

	// �� �Է�
	fscanf(input_File, "%s %d %s", work, &num_Of_People, deadline);

	// �Է� �� ���� �� ���� ���
	recruitment = add_Recruitment.Create_Recruitment(mem, work, num_Of_People, deadline);
	fprintf(output_File, "3.1. ä�� ���� ���\n");
	fprintf(output_File, "> %s %d %s\n\n", recruitment->getWork(), recruitment->getNumber(), recruitment->getDeadline());
}


void CheckRecruitmentUI::Check_Recruitments(FILE* output_File, CompanyMember* mem)
{
	CheckRecruitment check_Recruitment;
	vector<Recruitment*> v;

	v = check_Recruitment.Check_Recruitments(mem);

	fprintf(output_File, "3.2. ��ϵ� ä�� ���� ��ȸ\n");
	for (int i = 0; i < v.size(); i++)
	{
		fprintf(output_File, "> %s %d %s\n\n", v[i]->getWork(), v[i]->getNumber(), v[i]->getDeadline());
	}
	fprintf(output_File, "\n");

}



void SearchRecruitmentInfoUI::selectCompany(FILE* companyname, FILE* out_fp, vector<Member*> M_List)
{
	SearchRecruitmentInfo SearchRecruitmentInfoPtr;
	vector <Recruitment*> v;

	char searchCompanyName[MAX_STRING];
	fscanf(companyname, "%s", searchCompanyName);

	v = SearchRecruitmentInfoPtr.showRecruitmentList(M_List, searchCompanyName);

	fprintf(out_fp, "4.1. ä�� ���� �˻�\n");
	for (int i = 0; i < v.size(); i++)
	{
		fprintf(out_fp, "> %s %s %s %d %s\n\n",v[i]->getCompanyName(), v[i]->getBusinessNum(),
			v[i]->getWork(), v[i]->getNumber(), v[i]->getDeadline());

	}
	

}

void StatisticRecruitmentInfoUI::recruitmentStatistic(FILE* out_fp, CompanyMember* mem) {
	fprintf(out_fp, "5.1. ���� ���� ���\n");
}