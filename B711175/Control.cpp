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

map<char*, int> StatisticRecruitmentInfo::showRecruitmentStatistic(CompanyMember* mem) 
{
	map<char*, int> recruitMap;
	// 채용 정보 저장 벡터
	vector<Recruitment*> recruitment = mem->Get_RecruitmentList();

	for (int i = 0; i < recruitment.size(); i++)
	{
		char workName[MAX_STRING];
		strcpy(workName, recruitment[i]->getWork());

		// map에 키값이 존재한다면 값 1 증가
		if (recruitMap.count(workName) != 0)
		{
			recruitMap[workName] += recruitment[i]->getApplicantNum();
		}
		// map에 키값이 없다면 맵 새로운 값 추가 <업무이름, 1(지원횟수)>
		else
		{
			recruitMap.insert(pair<char*, int>(workName, recruitment[i]->getApplicantNum()));
		}
	}

	return recruitMap;
}

map<char*, int> StatisticApplicationInfo::showApplicationStatistic(GeneralMember* mem)
{
	map<char*, int> applyMap;
	// 지원 정보 저장 벡터
	vector<Recruitment*> recruitment = mem->getApplyList();
	int add = 1;

	for (int i = 0; i < recruitment.size(); i++)
	{
		char workName[MAX_STRING];
		strcpy(workName,recruitment[i]->getWork());

		// map에 키값이 존재한다면 값 1 증가
		if (applyMap.count(workName) != 0)
		{
			applyMap[workName] += add;
		}
		// map에 키값이 없다면 맵 새로운 값 추가 <업무이름, 1(지원횟수)>
		else
		{
			applyMap.insert(pair<char*, int> (workName, add));
		}
	}

	return applyMap;
}


Recruitment* ApplyControl::apply(char* name, vector<Member*> mem, GeneralMember* currentMem)
{
	CompanyMember* cm;
	Recruitment* recruitment;

	for (int i = 0; i < mem.size(); i++)
	{
		if (mem[i]->getType() == 1)
		{
			cm = dynamic_cast<CompanyMember*>(mem[i]);

			if (strcmp(cm->getBusinessNum(), name) == 0)
			{
				// (특정 기간에 하나의 회사는 하나의 채용 밖에 못올리므로 채용은 하나만 존재)
				// -> recruitment 벡터의 첫 recruitment만 가져옴
				recruitment = cm->Get_RecruitmentList()[0];
				currentMem->addApplication(recruitment);

				return recruitment;
			}
		}
	}
}

Recruitment* CancelApplication::cancelApply(char* number, GeneralMember* currentMem)
{
	Recruitment* recruitment;

	for (int i = 0; i < currentMem->getApplyList().size(); i++)
	{
		// 사업자 번호 동일
		if (strcmp(currentMem->getApplyList()[i]->getBusinessNum(), number) == 0)
		{
			recruitment = currentMem->getApplyList()[i];
			currentMem->cancelApplication(i);
			return recruitment;
		}
	}

}

vector<Recruitment*> SearchApplication::getApplicationList(GeneralMember* currentMem)
{
	return currentMem->getApplyList();

}