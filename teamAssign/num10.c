	#include <stdio.h>

	int calcFee();
	int time_to_minutes(int hour, int min); // 시간과 분을 받아서 총 분으로 변환
	void calculate_usage_time(); // 총 사용 시간을 계산
	int calculate_net_fee(); // 부가세 제외 요금 계산
	int vat; // 부가세
	int entryHour, entryMin, tenmin, endHour, endMin; // 시작 시간, 종료 시간, 10분당 요금
	float total_usage_minutes; // 총 사용 시간
	int net_fee, totalFee; // 부가세 제외 요금, 총 요금

	int main() {

		calcFee();
		return 0;
	}

	int time_to_minutes(int hour, int min) {
		return (hour * 60) + min;
	}


	void calculate_usage_time() {

		int entry_total_min = time_to_minutes(entryHour, entryMin);
		int exit_total_min = time_to_minutes(endHour, endMin);

		total_usage_minutes = exit_total_min - entry_total_min;
	}

	int calculate_net_fee() {
		int minutes_per_unit = 10;

		int billed_units = (total_usage_minutes + minutes_per_unit - 1) / minutes_per_unit;

		net_fee = billed_units * tenmin;

		return net_fee;
	}

	int calculate_vat(int amount) {
		vat = (int)(amount * 0.1 + 0.5);
		return vat;
	}

	int calcFee()
	{
		printf("당구 사용요금 계산 program\n");

		printf("시작 시간 입력(시간, 분) : ");
		scanf_s("%d %d", &entryHour, &entryMin);

		printf("종료 시간 입력(시간, 분) : ");
		scanf_s("%d %d", &endHour, &endMin);

		printf("10분당 이용 금액(원) : ");
		scanf_s("%d", &tenmin);

		calculate_usage_time();
		int net = calculate_net_fee();
		int vat = calculate_vat(net);

	    totalFee = net + vat;

		printf("전체 사용 시간: %.1f 분\n", total_usage_minutes);
		printf("전체 사용 금액: %.1f * %d원 + 부가세(%d원)\n", total_usage_minutes / 10, tenmin, vat);
		printf("지불할 금액 : %d원\n", totalFee);

		return 0;
	}

