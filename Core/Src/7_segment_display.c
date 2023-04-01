#include "7_segment_display.h"

typedef enum{
	Display_Min1,
	Display_Min10,
	Display_Hrs1,
	Display_Hrs10
}display;

void display_init(void){
	display_clear_all();
	HAL_GPIO_WritePin(GPIOB,Display_Hrs10_E_Pin|
							Display_Hrs10_F_Pin,GPIO_PIN_RESET);

	HAL_GPIO_WritePin(GPIOB,Display_Hrs1_G_Pin|
							Display_Hrs1_E_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA,Display_Hrs1_C_Pin,GPIO_PIN_RESET);

	HAL_GPIO_WritePin(GPIOA,Display_Min10_E_Pin|
							Display_Min10_F_Pin,GPIO_PIN_RESET);

	HAL_GPIO_WritePin(GPIOB,Display_Min1_G_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA,Display_Min1_D_Pin|
							Display_Min1_E_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC,Display_Min1_F_Pin,GPIO_PIN_RESET);
}

void display_clear(display which_display){
	if(which_display == Display_Min1 )
	{
		HAL_GPIO_WritePin(GPIOB,Display_Min1_A_Pin|
								Display_Min1_B_Pin|
								Display_Min1_G_Pin,	GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,Display_Min1_C_Pin|
								Display_Min1_D_Pin|
								Display_Min1_E_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOC,Display_Min1_F_Pin,GPIO_PIN_SET);
		return;
	}

	if(which_display == Display_Min10 ){
		HAL_GPIO_WritePin(GPIOB,Display_Min10_B_Pin|
								Display_Min10_A_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,Display_Min10_C_Pin|
								Display_Min10_F_Pin|
								Display_Min10_G_Pin|
								Display_Min10_D_Pin|
								Display_Min10_E_Pin,GPIO_PIN_SET);
		return;
	}

	if(which_display == Display_Hrs1 ){
		HAL_GPIO_WritePin(GPIOB,Display_Hrs1_E_Pin|
								Display_Hrs1_G_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,Display_Hrs1_A_Pin|
								Display_Hrs1_B_Pin|
								Display_Hrs1_F_Pin|
								Display_Hrs1_C_Pin|
								Display_Hrs1_D_Pin,GPIO_PIN_SET);
		return;
	}

	if(which_display == Display_Hrs10 ){
		HAL_GPIO_WritePin(GPIOB,Display_Hrs10_A_Pin|
								Display_Hrs10_B_Pin|
								Display_Hrs10_C_Pin|
								Display_Hrs10_D_Pin|
								Display_Hrs10_E_Pin|
								Display_Hrs10_F_Pin|
								Display_Hrs10_G_Pin,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB,Display_Hrs10_G_Pin,GPIO_PIN_SET);
		return;
	}
}

void display_clear_all(void){
	display_clear(Display_Min1);
	display_clear(Display_Min10);
	display_clear(Display_Hrs1);
	display_clear(Display_Hrs10);
}

void display_Min1(uint8_t num){
	display_clear(Display_Min1);
	switch(num){
		case 0:
			HAL_GPIO_WritePin(GPIOB,Display_Min1_B_Pin|
									Display_Min1_A_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min1_C_Pin|
									Display_Min1_D_Pin|
									Display_Min1_E_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOC,Display_Min1_F_Pin,GPIO_PIN_RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB,Display_Min1_B_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min1_C_Pin,GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB,Display_Min1_A_Pin|
									Display_Min1_B_Pin|
									Display_Min1_G_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min1_E_Pin|
									Display_Min1_D_Pin,GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB,Display_Min1_A_Pin|
									Display_Min1_B_Pin|
									Display_Min1_G_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min1_C_Pin|
									Display_Min1_D_Pin,GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB,Display_Min1_B_Pin|
									Display_Min1_G_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min1_C_Pin,	GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOC,Display_Min1_F_Pin,GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB,Display_Min1_A_Pin|
									Display_Min1_G_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min1_C_Pin|
									Display_Min1_D_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOC,Display_Min1_F_Pin,GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB,Display_Min1_A_Pin|
									Display_Min1_G_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min1_C_Pin|
									Display_Min1_D_Pin|Display_Min1_E_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOC,Display_Min1_F_Pin,GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB,Display_Min1_B_Pin|
									Display_Min1_A_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min1_C_Pin,GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB,Display_Min1_B_Pin|
									Display_Min1_A_Pin|
									Display_Min1_G_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min1_C_Pin|
									Display_Min1_D_Pin|
									Display_Min1_E_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOC,Display_Min1_F_Pin,GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB,Display_Min1_B_Pin|
									Display_Min1_A_Pin|
									Display_Min1_G_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min1_C_Pin|
									Display_Min1_D_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOC,Display_Min1_F_Pin,GPIO_PIN_RESET);
			break;
	}
}

void display_Min10(uint8_t num){
	display_clear(Display_Min10);
	switch(num){
		case 0:
			HAL_GPIO_WritePin(GPIOB,Display_Min10_B_Pin|
									Display_Min10_A_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min10_F_Pin|
									Display_Min10_C_Pin|
									Display_Min10_D_Pin|
									Display_Min10_E_Pin,GPIO_PIN_RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB,Display_Min10_B_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min10_C_Pin,GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB,Display_Min10_A_Pin|
									Display_Min10_B_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min10_G_Pin|
									Display_Min10_E_Pin|
									Display_Min10_D_Pin,GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB,Display_Min10_A_Pin|
									Display_Min10_B_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min10_G_Pin|
									Display_Min10_C_Pin|
									Display_Min10_D_Pin,GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB,Display_Min10_B_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min10_G_Pin|
									Display_Min10_F_Pin|
									Display_Min10_C_Pin,	GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB,Display_Min10_A_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min10_G_Pin|
									Display_Min10_F_Pin|
									Display_Min10_C_Pin|
									Display_Min10_D_Pin,GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB,Display_Min10_A_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min10_G_Pin|
									Display_Min10_F_Pin|
									Display_Min10_C_Pin|
									Display_Min10_D_Pin|
									Display_Min10_E_Pin,GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB,Display_Min10_B_Pin|
									Display_Min10_A_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min10_C_Pin,GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB,Display_Min10_B_Pin|
									Display_Min10_A_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min10_G_Pin|
									Display_Min10_F_Pin|
									Display_Min10_C_Pin|
									Display_Min10_D_Pin|
									Display_Min10_E_Pin,GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB,Display_Min10_B_Pin|
									Display_Min10_A_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Min10_G_Pin|
									Display_Min10_F_Pin|
									Display_Min10_C_Pin|
									Display_Min10_D_Pin,GPIO_PIN_RESET);
			break;
	}

}

void display_Hrs1(uint8_t num){
	display_clear(Display_Hrs1);
	switch(num){
		case 0:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs1_E_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Hrs1_B_Pin|
									Display_Hrs1_F_Pin|
									Display_Hrs1_A_Pin|
									Display_Hrs1_C_Pin|
									Display_Hrs1_D_Pin,GPIO_PIN_RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA,Display_Hrs1_B_Pin|
									Display_Hrs1_C_Pin,GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA,Display_Hrs1_A_Pin|
									Display_Hrs1_B_Pin|
									Display_Hrs1_D_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB,Display_Hrs1_E_Pin|
									Display_Hrs1_G_Pin,GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA,Display_Hrs1_A_Pin|
									Display_Hrs1_C_Pin|
									Display_Hrs1_D_Pin|
									Display_Hrs1_B_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB,Display_Hrs1_G_Pin,GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs1_G_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Hrs1_F_Pin|
									Display_Hrs1_C_Pin|
									Display_Hrs1_B_Pin,GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs1_G_Pin	,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Hrs1_A_Pin|
									Display_Hrs1_F_Pin|
									Display_Hrs1_C_Pin|
									Display_Hrs1_D_Pin,GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs1_E_Pin|
									Display_Hrs1_G_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Hrs1_C_Pin|
									Display_Hrs1_A_Pin|
									Display_Hrs1_D_Pin|
									Display_Hrs1_F_Pin,GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA,Display_Hrs1_B_Pin|
									Display_Hrs1_A_Pin|
									Display_Hrs1_C_Pin,GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs1_G_Pin|
									Display_Hrs1_E_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Hrs1_F_Pin|
									Display_Hrs1_B_Pin|
									Display_Hrs1_A_Pin|
									Display_Hrs1_C_Pin|
									Display_Hrs1_D_Pin,GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs1_G_Pin,GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA,Display_Hrs1_F_Pin|
									Display_Hrs1_B_Pin|
									Display_Hrs1_A_Pin|
									Display_Hrs1_C_Pin|
									Display_Hrs1_D_Pin,GPIO_PIN_RESET);
			break;

	}
}

void display_Hrs10(uint8_t num){
	display_clear(Display_Hrs10);
	switch(num){
		case 0:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs10_B_Pin|
									Display_Hrs10_A_Pin|
									Display_Hrs10_C_Pin|
									Display_Hrs10_D_Pin|
									Display_Hrs10_E_Pin|
									Display_Hrs10_F_Pin,GPIO_PIN_RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs10_B_Pin|
									Display_Hrs10_C_Pin,GPIO_PIN_RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs10_A_Pin|
									Display_Hrs10_B_Pin|
									Display_Hrs10_E_Pin|
									Display_Hrs10_D_Pin|
									Display_Hrs10_G_Pin,GPIO_PIN_RESET);

			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs10_A_Pin|
									Display_Hrs10_B_Pin|
									Display_Hrs10_G_Pin|
									Display_Hrs10_C_Pin|
									Display_Hrs10_D_Pin,GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs10_G_Pin|
									Display_Hrs10_F_Pin|
									Display_Hrs10_C_Pin|
									Display_Hrs10_B_Pin,GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs10_G_Pin|
									Display_Hrs10_A_Pin|
									Display_Hrs10_F_Pin|
									Display_Hrs10_C_Pin|
									Display_Hrs10_D_Pin,GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs10_E_Pin|
									Display_Hrs10_G_Pin|
									Display_Hrs10_C_Pin|
									Display_Hrs10_A_Pin|
									Display_Hrs10_D_Pin|
									Display_Hrs10_F_Pin,GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs10_B_Pin|
									Display_Hrs10_A_Pin|
									Display_Hrs10_C_Pin,GPIO_PIN_RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs10_E_Pin|
									Display_Hrs10_F_Pin|
									Display_Hrs10_G_Pin|
									Display_Hrs10_B_Pin|
									Display_Hrs10_A_Pin|
									Display_Hrs10_C_Pin|
									Display_Hrs10_D_Pin,GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB,Display_Hrs10_G_Pin|
									Display_Hrs10_F_Pin|
									Display_Hrs10_B_Pin|
									Display_Hrs10_A_Pin|
									Display_Hrs10_C_Pin|
									Display_Hrs10_D_Pin,GPIO_PIN_RESET);
			break;
	}
}

void Set_hour(uint8_t Hrs , uint8_t Min){
	if(Hrs<24 && Min<60){
		display_Hrs10(Hrs/10);
		display_Hrs1(Hrs%10);
		display_Min10(Min/10);
		display_Min1(Min%10);
	}
}
