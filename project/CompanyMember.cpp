#include "CompanyMember.h"

Recruitment * CompanyMember::Add_Recruitment(char work[], int number, char deadline[])
{
	Recruitment * recruitment = new Recruitment(companyName, work, number, deadline);
	recuruitments[num_Recruitment] = recruitment;
	num_Recruitment++; // ���� �� �ε��� ����

	return recruitment;
}

Recruitment* CompanyMember::Get_RecruitmentList()
{
	for (int i = 0; i < num_Recruitment; i++)
	{

	}
}
