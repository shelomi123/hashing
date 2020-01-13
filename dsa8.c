#include<stdio.h>
#include<stdlib.h>

#define size 100001

struct node
{
    int data;
    struct node *next;
};

struct node *chain[size];

void init()
{
    int i;
    for(i = 0; i < size; i++)
        chain[i] = NULL;
}

void insert(int value)
{
    //create a newnode with value
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    //calculate hash key
    int key = value % size;

    //check if chain[key] is empty
    if(chain[key] == NULL)
        chain[key] = newNode;
    //collision
    else
    {
        //add the node at the end of chain[key].
        struct node *temp = chain[key];
        while(temp->next)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void print()
{
    int i;

    for(i = 0; i < size; i++)
    {
        struct node *temp = chain[i];
        printf("chain[%d]-->",i);
        while(temp)
        {
            printf("%d -->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
int main()
{
	int value;
	/*int num[100000];
	FILE *pToFile = fopen("integers.txt","r");
	int line = 0;
	
	int num[100000];
	
	while( fgets( num, 100000, pToFile )) {
		//line++;
		printf(num[line]);
	}
    */
    //calculate hash key
    int key = value % size;
    struct node *temp = chain[key];
    
    //init array of list to NULL
    int i;
    init();
	int num[]={11222,220330,33654,22545,22366,212211,47565,67565,600654,78767,87879,87676,98786,88766,67867,90000,99898}; //17
	
	int tsarr[]={231552,234756,596873,648219,726312,981237,988331,1277361,1283379};
	
	
	
	//inserting num to hash table
    for(i=0;i<17;i++){
		insert(num[i]);
	}             
	
    //printing hash tabe
    //print();
    
    //print tsarr
	int s;
	for(s=0;s<9;s++){
		printf(" %d ",tsarr[s]);
	}
	printf("\n");
    
    //searching
    int a,k,hk;
    //int temp;
    int b=0;
	for(a=0;a<17;a++){
		for(b=0;b<9;b++){
			k=tsarr[b]-num[a];
			hk=k%size;			    
		
  
    	    
        		for(temp=chain[hk];temp!=NULL;temp=temp->next)
        			{
            			if(temp->data == k)
                				
                    			printf("%d   1 ",tsarr[a]);       
                    		
                		else
                				
                    			printf("%d   0 ",tsarr[a]);       
                    			
        				
   				}
    	              
	}	
	}
}
