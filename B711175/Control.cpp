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
	// ä�� ���� ���� ����
	vector<Recruitment*> recruitment = mem->Get_RecruitmentList();

	for (int i = 0; i < recruitment.size(); i++)
	{
		char workName[MAX_STRING];
		strcpy(workName, recruitment[i]->getWork());

		// map�� Ű���� �����Ѵٸ� �� 1 ����
		if (recruitMap.count(workName) != 0)
		{
			recruitMap[workName] += recruitment[i]->getApplicantNum();
		}
		// map�� Ű���� ���ٸ� �� ���ο� �� �߰� <�����̸�, 1(����Ƚ��)>
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
	// ���� ���� ���� ����
	vector<Recruitment*> recruitment = mem->getApplyList();
	int add = 1;

	for (int i = 0; i < recruitment.size(); i++)
	{
		char workName[MAX_STRING];
		strcpy(workName,recruitment[i]->getWork());

		// map�� Ű���� �����Ѵٸ� �� 1 ����
		if (applyMap.count(workName) != 0)
		{
			applyMap[workName] += add;
		}
		// map�� Ű���� ���ٸ� �� ���ο� �� �߰� <�����̸�, 1(����Ƚ��)>
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
				// (Ư�� �Ⱓ�� �ϳ��� ȸ��� �ϳ��� ä�� �ۿ� ���ø��Ƿ� ä���� �ϳ��� ����)
				// -> recruitment ������ ù recruitment�� ������
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
		// ����� ��ȣ ����
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