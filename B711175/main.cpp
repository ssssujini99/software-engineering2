// ��� ����
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "JoinUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "WithdrawUI.h"
#include "Boundary.h"

// ��� ����
#define Max_User 100
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

JoinUI joinUI;
LoginUI loginUI;
LogoutUI logoutUI;
WithdrawUI withdrawUI;

// �Լ� ����
void DoTask();
void Program_Exit();

// ���� ����    
FILE* in_fp, * out_fp;

// Member ��ü ������ ���� ���� 
vector<Member*> memberList;
Member* member;

// �α����� ȸ�� ����
GeneralMember* generalMember;
CompanyMember* companyMember;


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
                member = joinUI.startInterface(in_fp, out_fp, memberList);
                break;

            case 2:
                // "1.2. ȸ��Ż��" �޴�
                withdrawUI.startInterface(in_fp, out_fp, member, memberList);
                break;
            }
            break;

        case 2:
            switch (menu_level_2)
            {
                case 1:
                    // 2.1. �α��� ( Ÿ�Կ� ���� ȸ��, �Ϲ� �и� )
                    member = loginUI.startInterface(in_fp, out_fp, memberList);
                    if (member->getType() == 1)
                        companyMember = dynamic_cast<CompanyMember*>(member);
                    else
                        generalMember = dynamic_cast<GeneralMember*>(member);
                    break;

                case 2:
                    // 2.2. �α׾ƿ�
                    logoutUI.startInterface(out_fp, member, memberList);
                    companyMember = NULL;
                    generalMember = NULL;
                    break;
            }
            break;

        case 3:
            switch (menu_level_2)
            {
                // 3.1. ä�� ���� ���
            case 1:     
                AddRecruitmetnUI _add_RecruitmentUI;
                _add_RecruitmentUI.Typing_New_Recruitment(in_fp, out_fp, companyMember);
                break;

                // 3.2. ��ϵ� ä�� ���� ��ȸ
            case 2:
                
                CheckRecruitmentUI _check_RecruitmentUI;
                _check_RecruitmentUI.Check_Recruitments(out_fp, companyMember);
                
                break;
            }
            break;

        case 4:
            switch (menu_level_2)
            {
                // 4.1. ä�� ���� �˻�
            case 1:
                SearchRecruitmentInfoUI searchRecruitmentUI;
                searchRecruitmentUI.selectCompany(in_fp, out_fp, memberList);
                break;

                // 4.2. ä�� ����
            case 2: 
                ApplyUI applyUI;
                applyUI.clickApply(in_fp, out_fp, memberList, generalMember);
                break;

                // 4.3. ���� ���� �˻�
            case 3:
                SearchApplicationUI searchApplicationUI;
                searchApplicationUI.searchApply(out_fp, generalMember);
                break;

                // 4.4. ���� ���
            case 4:
                CancelApplicationUI cancelApplicationUI;
                cancelApplicationUI.clickCancelApplication(in_fp, out_fp, generalMember);
                break;
            }
            break;

        case 5:
            switch (menu_level_2)
            {
            case 1:
                // 5.1. ä�� or ���� ���� ���

                // ȸ��ȸ���� ä�� ���� ���
                if (companyMember != NULL && generalMember == NULL) 
                { 
                    StatisticRecruitmentInfoUI statisticRecruitmentInfoUI;
                    statisticRecruitmentInfoUI.recruitmentStatistic(out_fp, companyMember);
                }
                // �Ϲ�ȸ���� �������� ���
                else if(companyMember == NULL && generalMember != NULL)
                {
                    StatisticApplicationInfoUI statisticApplicationInfoUI;
                    statisticApplicationInfoUI.applicationStatistic(out_fp, generalMember);
                }
                break;
            }
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




