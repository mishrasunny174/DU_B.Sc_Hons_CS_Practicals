#include<iostream>

using namespace std;

void getArr(int*,int);
void mergeArray(int*,int*,int,int*,int);

int main()
{
	int arr1[50],arr2[50],mergedArr[100];
	int sizeArr1,sizeArr2,sizeMergedArr;
	cout<<"Enter size of first array: ";
	cin>>sizeArr1;
	cout<<"Enter first array in ascending order: "<<endl;
	getArr(arr1,sizeArr1);
	cout<<"Enter size of Second array: ";
       	cin>>sizeArr2;	
	cout<<"Enter second array in ascending order: "<<endl;
	getArr(arr2,sizeArr2);
	sizeMergedArr=sizeArr1+sizeArr2;
	mergeArray(mergedArr,arr1,sizeArr1,arr2,sizeArr2);
	cout<<"Merged array is {"<<endl;
	for(int i=0;i<sizeMergedArr;i++)
		cout<<mergedArr[i]<<',';
	cout<<"\b}"<<endl;
	cout<<"Press enter to continue..."<<endl;
	cin.ignore();
	cin.get();
	return 0;
}

void getArr(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"Enter element no "<<i+1<<" : ";
		cin>>arr[i];
	}
}

void mergeArray(int* dest,int* source1,int sizeSource1,int* source2,int sizeSource2)
{
	int indexSource1=0,indexSource2=0,indexDest=0;
	while(indexSource1<sizeSource1&&indexSource2<sizeSource2)
	{
		if(source1[indexSource1]<source2[indexSource2])
			dest[indexDest++]=source1[indexSource1++];
		else
			dest[indexDest++]=source2[indexSource2++];
	}
	while(indexSource1<sizeSource1)
		dest[indexDest++]=source1[indexSource1++];
	while(indexSource2<sizeSource2)
		dest[indexDest++]=source2[indexSource2++];
}
