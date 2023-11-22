#include<stdio.h>


void shiftUp(int data_array[],int position,int last_position)
{
	int index=position;
	int i=0;
	while(index!=last_position-1)
	{
		data_array[index]=data_array[index+1];
	    index++;
	}printf("\nUPSHIFTING");
}



void shiftDown(int data_array[],int position,int last_position)
{
  int index =last_position-1;
  while(index>=0)
  {
    data_array[index+1]=data_array[index];
    index--;
  }

}

//INSERTION ------------------>


void insert(int data_array[],int position,int data,int *last_position,int max_size)
{
    if(*last_position <= max_size)
    {
        if(position<*last_position)
        {
             shiftDown(data_array,position,*last_position);
             data_array[position]=data;
             *last_position=(*last_position)+1;
        }

        else if(position==*last_position)
        {
               data_array[position]=data;
               *last_position=(*last_position)+1;
        }

        else if(position>*last_position)
        {
            printf("\nNOT POSSIBLE");
            return;

        }


    }

    else
    {
     printf("\nLIST IS FULL");
    }
}


//DELETION----------------------->


void delete1(int data_array[],int position,int *last_position,int max_size)
{
	if((*last_position)!=0)
	{
		if(position==(*last_position)-1)
		{
			*last_position=(*last_position)-1;
			 printf("\nDATA IS DELETED");
		    return;
		}
		else if(position>=*(last_position))
		{
			printf("\nNO ELEMENT PRESENT AT GIVEN INDEX");
			return;
		}
		else if(position<(*last_position-1))

		{
		  shiftUp(data_array,position,*last_position);
		  *last_position=(*last_position)-1;
		  printf("\nDATA IS DELETED");
		  return;
		}
		else if(position>max_size-1)
		{
			printf("\nWRONG INDEX");
		}

	}
	else
	{
		printf("\nLIST IS EMPTY");
		return;
	}
}
//TRAVERSAL-------------------------->


void traverse(int data_array[],int last_position)
{
	int i=0;
	printf("\n");
	if(last_position!=0)
	{

	while(i<last_position)
	{
		printf("%d\t",data_array[i]);
		i++;
	}printf("\n");
}
else{
	printf("\nLIST IS EMPTY");
}
}

void search(int array[],int last_position,int data)
{  int flag=0;
int i;
       for(i=0;i<last_position;i++)
       {

       	if(array[i]==data)
       	{
       		printf("\nELEMENT PRESENT AT INDEX %d",i);
       	    flag++;
		}
		else
		continue;
	}
		if(flag==0)
		printf("\nELEMNT NOT FOUND");
}

int main()

{
    int data_array[5];
    int max_size=5;
    int last_position=0;

    int data;
    int choice;
    int position;
    int flag=0;
    while(flag!=1)
    {

            printf("\nENTER THE CHOICE : ---->\n1>INSERT\n2.DELETE\n3.SEARCH\n4.DISPLAY\n5.STOP\nCHOICE == \n");
            scanf("%d",&choice);

            switch(choice)
            {
            	case 1:
            		{
            			printf("\nENTER THE INDEX :");
            			scanf("%d",&position);

            			if(position<=last_position)
						{


            			printf("\nENTER THE DATA :");
            			scanf("%d",&data);
            			insert(data_array,position,data,&last_position,max_size);
					    break;

						}
						else
						{
							printf("\nNOT POSSIBLE");
							break;
						}
}
				case 2:
			    {


				     if(last_position!=0)
				     {
				       printf("\nENTER THE INDEX :");
				       scanf("%d",&position);
					   delete1(data_array,position,&last_position,max_size);
				       break;
				     }

				   else
				     {
				    	printf("\nLIST IS EMPTY");
				   	    break;
				     }

				}

				case 3:
					{
						printf("ENTER THE ELEMNT TO SEARCH :");
						scanf("%d",&data);
						search(data_array,last_position,data);
						break;
					}

				case 4:
					{
						traverse(data_array,last_position);
						printf("\n");
						break;
					}

				case 5:
					{
						flag=1;
						break;
					}
				default :

					{
						printf("\nWRONG CHOICE");
						break;
					}

					   }
			}
    }

