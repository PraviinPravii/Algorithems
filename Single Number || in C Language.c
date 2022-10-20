#include <stdio.h>
#include <stdlib.h>
int single_number_2(int *A,int size){
    int i,j;
    int answer=0;
    for(i=0;i<31;i++){
        int count=0;
        for(j=0;j<size;j++){
            if((A[j]>>i)&1){
                count++;
            }
        }
        if (count%3==2){
            answer|=1<<i;
        }
    }
    return answer;
}
int main()
{	int Array[] = {3,3,4,6,9,9,5,7,4,6,5,7,8,7,6,8,8,5,3,4};
	int size=sizeof(Array)/sizeof(Array[0]);
    int ans=single_number_2(Array,size);
	printf("%d",ans);
	return 0;
}
