# include<LPC21XX.h>
# define eint1 1<<15//p0.3
# define irq_enable 1<<5
void isr1(void) __irq
{
	EXTINT=0x01;
	VICVectAddr=0;
}
void interrupt_configure(void)
{
	VICIntSelect=0;
	VICVectCntl0=(irq_enable|14);
	VICVectAddr0=(int)isr1;
	VICVectCntl1=(irq_enable|15);
}
void interrupt_init(void)
{
	unsigned count =0;
	PINSEL1 =0x01;
	PINSEL0=0x20000000;
	interrupt_configure();
	EXTMODE=0x03;
	EXTPOLAR=0x00;
	VICIntEnable=eint1;
	while(1)
	{
		count++;
	}
}

