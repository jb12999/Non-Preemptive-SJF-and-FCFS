#include<stdio.h> 

//swapping two numbers
/*void swapbt(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSortbt(int bt[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (bt[j] < bt[j+1]) 
              swapbt(&bt[j], &bt[j+1]); 
} 
  
/* Function to print an array */
/*void printArraybt(int bt[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        {
		printf("%d\n",bt[i]);  
	}
    }
  
  void swapat(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSortat(int at[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (at[j] < at[j+1]) 
              swapat(&at[j], &at[j+1]); 
} 
  
//Function to print an array 
void printArrayat(int at[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        {
		printf("%d\n",at[i]); 
	}
    } */
    //FOR SJF
    void swapbtsjf(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSortbtsjf(int bt[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (bt[j] > bt[j+1]) 
              swapbtsjf(&bt[j], &bt[j+1]); 
} 
  
/* Function to print an array */
void printArraybtsjf(int bt[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        {
		printf("%d\n",bt[i]); 
	}
    }
  
  void swapatsjf(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSortatsjf(int at[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (at[j] > at[j+1]) 
              swapatsjf(&at[j], &at[j+1]); 
} 
  
//Function to print an array 
void printArrayatsjf(int at[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        {
		printf("%d\n",at[i]); 
	}
    } 
    
void WaitingTime(int bt[], int n, int wt[]) 
{ int i;
    wt[0] = 0;  
    for (i = 1; i < n ; i++ ) 
        wt[i] = bt[i-1] + wt[i-1]  ; 
} 
  
void TurnAroundTime(int bt[], int n, int wt[], int tat[]) 
{ int i;
    for (i = 0; i < n ; i++) 
        tat[i] = bt[i] + wt[i]; 
} 

//Avg Time
void findavgTime(int bt[], int at[], int n) 
{ 
    int wt[n], tat[n], total_wt = 0, total_tat = 0,i; 
    //Waiting time
    WaitingTime(bt,n,wt); 
    //Turn around time
    TurnAroundTime(bt,n,wt,tat); 
  
    // Display processes along with all details 
    printf("\nArrival Time  Burst time  Waiting time  Turn around time\n"); 
  
    // Calculate total waiting time and total turn around time 
    for (i = 0; i < n; i++) 
    { 
        total_wt = total_wt + wt[i]; 
        total_tat = total_tat + tat[i]; 
        printf(" %d\t\t %d \t %d \t\t %d\n",at[i],bt[i],wt[i],tat[i]);
        /*cout << " " << at[i] << "\t\t"    
             << bt[i] << "\t " << wt[i] 
             << "\t\t " << tat[i] <<endl; */
    } 
  
    printf("Average waiting time = %f",(float)total_wt / (float)n);
    printf("\nAverage turn around time = %f",(float)total_tat / (float)n); 
} 




int main()
{
	int n,s,i;
	printf("Enter the Total number of processes you want to run:-");
	scanf("%d",&n);
	int at[20],bt[20],wt[20],tat[20];
	printf("Enter Burst time\n");
	for(i=0;i<n;i++)
	{
		printf("%d:-",i+1);
        scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
	{
		at[i]=0.5*bt[i];
	}
	printf("Enter Choice \n1)FCFS \n2)SJF \n");
	scanf("%d",&s);
	switch(s)
	{
	/*case 1:  //FCFS with highest burst time
     //sorting burst time in descending order using bubble sort
    {
	bubbleSortbt(bt, n); 
    bubbleSortat(at, n); 
    printf("Order of execution according to burst time:-\n"); 
    printArraybt(bt, n); 
    printArrayat(at, n);
    findavgTime(bt ,at ,n);
	break; 
    }*/
    case 2:  //SJF
    {
    bubbleSortbtsjf(bt, n); 
    bubbleSortatsjf(at, n); 
    printf("Order of execution according to burst time:-\n"); 
    printArraybtsjf(bt, n); 
    printArrayatsjf(at, n);
    findavgTime(bt ,at ,n);
	break; 	
	}
	default:
		printf("ENTER CORRECT CHOICE !!! Thank you");
		
}
}
