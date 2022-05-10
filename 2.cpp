#include <cstring>
void fitness_mamber() {
	char member[4][10][10];
	char normal_name[10];
	strcpy(&normal_name[0], "원종찬");
	strcpy(&normal_name[1], "유영준");
	strcpy(&normal_name[2], "김훈주");
	char spining_name[10];
	strcpy(&spining_name[0], "황영민");
	strcpy(&spining_name[1], "이용주");
	strcpy(&spining_name[2], "이수빈");
	char PT_name[10];
	strcpy(&PT_name[0], "손병성");
	strcpy(&PT_name[1], "안시현");
	strcpy(&PT_name[2], "임영주");
	char pilates_name[10];
	strcpy(&pilates_name[0], "김성진");
	strcpy(&pilates_name[1], "신재효");


	char normal_hpnumber[10];
	strcpy(&normal_hpnumber[0], "01040248406");
	strcpy(&normal_hpnumber[1], "01063439461");
	strcpy(&normal_hpnumber[2], "01041887215");
	char spining_hpnumber[10];
	strcpy(&spining_hpnumber[0], "01025961092");
	strcpy(&spining_hpnumber[1], "01085111387");
	strcpy(&spining_hpnumber[2], "01085534147");
	char PT_hpnumber[10];
	strcpy(&PT_hpnumber[0], "01064329688");
	strcpy(&PT_hpnumber[1], "01099392169");
	strcpy(&PT_hpnumber[2], "01041121741");
	char  pilates_hpnumber[10];
	strcpy(&PT_hpnumber[0], "01074100147");
	strcpy(&PT_hpnumber[1], "01085200258");


	char normal_gender[10];
	strcpy(&normal_gender[0], "남자");
	strcpy(&normal_gender[1], "남자");
	strcpy(&normal_gender[2], "남자");
	char spining_gender[10];
	strcpy(&spining_gender[0], "남자");
	strcpy(&spining_gender[1], "남자");
	strcpy(&spining_gender[2], "여자");
	char PT_gender[10];
	strcpy(&PT_gender[0], "남자");
	strcpy(&PT_gender[1], "여자");
	strcpy(&PT_gender[2], "여자");
	char pilates_gender[10];
	strcpy(&pilates_gender[0], "남자");
	strcpy(&pilates_gender[1], "남자");


	char normal_start[10];
	strcpy(&normal_start[0], "18.02.06");
	strcpy(&normal_start[1], "18.03.25");
	strcpy(&normal_start[2], "19.05.16");
	char spining_start[10];
	strcpy(&spining_start[0], "19.06.13");
	strcpy(&spining_start[1], "19.08.12");
	strcpy(&spining_start[2], "19.12.24");
	char PT_start[10];
	strcpy(&PT_start[0], "20.05.31");
	strcpy(&PT_start[1], "21.06.22");
	strcpy(&PT_start[2], "22.01.01");
	char pilates_start[10];
	strcpy(&pilates_start[0], "19.01.22");
	strcpy(&pilates_start[1], "21.01.09");


	char normal_end[10];
	strcpy(&normal_end[0], "23.07.06");
	strcpy(&normal_end[1], "23.09.25");
	strcpy(&normal_end[2], "24.10.16");
	char spining_end[10];
	strcpy(&spining_end[0], "24.12.13");
	strcpy(&spining_end[1], "24.07.12");
	strcpy(&spining_end[2], "24.01.24");
	char PT_end[10];
	strcpy(&PT_end[0], "25.03.31");
	strcpy(&PT_end[1], "25.04.22");
	strcpy(&PT_end[2], "25.12.01");
	char pilates_end[10];
	strcpy(&pilates_end[0], "23.03.22");
	strcpy(&pilates_end[1], "25.12.09");


	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			for (int j = 0; j < 9; j++) {
				member[0][j][0] = normal_name[j];
				member[0][j][1] = normal_hpnumber[j];
				member[0][j][2] = normal_gender[j];
				member[0][j][3] = normal_start[j];
				member[0][j][4] = normal_end[j];
			}
		}
		if (i == 1) {
			for (int j = 0; j < 9; j++) {
				member[0][j][0] = spining_name[j];
				member[0][j][1] = spining_hpnumber[j];
				member[0][j][2] = spining_gender[j];
				member[0][j][3] = spining_start[j];
				member[0][j][4] = spining_end[j];
			}
		}
		if (i == 2) {
			for (int j = 0; j < 9; j++) {
				member[0][j][0] = PT_name[j];
				member[0][j][1] = PT_hpnumber[j];
				member[0][j][2] = PT_gender[j];
				member[0][j][3] = PT_start[j];
				member[0][j][4] = PT_end[j];
			}
		}
		if (i == 3) {
			for (int j = 0; j < 9; j++) {
				member[0][j][0] = pilates_name[j];
				member[0][j][1] = pilates_hpnumber[j];
				member[0][j][2] = pilates_gender[j];
				member[0][j][3] = pilates_start[j];
				member[0][j][4] = pilates_end[j];
			}
		}



	










	}
