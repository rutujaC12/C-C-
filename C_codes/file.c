//File Handleing
#include<stdio.h>
#define MAX 50
struct details
{
	int product_id;
	char product_name[20];
	float product_price;
	float gst;
};
struct details s[MAX];
FILE *fp;
void add_product(int size)
{
	int i;
	fp=fopen("product.txt", "a");
	for(i=0; i<size; i++)
	{
		printf("\n Enter the name of product:");
		scanf("%s", s[i].product_name);
		printf("\n Enter product ID:");
		scanf("%d", &s[i].product_id);
		printf("\n Enter the product price:");
		scanf("%f", &s[i].product_price);
		printf("\n Enter the GST:");
		scanf("%f", &s[i].gst);
		fprintf(fp,"%d\n%s\n%.2f\n%.2f\n", s[i].product_id, s[i].product_name, s[i].product_price, s[i].gst);
		printf("\n");
	}
	fclose(fp);
}
void search(int size)
{
    int i;
    char name;
    printf("Product NAME:");
    scanf("%s,name");
	fp=fopen("temp.txt", "r");
    for(i=0;i<size;i++)
    {
        if(s[i].product_name==name);
        return 1;
    }
    fclose(fp);
}
void display_product(int size)
{
	int i;
	for(i=0; i<size; i++)
	{
    	printf("%d\t%s\t%f\t%f\n", s[i].product_id, s[i].product_name, s[i].product_price, s[i].gst);
    }
}
void main()
{
	int choice=0, n;
	printf("\n Enter how many product do you want to insert:");
	scanf("%d", &n);
	while(choice<4)
	{
		printf("\n 1. Add new Product");
		printf("\n 2. search the Product");
		printf("\n 3. Display Product");
		printf("\n 4. Exit");
		printf("\n Enter your choice:");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:	add_product(n);
                    break;

			case 2:	search(n);
                        printf("Product Found!");
					break;

			case 3:	display_product(n);
                    break;

			default: printf("\n Make proper choice");
		}
	}
	fclose(fp);
}
