#include<msp430g2553.h>


void mysound(float f, int duration)
{
	int i;
	for(i=0;i<duration;i++)
	{
	TACCR0 = (1000000/f) -1;
	TACCR1 = (1000000/f)/2;
	}
}

void mynosound(int duration)
{
	int i;
	TACCR0 = 0;
	for(i=0;i<duration;i++)
	{
	}
}
 void main()
{

	 WDTCTL = WDTPW + WDTHOLD;

	 if(CALBC1_1MHZ == 0xFF || CALDCO_1MHZ == 0xFF)
	 {while(1);}


	 BCSCTL1 = CALBC1_1MHZ;
	 DCOCTL = CALDCO_1MHZ;
	 CCTL1 = OUTMOD_7;
	 P1DIR |= BIT6;
	 P1SEL |= BIT6;
	 TACTL = TASSEL_2 + MC_1;  //start timer

	 float d,e,f,g,a,b,c;
	 d=293.66;
	 e=329.63;
	 f=369.99;
	 g=392.00;
	 a=440.00;
	 b=493.88;
	 c=523.25;

		    //happy b day to u
	         mysound(d,200); mynosound(50);
	         mysound(d,200); mynosound(50);
	 		 mysound(e,450); mynosound(50);
	 		 mysound(d,450); mynosound(50);
	 		 mysound(g,450); mynosound(50);
	 		 mysound(f,950); mynosound(50);
	 		 mysound(d,200); mynosound(50);
	 		 mysound(d,200); mynosound(50);
	 		 mysound(e,450); mynosound(50);
	 		 mysound(d,450); mynosound(50);
	 		 mysound(a,450); mynosound(50);
	 		 mysound(g,950); mynosound(50);
	 		 mysound(d,200); mynosound(50);
	 		 mysound(d,200); mynosound(50);
	 		 mysound(2*d,450); mynosound(50);
	 		 mysound(b,450); mynosound(50);
	 		 mysound(g,450); mynosound(50);
	 		 mysound(f,450); mynosound(50);
	 		 mysound(e,450); mynosound(50);
	 		 mysound(c,200); mynosound(50);
	 		 mysound(c,200); mynosound(50);
	 		 mysound(b,450); mynosound(50);
	 		 mysound(g,450); mynosound(50);
	 		 mysound(a,450); mynosound(50);
	 		 mysound(g,950); mynosound(50);

	 		 //may God bless u dear
	 		 mysound(d,450); mynosound(50);
	 		 mysound(e,450); mynosound(50);
	 		 mysound(d,450); mynosound(50);
	 		 mysound(g,450); mynosound(50);
	 		 mysound(f,950); mynosound(50);
	 		 mysound(d,450); mynosound(50);
	 		 mysound(e,450); mynosound(50);
	 		 mysound(d,450); mynosound(50);
	 		 mysound(a,450); mynosound(50);
	 		 mysound(g,950); mynosound(50);
	 		 mysound(d,450); mynosound(50);
	 		 mysound(d*2,450); mynosound(50);
	 		 mysound(b,450); mynosound(50);
	 		 mysound(g,450); mynosound(50);
	 		 mysound(f,450); mynosound(50);
	 		 mysound(e,450); mynosound(50);
	 		 mysound(c,450); mynosound(50);
	 		 mysound(b,450); mynosound(50);
	 		 mysound(g,450); mynosound(50);
	 		 mysound(a,450); mynosound(50);
	 		 mysound(g,950); mynosound(50);

	 		 //happy long life to u
	 		 mysound(d,200); mynosound(50);
	 		 mysound(d,200); mynosound(50);
	 		 mysound(e,450); mynosound(50);
	 		 mysound(d,450); mynosound(50);
	 		 mysound(g,450); mynosound(50);
	 		 mysound(f,950); mynosound(50);
	 		 mysound(d,200); mynosound(50);
	 		 mysound(d,200); mynosound(50);
	 		 mysound(e,450); mynosound(50);
	 		 mysound(d,450); mynosound(50);
	 		 mysound(a,450); mynosound(50);
	 		 mysound(g,950); mynosound(50);
	 		 mysound(d,200); mynosound(50);
	 		 mysound(d,200); mynosound(50);
	 		 mysound(d*2,450); mynosound(50);
	 		 mysound(b,450); mynosound(50);
	 		 mysound(g,450); mynosound(50);
	 		 mysound(f,450); mynosound(50);
	 		 mysound(e,450); mynosound(50);
	 		 mysound(c,200); mynosound(50);
	 		 mysound(c,200); mynosound(50);
	 		 mysound(b,450); mynosound(50);
	 		 mysound(g,450); mynosound(50);
	 		 mysound(a,450); mynosound(50);
	 		 mysound(g,950); mynosound(50);


	_BIS_SR(CPUOFF);
}


