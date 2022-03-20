#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int cute_count = 0;
	int is_cute = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &is_cute);
		cute_count += is_cute? 1 : -1;
	}
	printf("Junhee is %s!", cute_count > 0? "cute" : "not cute");
	return 0;
}
