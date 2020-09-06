#include <stdio.h>
int numbers[10];
int total(int array[]){
    int sum=0;
    int i;
    for(i=0;i<10;i++)
    {
        sum= sum + array[i];
    }
    return sum;

}


int sorted(int array[])
{
// declare some local variables
    int i=0 , j=0 , temp=0;

    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<10-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                temp        = array[j];
                array[j]  = array[j+1];
                array[j+1]= temp;
            }
        }
    }
    printf("Sorted: ");
    for(i=0 ; i<10 ; i++)
    {
        printf("%d ",array[i]);
    }
}

float median(int array[] )
{
    float median;


    median = (array[(9)/2] + array[10/2])/2.0;


    return median;
}

int maximum(int array[])

{
    int max=array[0];
    int i=0;
    for(i=0; i<10;i++)
    {
        if(max<array[i])
            max=array[i];
    }
    return max;
}
int minimum(int array[])

{
    int min=array[0];
    int i=0;
    for(i=0; i<10;i++)
    {
        if(min>array[i])
            min=array[i];
    }
    return min;
}
float average(int array[])
{
    float count=0.0;
    float avr;
    float sum =0.0;
    int i;
    for(i=0;i<10;i++)
    {
        count= count+1;
        sum= sum + array[i];
    }
    avr= sum/count;
    return avr;
}


int main() {

    int x;
    int sum;
    int i;
    float med=0;

    for(x=0;x<10;x++){
        printf("Enter the numbers :");
        scanf("%i",&numbers[x]);


    }
    printf("Minimum: %d\n",minimum(numbers));
    printf("Maximum: %d\n",maximum(numbers));
    sum=total(numbers);
    printf("Sum: %d\n",sum);
    printf("Average: %g\n",average(numbers));
    sorted(numbers);
    printf("\n");
    med=median(numbers);
    printf("Median: %g",med);



    return 0;
}

