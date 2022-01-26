#include<stdio.h>


void insert(int sequence[], int n){
    int i;
    for(i=1;i<n;i++){
        int keyvalue;
        keyvalue = sequence[i];
        int j=i-1;
        while(j>=0 && sequence[j]>keyvalue){
            sequence[j+1]=sequence[j];
            j--;
        }
        sequence[j+1]=keyvalue;
    }
}


void display(int sequence[],int n){
       int i;
    printf("sorted Array: \n");
    for(i=0;i<n;i++){
        printf("%d ",sequence[i]);
    }

}


int main(){

int n;
printf("number of values in for sorting : ");
scanf("%d", &n);
int i;
int sequence[n];
for(i=0;i<n;i++){
    scanf("%d",&sequence[i]);
}
insert(sequence,n);
display(sequence,n);

return 0;
    }




