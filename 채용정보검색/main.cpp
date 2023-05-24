// ��� ����
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>>

#include "Boundary.h"

// ��� ����
#define Max_User 100
#define MAX_STRING 32
#define INPUT_FILE_NAME "inputA.txt"
#define OUTPUT_FILE_NAME "outputA.txt"

// �Լ� ����
void DoTask();
void Program_Exit();

// ���� ����
FILE* in_fp, * out_fp;
// ���� ��ü ������ �迭 ���� 
CompanyMember* companyMembers[Max_User];
CompanyMember* currentMember;
int num = 0;

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    DoTask();

    fclose(in_fp);
    fclose(out_fp);

    return 0;
}



void DoTask()
{

    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);


        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
            switch (menu_level_2)
            {
                // "1.1. ȸ�����ԡ� �޴�
            case 1:
                // ���� Ÿ�� (1) - ȸ�� ȸ��
                int user_type;
                fscanf(in_fp, "%d ", &user_type);

                if (user_type == 1)
                {
                    char name[MAX_STRING], number[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];
                    fscanf(in_fp, "%s %s %s %s", name, number, ID, password);

                    CompanyMember* newMember = new CompanyMember(name, number, ID, password);
                    companyMembers[num] = newMember;

                    fprintf(out_fp, "1.1. ȸ������\n");
                    fprintf(out_fp, "> %s %s %s %s\n",companyMembers[num]->getCompanyName(), companyMembers[num]->getBusinessNum(),companyMembers[num]->getID(), companyMembers[num]->getPassword());
                    num++;
                }
                else
                {
                    // ���� Ÿ�� (2) - �Ϲ� ȸ��
                }
                break;

            case 2:
                // "1.2. ȸ��Ż��" �޴�

                break;

            }
            break;

        case 2:
            switch (menu_level_2)
            {
                case 1:
                    // �α���
                    char ID[MAX_STRING], password[MAX_STRING];
                    fscanf(in_fp, "%s %s", ID, password);

                    for (int i = 0; i <= num; i++)
                    {
                        if (strcmp(companyMembers[i]->getID(), ID) == 0)
                        {
                            if (strcmp(companyMembers[i]->getPassword(), password) == 0)
                            {
                                currentMember = companyMembers[i];

                                fprintf(out_fp, "2.1. �α���\n");
                                fprintf(out_fp, "> %s %s\n", currentMember->getID(), currentMember->getPassword());

                                break;
                            }
                            else
                            {
                                //... ��й�ȣ�� Ʋ���� ���
                            }
                        }
                        else
                        {
                            //... ID�� �������� �ʴ� ���
                        }
                    }
                    break;

                case 2:
                    // �α׾ƿ�
                    fprintf(out_fp, "2.2. �α׾ƿ�\n");
                    fprintf(out_fp, "> %s\n", currentMember->getID());

                    currentMember = NULL;
                    break;
            }
            break;

        case 3:
            switch (menu_level_2)
            {
                // 3.1 ä�� ���� ���
            case 1:     
                AddRecruitmetnUI _add_RecruitmentUI;
                _add_RecruitmentUI.Typing_New_Recruitment(in_fp, out_fp, currentMember);
                break;

                // 3.2 ��ϵ� ä�� ���� ��ȸ
            case 2:
                SearchRecruitmentUI _search_RecruitmentUI;
                -SearchRecruitmentUI.
                break;
            }
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            switch (menu_level_2)
            {
                case 1:
                    is_program_exit = 1;

                    break;

            }
            break;



        }
    }
}




