#include<stdio.h>

int main(){
int array[10]={1,2,3,4,5};

//size of the array
int size = 5;
 
//Position to be works as static

int position=2;
int i;
printf("array before deletion: \n");
for(i=0;i<size;++i){
printf("%d ",array[i]);
}

if(position < 0 || position >=size ){
printf("Invalid position for deletion");
printf("%d ",array[i]);
}

//shift the element to be remove

printf("\nUpdate array after the deletion: \n");
for(i=0;i<size;++i){
printf("%d ",array[i]);

}
return 0;
}
