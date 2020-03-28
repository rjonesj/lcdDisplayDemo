################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Touch/subdir.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include ILI9341/subdir.mk
-include Drivers/STM32F3xx_HAL_Driver/Src/subdir.mk
-include Display/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
DisplayLCDDemo.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
DisplayLCDDemo.list \

OBJCOPY_BIN += \
DisplayLCDDemo.bin \


# All Target
all: DisplayLCDDemo.elf secondary-outputs

# Tool invocations
DisplayLCDDemo.elf: $(OBJS) $(USER_OBJS) C:\Users\jone1\STM32CubeIDE\workspace_1.3.0\LCDDisplayDemo\DisplayLCDDemo\STM32F303VCTX_FLASH.ld
	arm-none-eabi-gcc -o "DisplayLCDDemo.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\jone1\STM32CubeIDE\workspace_1.3.0\LCDDisplayDemo\DisplayLCDDemo\STM32F303VCTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="DisplayLCDDemo.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

DisplayLCDDemo.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "DisplayLCDDemo.list"
	@echo 'Finished building: $@'
	@echo ' '

DisplayLCDDemo.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "DisplayLCDDemo.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
