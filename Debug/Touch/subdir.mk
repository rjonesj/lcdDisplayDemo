################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Touch/Touch.c 

OBJS += \
./Touch/Touch.o 

C_DEPS += \
./Touch/Touch.d 


# Each subdirectory must supply rules for building sources it contributes
Touch/Touch.o: ../Touch/Touch.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F303xC -DDEBUG -c -I../Inc -I../Drivers/CMSIS/Include -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../ILI9341 -I../Display -I../Icons -I../Images -I../Touch -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Touch/Touch.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

