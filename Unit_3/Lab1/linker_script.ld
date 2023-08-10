

ENTRY(reset)	  /* informs the debugger with the first section to execute */
MEMORY  /* define memories on SoC and MCU */
{
	Mem (rwx) : ORIGIN = 0x00000000, LENGTH = 64M 
}
SECTIONS
{
	/* makes the locator point to the following address */
	. = 0x10000;
	/* defines startup section and adds to it .text section in startup object */
	.startup . : 
	{
		startup.o(.text)
	}> Mem
	.text :
	{
		*(.text) *(.rodata)
	}> Mem
	.data :
	{
		*(.data)
	}> Mem
	.bss :
	{
		*(.bss) *(COMMON)
	}> Mem
	. = . + 0x1000; /*reserve 4KB of Stack Memory*/
	stack_top = .;
}