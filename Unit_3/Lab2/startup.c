
#include <stdint.h>


/*Memory Boundaries*/
extern uint32_t _S_DATA;
extern uint32_t _E_DATA;
extern uint32_t _S_BSS;
extern uint32_t _E_BSS;
extern uint32_t _E_TEXT;
extern uint32_t _STACK_TOP;
/*Function Declarations*/
extern int main(void);
void Reset_Handler(void);
void Default_Handler(void)
{
    Reset_Handler();
}

void NMI_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void H_Fault_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void MM_Fault_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Bus_Fault_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void Usage_Fault_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));


uint32_t vectors[] __attribute__((section(".vectors"))) = {
    (uint32_t) &_STACK_TOP,
    (uint32_t) &Reset_Handler,
    (uint32_t) &NMI_Handler,
    (uint32_t) &H_Fault_Handler,
    (uint32_t) &MM_Fault_Handler,
    (uint32_t) &Bus_Fault_Handler,
    (uint32_t) &Usage_Fault_Handler

};

void Reset_Handler(void)
{
    uint32_t DATA_SIZE = (uint8_t*)&_E_DATA - (uint8_t*)&_S_DATA;
    uint8_t* P_src = (uint8_t*)&_E_TEXT;
    uint8_t* P_dst = (uint8_t*)&_S_DATA;
    /*Copy DATA section from ROM to RAM*/
    for (int i = 0; i < DATA_SIZE; i++)
    {
        *((uint8_t*) P_dst++) = *((uint8_t*)P_src++);
    }
    uint32_t BSS_SIZE = (uint8_t*)&_E_BSS - (uint8_t*)&_S_BSS;
    P_dst = (uint8_t*)&_S_BSS;
    /*Initialize BSS Section in the RAM with 0*/
    for (int i = 0; i < BSS_SIZE; i++)
    {
        *((uint8_t*)P_dst++) = 0;
    }
    /*Jump to Main*/
    main();
}