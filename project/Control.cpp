#include "Control.h"

Recruitment * AddRecruitment::Create_Recruitment(CompanyMember *X, char a[], int b, char c[])
{

	Recruitment* recruitment;
	recruitment = (X->Add_Recruitment(a, b, c));

	return recruitment;
}

void SearchRecruitment::Search_Recruitments()
{

}