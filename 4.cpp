#include <cstring>
void fitness_mamber() {
	

//ȸ�� ������ ���� ������
	enum {
		normal = 0,
		spining,
		PT,
		pilates
	};
//ȸ���� ���������� ������ 3���� �迭
	char member[4][10][10];
	
//ȸ�� �̸�
	char normal_name[10];
	strcpy(&normal_name[0], "������");
	char spining_name[10];
	strcpy(&spining_name[0], "Ȳ����");
	char PT_name[10];
	strcpy(&PT_name[0], "�̼���");
	char pilates_name[10];
	strcpy(&pilates_name[0], "�輺��");
	
//ȸ�� �ڵ��� ��ȣ
	char normal_hpnumber[10];
	strcpy(&normal_hpnumber[0], "01040248406");
	char spining_hpnumber[10];
	strcpy(&spining_hpnumber[0], "01025961092");
	char PT_hpnumber[10];
	strcpy(&PT_hpnumber[0], "01041121741");
	char pilates_hpnumber[10];
	strcpy(&pilates_hpnumber[0], "01085200258");

//ȸ�� ����
	char normal_gender[10];
	strcpy(&normal_gender[0], "����");
	char spining_gender[10];
	strcpy(&spining_gender[0], "����");
	char PT_gender[10];
	strcpy(&PT_gender[0], "����");
	char pilates_gender[10];
	strcpy(&pilates_gender[0], "����");

//Ư���� ��������
	char spining_week[10];
	strcpy(&spining_week[0], "������");
	char PT_week[10];
	strcpy(&PT_week[0], "������");
	char pilates_week[10];
	strcpy(&pilates_week[0], "�����");

//Ư���� ��� Ʈ���̳�
	char trainer[4];
	strcpy(&trainer[0], "����ȣ,�̵���,������,����");
	strcpy(&trainer[1], "����ȣ");
	strcpy(&trainer[2], "�̵���");
	strcpy(&trainer[3], "������");

//ȸ���� ���� ����
	int normal_start[10] = {180206};
	int spining_start[10] = {190613};
	int PT_start[10] = {200531};
	int pilates_start[10] = {190122};

//ȸ���� ���� ����
	int normal_end[10] = {230706};
	int spining_end[10] = { 241213 };
	int PT_end[10] = { 250331 };
	int pilates_end[10] = { 230322 };

//��� �뿩 ����
	bool normal_cloths[10] = {true};
	bool spining_cloths[10] = {false};
	bool PT_cloths[10] = {false};
	bool pilates_cloths[10] = {true};

//��Ŀ ��뿩��
	bool normal_locker[10] = { false };
	bool spining_locker[10] = {false};
	bool PT_locker[10] = {true};
	bool pilates_locker[10] = {true};


	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			for (int j = 0; j < 9; j++) {
				member[normal][j][0] = normal_name[j];
				member[normal][j][1] = normal_hpnumber[j];
				member[normal][j][2] = normal_gender[j];
				member[normal][j][3] = normal_start[j];
				member[normal][j][4] = normal_end[j];
				member[normal][j][5] = normal_cloths[j];
				member[normal][j][6] = normal_locker[j];
			}
		}
		if (i == 1) {
			for (int j = 0; j < 9; j++) {
				member[spining][j][0] = spining_name[j];
				member[spining][j][1] = spining_hpnumber[j];
				member[spining][j][2] = spining_gender[j];
				member[spining][j][3] = spining_start[j];
				member[spining][j][4] = spining_end[j];
				member[spining][j][5] = spining_cloths[j];
				member[spining][j][6] = spining_locker[j];
				member[spining][j][7] = spining_week[j];
				member[spining][j][8] = trainer[j];
			}
		}
		if (i == 2) {
			for (int j = 0; j < 9; j++) {
				member[PT][j][0] = PT_name[j];
				member[PT][j][1] = PT_hpnumber[j];
				member[PT][j][2] = PT_gender[j];
				member[PT][j][3] = PT_start[j];
				member[PT][j][4] = PT_end[j];
				member[PT][j][5] = PT_cloths[j];
				member[PT][j][6] = PT_locker[j];
				member[PT][j][7] = PT_week[j];
				member[PT][j][8] = trainer[j];
			}
		}
		if (i == 3) {
			for (int j = 0; j < 9; j++) {
				member[pilates][j][0] = pilates_name[j];
				member[pilates][j][1] = pilates_hpnumber[j];
				member[pilates][j][2] = pilates_gender[j];
				member[pilates][j][3] = pilates_start[j];
				member[pilates][j][4] = pilates_end[j];
				member[pilates][j][5] = pilates_cloths[j];
				member[pilates][j][5] = pilates_locker[j];
				member[pilates][j][7] = pilates_week[j];
				member[pilates][j][8] = trainer[j];
			}
		}
	}
