#include <stdio.h>
#include <math.h>
// int main()
// {
//     printf("%d", 23 + 56);
//     return 0;
// }

// int main()
// {
//     int x, y, z;
//     printf("x = ");
//     scanf("%d", &x);
//     printf("\n y = ");
//     scanf("%d", &y);
//     printf("\n z = ");
//     scanf("%d", &z);
//     printf("x=%d, y=%d, z=%d", x, y, z);
// }

// int main()
// {
//     int a, b;
//     printf("a = ");
//     scanf("%d", &a);
//     printf("\nb = ");
//     scanf("%d", &b);
//     printf("\na + b = %d", a + b);
//     printf("\na mod b = %d", a % b);
//     a++;
//     printf("\na = %d ", a);
// }

// int main()
// {
//     int a = 5;
//     printf("%d ", a++);
//     printf("%d ", a);
//     printf("%d", ++a);
// }

// int main()
// {
//     int a;
//     scanf("%d", &a);
//     printf("%d la so %s", a, (a % 2 == 0) ? "chan" : "le");
// }

// int main()
// {
//     int a, b, min, max;
//     scanf("%d%d", &a, &b);
//     max = (a > b) ? a : b;
//     min = (a > b) ? b : a;
//     printf("max = %d", max);
//     printf("min = %d", min);
// }

// int main()
// {
//     float a, b, x;

//     scanf("%f%f", &a, &b);

//     x = -b / a;
//     printf("x = %.2f", x);
// }

// int main(){
// 	int a, b;
// 	printf("Nhap vao a = ");
// 	scanf("%d", &a);
// 	printf("Nhap vao b = ");
// 	scanf("%d", &b);

// 	float ketqua =  (float)a/b;
// 	int ketqua2 = (int)ketqua;

// 	printf("%d/%d=%.2f", a, b, ketqua);
// 	printf("\n ketqua2= %d", ketqua2);
// }

// int main()
// {
// 	int n;
// 	scanf("%d", &n);
// 	if (n % 2 == 0)
// 	{
// 		printf("%d is an even number", n);
// 	}
// 	else
// 	{
// 		printf("%d is an odd number", n);
// 	}
// 	return 0;
// }

// int main()
// {
// 	float a, b, c, x1, x2, delta;
// 	scanf("%f%f%f", &a, &b, &c);
// 	delta = pow(b, 2) - 4 * a * c;
// 	if (delta < 0)
// 	{
// 		printf("vo nghiem");
// 	}
// 	else if (delta == 0)
// 	{
// 		x1 = (-b) / (2 * a);
// 		printf("nghiem kep %.2f", x1);
// 	}
// 	else
// 	{
// 		x1 = (-b + sqrt(delta)) / (2 * a);
// 		x2 = (-b - sqrt(delta)) / (2 * a);
// 	}
// }

// int main()
// {
// 	int a, b;
// 	char c;
// 	scanf("%d %c %d", &a, &c, &b);
// 	switch (c)
// 	{
// 	case '+':
// 		printf("%d", a + b);
// 		break;
// 	case '-':
// 		printf("%d", a - b);
// 		break;
// 	case '*':
// 		printf("%d", a * b);
// 		break;
// 	case '/':
// 		printf("%d", a / b);
// 		break;
// 	}
// 	return 0;
// }

// int main()
// {
// 	int n;
// 	scanf("%d", &n);
// 	for (int i = 1; i <= n; i++)
// 	{
// 		printf("%d ", i);
// 	}
// }

// int main()
// {
// 	int a, b;
// 	scanf("%d%d", &a, &b);
// 	for (int i = a; i <= b; i++)
// 	{
// 		printf("%d ", i);
// 	}
// }

// int main()
// {
// 	int thang, nam;
// 	printf("nhap thang: ");
// 	scanf("%d", &thang);
// 	printf("nhap nam: ");
// 	scanf("%d", &nam);

// 	switch (thang)
// 	{

// 	case 1:
// 	case 3:
// 	case 5:
// 	case 7:
// 	case 8:
// 	case 10:
// 	case 12:
// 		printf("31");
// 		break;
// 	case 4:
// 	case 6:
// 	case 9:
// 	case 11:
// 		printf("30");
// 		break;

// 	case 2:
// 		if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
// 		{
// 			printf("29");
// 		}
// 		else
// 		{
// 			printf("28");
// 		}

// 	default:
// 		break;
// 	}
// }

// int main()
// {
// 	int a;
// 	scanf("%d", &a);
// 	switch (a)
// 	{
// 	case 0 ... 19:
// 		printf("fkald");
// 	}
// }
// int main()
// {
// 	int a, b;
// 	int sum = 0;
// 	scanf("%d%d", &a, &b);
// 	for (int i = a; i <= b; i++)
// 	{
// 		sum += i;
// 	}
// 	printf("%d ", sum);
// }

// int main()
// {
// 	int a;
// 	int sum = 0;
// 	scanf("%d", &a);

// 	for (int i = 0; i <= a; i++)
// 	{
// 		if (i % 2 == 1)
// 		{
// 			// printf("\n%d ", i);
// 			sum += i;
// 			// printf("\n%d ", sum);
// 		}
// 	}
// 	printf("%d", sum);
// }

// int main()
// {
// 	int a;
// 	int i = 0;
// 	int sum = 0;
// 	scanf("%d", &a);
// 	while (i < a)
// 	{
// 		sum += i;
// 		i++;
// 	}
// 	printf("%d", sum);
// }

// int main()
// {
// 	int n;
// 	scanf("%d", &n);
// 	while (n <= 100)
// 	{
// 		if (n % 2 == 0)
// 		{
// 			printf("%d ", n);
// 		}
// 		n++;
// 	}
// }

// int main()
// {
// 	int a;
// 	scanf("%d", &a);
// 	for (int i = 1; i <= a; i++)
// 	{
// 		if (a % i == 0)
// 		{
// 			printf("%d", i);
// 		}
// 	}
// }

// int main()
// {
// 	int a;
// 	int i = 1;
// 	int sum = 0;
// 	scanf("%d", &a);
// 	while (i <= a)
// 	{
// 		if (a % i == 0)
// 		{

// 			sum += 1;
// 		}
// 		i++;
// 	}
// 	printf("%d ", sum);
// }

// int main()
// {
// 	int a, b;

// 	scanf("%d%d", &a, &b);
// 	int c = 1;
// 	while (b > 0)
// 	{
// 		c = c * a;
// 		b--;
// 	}

// 	printf("%d", c);
// }

// int main()
// {
// 	int a, b;
// 	scanf("%d%d", &a, &b);

// 	int c = 1;
// 	for (int i = b; i > 0; i--)
// 	{
// 		c = c * a;
// 	}
// 	printf("%d", c);
// }

int main()
{
	int a;
	do
	{
		printf("0 de thoat");
		printf("\nso bat ki de tiep tuc");
		scanf("%d", &a);
	} while (a != 0);
}