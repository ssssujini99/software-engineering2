#include "Boundary.h"

void AddRecruitmetnUI::Typing_New_Recruitment(FILE * input_File, FILE * output_File, CompanyMember* mem)
{
	AddRecruitment add_Recruitment;
	Recruitment* recruitment;

	char work[MAX_STRING];
	char deadline[MAX_STRING];
	int num_Of_People;

	// �� �Է�
	fscanf(input_File, "%s %d %s", work, &num_Of_People, deadline);

	// �Է� �� ���� �� ���� ���
	recruitment = add_Recruitment.Create_Recruitment(mem, work, num_Of_People, deadline);
	fprintf(output_File, "3.1. ä���������\n");
	fprintf(output_File, "%s %d %s", recruitment->getWork(), recruitment->getNumber(), recruitment->getDeadline());
}

void SearchRecruitmentUI::Search_Recruitments(FILE* input_File, FILE* output_File, CompanyMember* mem)
{
	SearchRecruitment search_Recruitment;
	Recruitment* recruitments[] = 

	recruitment = add_Recruitment.Create_Recruitment(mem, work, num_Of_People, deadline);
	fprintf(output_File, "3.1. ä��������ȸ\n");
	for(int i = 0;)
	fprintf(output_File, "%s %d %s", recruitment->getWork(), recruitment->getNumber(), recruitment->getDeadline());
}