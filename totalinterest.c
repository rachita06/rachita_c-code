#include<stdio.h>
int main()
{
	float c_price,t_price,m_interest,t_interest;
	c_price=2000;
	t_price=100+(100*21);
	t_interest=(t_price-c_price)/c_price*100;
	m_interest=t_interest/22;
	printf("the monthly interest charge is %f",m_interest);
	return 0;
}
