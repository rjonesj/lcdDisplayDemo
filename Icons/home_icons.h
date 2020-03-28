#include "stm32f3xx_hal.h"
#include "icons_config.h"

const unsigned int home_icon_60x60[] = {
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,
		B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,
		B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,
		B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,
		B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,
		B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,
		B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,
		W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B

};

const unsigned int home_icon_40x40[] = {
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,
		B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,
		B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,
		B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,
		B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,
		B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,
		B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,
		W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,W,W,W,B,B,B,B,W,W,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,W,W,W,B,B,B,B,W,W,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,W,W,W,B,B,B,B,W,W,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,W,W,W,B,B,B,B,W,W,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,W,W,W,B,B,B,B,W,W,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,
		B,B,B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,B,B,
};


const unsigned int home_icon_20x20[20*20] = {
		B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,W,B,B,W,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,W,B,B,B,B,W,B,B,B,B,B,B,B,
		B,B,B,B,B,B,W,B,B,B,B,B,B,W,B,B,B,B,B,B,
		B,B,B,B,B,W,B,B,B,B,B,B,B,B,W,B,B,B,B,B,
		B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,W,B,B,B,B,
		B,B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,B,
		B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,B,
		B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,B,
		W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,
		B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,
		B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,
		B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,
		B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,
		B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,
		B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,
		B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,
		B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,
		B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B,
		B,B,B,W,W,W,W,W,W,W,W,W,W,W,W,W,W,B,B,B
};
