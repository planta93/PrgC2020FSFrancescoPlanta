################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"/home/francesco/ti/ccs930/ccs/tools/compiler/ti-cgt-msp430_18.12.4.LTS/bin/cl430" -vmspx --use_hw_mpy=none --include_path="/home/francesco/ti/ccs930/ccs/ccs_base/msp430/include" --include_path="/home/francesco/PrgC2020FSFrancescoPlanta/02_MSP430/BootCounter" --include_path="/home/francesco/ti/ccs930/ccs/tools/compiler/ti-cgt-msp430_18.12.4.LTS/include" --advice:power=all --advice:hw_config=all --define=__MSP430FR4133__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '


