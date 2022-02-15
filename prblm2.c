# include<stdio.h>

int	main(void)
{
	int	state;

	printf("Insert ilya's bank account's state:\n");
	scanf("%d", &state);
	if (state >= 0)
		printf("%d", state);
	else
	{
		if ((state % 10) <= (state /10) % 10)
			printf("%d", state / 10);
		else
		{
			//state *= -1;
			state = (state / 100)*10 + (state % 10);
			printf("%d", state);
		}
	 }
	return (0);
}
