/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        @file: main.c
 *       @author: Ahmed Maher
 *        @brief: Toggle LED on STM MCU
 *      @details:
 *
 * 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <stdint.h>
/**********************************************************************************************************************
 *  GLOBAL DATA TYPES DECLARATION
 *********************************************************************************************************************/
typedef volatile unsigned int vuint32_t;
typedef union 
{
    /* data */
    vuint32_t REG;
    struct 
    {
        /* data */
        vuint32_t reserved:13;
        vuint32_t P13:1;
    }pin;
} R_ODR_t;
/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT / FUNCTION-LIKE MACROS
*********************************************************************************************************************/
#define RCC_BASE        0x40021000
#define GPIOA_BASE      0x40010800
#define RCC_APB2ENR     *(vuint32_t *)(RCC_BASE + 0x18)
#define GPIOA_CRH       *(vuint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR       *(vuint32_t *)(GPIOA_BASE + 0x0C)  
#define RCC_IOPAEN      (1<<2)
#define PIN13           (1UL<<13) 
/**********************************************************************************************************************
 *  LOCAL (STATIC) DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
volatile R_ODR_t * R_ODR = (volatile R_ODR_t *)(GPIOA_BASE + 0x0C);
uint8_t g_var[] = {4, 4, 2};
uint8_t const const_g_var[] = {4, 3, 3};
/**********************************************************************************************************************
 *  LOCAL (STATIC) FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL (STATIC) FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
int main()
{
    RCC_APB2ENR |= RCC_IOPAEN;
    GPIOA_CRH &= 0xFF0FFFFF;
    GPIOA_CRH |= 0x00200000;
    while(1)
    {
        R_ODR->pin.P13 = 1;
        for(int i = 0; i < 5000; i++);
        R_ODR->pin.P13 = 0;
        for(int i = 0; i < 5000; i++);
    }
}
/**********************************************************************************************************************
 *  ISR
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  END OF FILE: 
 *********************************************************************************************************************/