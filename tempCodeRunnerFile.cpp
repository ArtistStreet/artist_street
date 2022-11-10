int main()
{
	int a;
	int i = 1;
	int sum = 0;
	scanf("%d", &a);
	while (i <= a)
	{
		if (a % i == 0)
		{

			sum += 1;
		}
		i++;
	}
	printf("%d ", sum);
}