#include <stdio.h>
#include <stdlib.h>
int single_number_1(int *A,int size){
    int i,j,k;
    int xor=0;
    for(i=0;i<size;i++){
        xor=xor^A[i];
        
    }
    i=0;
    int set_bit=0;
    for(i=0;i<32;i++){
        if ((xor>>i)&1){
            set_bit=i;
            break;
        }
    }
    return set_bit;
    
    
}
int main()
{	int Array[] = {2,3,1,4,7,66,3,1,2,4};
	int size=sizeof(Array)/sizeof(Array[0]);
    int set_bit=single_number_1(Array,size);
    int set=0;
    int unset=0;
    int i=0;
    for(i=0;i<size;i++){
        if((Array[i]>>set_bit)&1){
            set^=Array[i];
        }
        else{
            unset^=Array[i];
        }
    }
    printf("%d %d",set,unset);
	return 0;
}
