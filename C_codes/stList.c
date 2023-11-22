 // -----   static list program   -----
#include<stdio.h>
#define size 3
int st_list[size];

// list empty checking---
int isEmpty(int *lastpos)
{
	if(*lastpos==-1)
	{
		printf("\n List is Empty. \n");
		return -1;
	}
	else
	return 0;
}

// shift data right---
void shift_data_right(int position,int *last_pos)
{
	int i;
	if(*last_pos==size-1)
	{
		printf("\n List is full \n");
	}
	else
	{
		*last_pos=*last_pos+1;
		for(i=*last_pos;i>position;i--)
		{
			st_list[i]=st_list[i-1];
		}
	}
}

//shift data left---
void shift_data_left(int p,int *lp)
{
	int i;
		if(*lp==-1)
		{
			printf("\n List is Empty \n");
			return;
		}
		else
		{
			for(i=p;i<*lp;i++)
			{
				st_list[i]=st_list[i+1];
			}
			*lp=*lp-1;
		}
}
// Add Element functions--
	// Add at end---
	void add_at_end(int data,int *position)
	{
		if(*position==size-1)
		{
			printf("List is Full \n");
			return;
		}
		*position=*position+1;
		st_list[*position]=data;
	}

	// Add at beginning ---
	void add_at_beg(int data,int *ptr)
	{
		if(*ptr==size-1)
		{
			printf("List is Full \n");
			return;
		}
		int position=0;
		shift_data_right(position ,ptr);
		st_list[position]=data;
	}

	// add at postiont---
	void add_at_pos(int p,int *lp,int data)
	{
		if(*lp==size-1)
		{
			printf("List is Full \n");
			return;
		}
		if(p>*lp+1)
		{
			printf("Invalid position \n");
			return;
		}
		else if(p==*lp+1)
		{
			st_list[p]=data;
			*lp=p;
			return;
		}
		else
		{
			shift_data_right(p,lp);
			st_list[p]=data;
			return;
		}
	}

//Delete elements functions---
	// Delete at end---
	void delete_at_end(int *l_p)
	{

		int k=isEmpty(l_p);						//if(*l_p==-1)
		if(k==-1)
		return;
		else					//	printf("\n List is Empty ");
		*l_p=*l_p-1;
	}

	// delete at beginning---
	void delete_at_beg(int *lp)
	{	int p=0;
		shift_data_left(p,lp);
		return;
	}

	// delete at position---
	void delete_at_pos(int p,int *lp)
	{
		if(p>*lp)
		{
			printf("no element at %d position ",p);
			return;
		}
		else
		{
			shift_data_left(p,lp);
			return;
		}
	}


// searching----
void search(int dt,int lp)
{
	int i,f=0;
	for(i=0;i<=lp;i++)
	{
		if(dt==st_list[i])
		{

			f=1;
			break;
		}
	}
		if(f==1)
		{
			printf("element %d found at index %d \n",dt,i);
			return;
		}
		else
		{
			printf("Element not found in list ");
			return;
		}

}

// Display---
void display(int dposition)
{
	if(dposition==-1)
	{
		printf("\n List is Empty \n");
		return;
	}
	int i=0;
	for(i=0;i<=dposition;i++)
	{
		printf(" %d ",st_list[i]);
	}
}

// main----
void main()
{
	int ch,ch2;
	int last_pos=-1,p;
	int ele;
	while(1)
	{
		printf("\n 1.Add element \n 2.Delete element \n 3.Search \n 4.Display list \n 5.Exit \n choose: ");
		scanf("%d",&ch);
		printf("\n");

		switch (ch)
		{
			// adding elements-----
			case 1:
			{
				printf(" 1.Add at end \t 2.Add at begining \t 3.Add at position \n choose: ");
				scanf("%d",&ch2);

				printf("Enter data element: ");
				scanf("%d",&ele);

				switch (ch2)
				{
					// add at end---
					case 1 :
						{
						add_at_end	( ele, &last_pos);
						break;
						}
					// add at beginning---
					case 2 :
					{
						add_at_beg(ele, &last_pos);
						break;
					}
					// add at postiont---
					case 3 :
					{
						printf("\n Enter position to add at: ");
						scanf("%d",&p);
						add_at_pos(p,&last_pos,ele);
						break;
					}
				}
				break;
			}

			// deleting elements----
			case 2:
			{
				printf(" 1.Delete at end \t 2.Delete at begining \t 3.Delete at position \n choose: ");
				scanf("%d",&ch2);

				switch(ch2)
				{
					// delete at end---
					case 1 :
						{
							delete_at_end(&last_pos);
							break;
						}
					// delete at beginning
					case 2 :
					{
						delete_at_beg(&last_pos);
						break;
					}
					// dlete at position---
					case 3 :
					{
						printf("Enter position to delete at: ");
						scanf("%d",&p);
						delete_at_pos(p,&last_pos);
						break;
					}
				}
				break;
			}

			// searching-----
			case 3 :
				{
					printf("Enter element to search : ");
					scanf("%d",&ele);
					search(ele,last_pos);
					break;
				}

			// displaying elements----
			case 4:
			{
				display(last_pos);
				break;
			}

			// exit---
			case 5:
			{
				return ;
				break;
			}
		}
	}
}
