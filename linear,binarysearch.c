#include<stdio.h>
int searchlinear(float * salary,int size,float searchsalary);
int searchbinary(float* salaries ,int size,float searchsalary);
int main()
{
    int n;
    float salaries[100];
    printf("Enter the no of salary\n");
	scanf("%d",&n);
	 printf("Enter the  salary\n");
    for(int i=0;i<n;i++)
    {
    scanf("%f",&salaries[i]);
    }
    float  searchsalary;
	n=5;
	printf("Enter the to be searched\n");
	scanf("%f",&searchsalary);
	int index =searchbinary(salaries,n, searchsalary);
	int new=searchlinear(salaries,n, searchsalary);
	printf("%0.2f found at index %d\n",searchsalary,index);
	printf("%0.2f found at newindex %d\n",searchsalary,new);
	return 0;
}
int searchlinear(float * salary,int size,float searchsalary)
{
	for(int i=0; i<size; i++)
	{
		if(salary[i]==searchsalary)
		{
			return i+1;
		}
	}
	return -1;
}
int searchbinary(float* salaries ,int size,float searchsalary)
  {
      int left =0,right =size-1;
      
      while(left<right)
      {
          int mid =(left+right)/2;
          if(salaries[mid]==searchsalary){
              return mid+1;
              
          }else if (searchsalary <salaries[mid])
          {
              right = mid-1;
              
          }
          else{
              left =mid +1;
          }
      }return -1;
}
