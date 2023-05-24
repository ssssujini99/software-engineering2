#include "Boundary.h"

void AddRecruitmetnUI::Typing_New_Recruitment(FILE* input_File, FILE* output_File, CompanyMember* mem)
{
	AddRecruitment add_Recruitment;
	Recruitment* recruitment;

	// 입력 값 저장 변수
	char work[MAX_STRING];
	char deadline[MAX_STRING];
	int num_Of_People;

	// 값 입력
	fscanf(input_File, "%s %d %s", work, &num_Of_People, deadline);

	// 입력 값 전달 및 내용 출력
	recruitment = add_Recruitment.Create_Recruitment(mem, work, num_Of_People, deadline);
	fprintf(output_File, "3.1. 채용정보등록\n");
	fprintf(output_File, "> %s %d %s", recruitment->getWork(), recruitment->getNumber(), recruitment->getDeadline());
}


void SearchRecruitmentUI::Search_Recruitments(FILE* output_File, CompanyMember* mem)
{
	SearchRecruitment search_Recruitment;
	vector<Recruitment*> v;
	v = search_Recruitment.Search_Recruitments(mem);

	fprintf(output_File, "3.2. 채용정보조회\n");
	for (int i = 0; i < v.size(); i++)
	{
		fprintf(output_File, "> %s %d %s", v[i]->getWork(), v[i]->getNumber(), v[i]->getDeadline());
		fprintf(output_File, "\n");
	}

}
void SearchRecruitmentInfoUI::selectCompany(FILE* companyname, FILE* out_fp, vector<Member*>memlist)
{
	string  searchCompanyName;
	fscanf(companyname, "%s", searchCompanyName);
	vector <Recruitment> v;

	fprintf(out_fp, "4.1. 채용 정보 검색\n");
	for (int i = 0; i < memlist.size();i++) {
		selectedRecruitment = SearchRecruitmentInfoPtr->showRecruitmentList(searchCompanyName);
		fprintf(out_fp, "%s %s %s %d %s", companyname, selectedRecruitment->getWork(), selectedRecruitment->getNumber(), selectedRecruitment->getDeadline());


	}

}

void StatisticRecruitmentInfoUI::recruitmentStatistic(FILE* out_fp, CompanyMember* mem) {
	fprintf(out_fp, "5.1. 지원 정보 통계\n");
	for(int i=0;i<mem.)
	fprintf(out_fp, "4.1. 채용 정보 검색\n");

}


