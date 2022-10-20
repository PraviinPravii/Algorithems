#include <stdio.h>
#include <stdlib.h>

//Sorting the array using Bubble sort
int *Bubble_sort(int A[],int size){
	int i;
	int j;
	for(i=0;i<size;i++){
	for(j=0;j<size;j++){
	if (A[i]<A[j]){
		int temp=A[i];
			A[i]=A[j];
			A[j]=temp;
			}
	else{
		continue;
	}
	}
	}
	return A;
}
//finding the startig index of the element which the elements start in a sorted array using binary search
int find_start_index(int *A,int element,int size){
	int end=size-1;
	int start=0;
	int start_index=-1;
	while (start<=end){
		int mid=(start+end)/2;
		if (A[mid]==element)
        {
		end=mid-1;
		start_index=mid;
		}
		else if(A[mid]<element)
        {
		start=mid+1;
		}
		else if (A[mid]>element)
        {
		end=mid-1;
		}}
	return start_index;}
	
//finding the end index of the element which the elements end in a sorted array using binary search

int find_end_index(int *A,int element,int size){
	int end=size-1;
	int start=0;
	int end_index=-1;
	while (start<=end){
		int mid=(start+end)/2;
		if (A[mid]==element)
        {
			start=mid+1;
			end_index=mid;
		}
		else if(A[mid]<element)
        {
			start=mid+1;
		}
		else if (A[mid]>element)
        {
			end=mid-1;
		}
	}
	
	
	return end_index;
}

int main()
{	int Array[] = {25,3,3,3,3,2,2,2,4,4,4,4,5,4,5,5,2,4,5,6,7,8,5,3,3,5,7,5,3,2,4,6,7,8,8,3,5,6,7,7,8,4,3,3,7,8,63,4,7,8};//Array Declaration
	int size=sizeof(Array)/sizeof(Array[0]);  //Finding the Size of the array
	
	int *sorted_A;
  sorted_A=Bubble_sort(Array,size);  //Getting a Sorted 
	
	
	int find_element;
	scanf("%d",&find_element); //Getting the user input
	int start_index=find_start_index(sorted_A,find_element,size); //Getting the starting point of the element in sorted array
	int end_index=find_end_index(sorted_A,find_element,size);  //Getting the ending point of the element in sorted array
	if(start_index!=-1 && end_index!=-1){
	printf("The freqency of Given element %d is : ",find_element); //Getting Frequency using End-start+1 which is E-S+1
	printf("%d",end_index-start_index+1);
	}
	else{
		printf("%d element not found",find_element); //If element is not found print not found
	}
	return 0;
}
