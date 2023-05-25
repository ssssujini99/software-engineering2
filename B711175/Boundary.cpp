#include "Boundary.h"

void AddRecruitmetnUI::Typing_New_Recruitment(FILE * input_File, FILE * output_File, CompanyMember* mem)
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
	fprintf(output_File, "3.1. 채용 정보 등록\n");
	fprintf(output_File, "> %s %d %s\n\n", recruitment->getWork(), recruitment->getApplyNumber(), recruitment->getDeadline());
}

void CheckRecruitmentUI::Check_Recruitments(FILE* output_File, CompanyMember* mem)
{
	CheckRecruitment check_Recruitment;
	vector<Recruitment*> v;

	v = check_Recruitment.Check_Recruitments(mem);

	fprintf(output_File, "3.2. 등록된 채용 정보 조회\n");
	for (int i = 0; i < v.size(); i++)
	{
		fprintf(output_File, "> %s %d %s\n", v[i]->getWork(), v[i]->getApplyNumber(), v[i]->getDeadline());
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

	fprintf(out_fp, "4.1. 채용 정보 검색\n");
	for (int i = 0; i < v.size(); i++)
	{
		fprintf(out_fp, "> %s %s %s %d %s\n\n",v[i]->getCompanyName(), v[i]->getBusinessNum(),
			v[i]->getWork(), v[i]->getApplyNumber(), v[i]->getDeadline());
	}
}

void StatisticRecruitmentInfoUI::recruitmentStatistic(FILE* out_fp, CompanyMember* mem) 
{
	map<char*, int> recruitMap;

	StatisticRecruitmentInfo statisticRecruitmentInfo;
	recruitMap = statisticRecruitmentInfo.showRecruitmentStatistic(mem);

	fprintf(out_fp, "5.1. 지원 정보 통계(회사 회원)\n");

	map<char*, int>::iterator iter;
	for (iter = recruitMap.begin(); iter != recruitMap.end(); ++iter)
	{
		fprintf(out_fp, "> %s %d\n", iter->first, iter->second);
	}
	fprintf(out_fp, "\n");
}

void StatisticApplicationInfoUI::applicationStatistic(FILE* out_fp, GeneralMember* mem)
{
	map<char*, int> applyMap;

	StatisticApplicationInfo statisticApplicationInfo;
	applyMap = statisticApplicationInfo.showApplicationStatistic(mem);

	fprintf(out_fp, "5.1. 지원 정보 통계(일반 회원)\n");

	map<char*, int>::iterator iter;
	for (iter = applyMap.begin(); iter != applyMap.end(); ++iter)
	{
		fprintf(out_fp, "> %s %d\n", iter->first, iter->second);
	}
	fprintf(out_fp, "\n");
}



void ApplyUI::clickApply(FILE* in_fp, FILE* out_fp, vector<Member*> M_List, GeneralMember* currentMem)
{
	ApplyControl applyControl;
	Recruitment* recruitment;
	
	char searchCompanyNumber[MAX_STRING];
	fscanf(in_fp, "%s", searchCompanyNumber);
	fprintf(out_fp, "4.2. 채용 지원\n");

	recruitment = applyControl.apply(searchCompanyNumber, M_List, currentMem);
	fprintf(out_fp, "> %s %s %s\n\n", recruitment->getCompanyName(), recruitment->getBusinessNum(), recruitment->getWork());

}

void CancelApplicationUI::clickCancelApplication(FILE* in_fp, FILE* out_fp, GeneralMember* currentMem)
{
	CancelApplication cancelApplication;
	Recruitment* recruitment;

	char businessNum[MAX_STRING];
	fscanf(in_fp, "%s", businessNum);
	fprintf(out_fp, "4.4. 지원 취소\n");

	recruitment = cancelApplication.cancelApply(businessNum, currentMem);
	fprintf(out_fp, "> %s %s %s\n\n", recruitment->getCompanyName(), recruitment->getBusinessNum(), recruitment->getWork());
}

void SearchApplicationUI::searchApply(FILE* out_fp, GeneralMember* currentMem)
{
	SearchApplication searchApplication;
	vector<Recruitment*> v;

	v = searchApplication.getApplicationList(currentMem);

	// 이름을 기준으로 오름차순 정렬
	sort(v.begin(), v.end(), [](Recruitment* a, Recruitment* b) {
		return strcmp(a->getCompanyName(), b->getCompanyName()) < 0;});

	fprintf(out_fp, "4.3. 지원 정보 조회\n");
	for (int i = 0; i < v.size(); i++)
	{
		fprintf(out_fp, "> %s %s %s %d %s\n", v[i]->getCompanyName(), v[i]->getBusinessNum(), v[i]->getWork(),
			v[i]->getApplyNumber(), v[i]->getDeadline());
	}
	fprintf(out_fp, "\n");
}