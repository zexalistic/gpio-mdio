################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../component/uart/vusart_adapter.c 

OBJS += \
./component/uart/vusart_adapter.o 

C_DEPS += \
./component/uart/vusart_adapter.d 


# Each subdirectory must supply rules for building sources it contributes
component/uart/%.o: ../component/uart/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_LPC54102J512BD64 -DCPU_LPC54102J512BD64_cm4 -D__LPC5410X__ -DCORE_M4 -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\lyihao\Documents\MCUXpressoIDE_11.4.1_6260\workspace\LPC54102_mdio_clean\board" -I"C:\Users\lyihao\Documents\MCUXpressoIDE_11.4.1_6260\workspace\LPC54102_mdio_clean\source" -I"C:\Users\lyihao\Documents\MCUXpressoIDE_11.4.1_6260\workspace\LPC54102_mdio_clean" -I"C:\Users\lyihao\Documents\MCUXpressoIDE_11.4.1_6260\workspace\LPC54102_mdio_clean\drivers" -I"C:\Users\lyihao\Documents\MCUXpressoIDE_11.4.1_6260\workspace\LPC54102_mdio_clean\component\serial_manager" -I"C:\Users\lyihao\Documents\MCUXpressoIDE_11.4.1_6260\workspace\LPC54102_mdio_clean\utilities" -I"C:\Users\lyihao\Documents\MCUXpressoIDE_11.4.1_6260\workspace\LPC54102_mdio_clean\component\uart" -I"C:\Users\lyihao\Documents\MCUXpressoIDE_11.4.1_6260\workspace\LPC54102_mdio_clean\component\lists" -I"C:\Users\lyihao\Documents\MCUXpressoIDE_11.4.1_6260\workspace\LPC54102_mdio_clean\startup" -I"C:\Users\lyihao\Documents\MCUXpressoIDE_11.4.1_6260\workspace\LPC54102_mdio_clean\CMSIS" -I"C:\Users\lyihao\Documents\MCUXpressoIDE_11.4.1_6260\workspace\LPC54102_mdio_clean\device" -I"C:\Users\lyihao\Documents\MCUXpressoIDE_11.4.1_6260\workspace\LPC54102_mdio_clean\board\boards" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


