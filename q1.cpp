#include"stdafx.h"
#include <iostream>
#include<algorithm>
using namespace std;
#define size 10
int i;                               
void show(int* array, int n);
int partition(int* array, int pValue, int left, int right);
void QuickSort(int* array, int left, int right);

int main(void)
{
    int array[size];
    int i;

    for( i = 0; i < size; i++)              
    {
         array[i]=rand()%100;
    }

    cout<<endl<<"The random generated numbers are: "<<endl;
    show(array, size);
    QuickSort(array,0,size - 1);                
    cout<<endl<<"The sorted numbers are : "<<endl;
    show(array, size);

    system("pause");
    return 0;
}

void show(int* array, int n)
{
    int i;

    for( i = 0; i < n; i++) cout<<array[i]<<'\t';
}



void QuickSort(int* array, int left, int right)
{
    for(i=0;i<3;i++)
    {
       array[i]=array[rand()%100];
      }
      stable_sort(array,array+3);
     int p=array[(i+1)/2];
    //int p = array[left];              
    int split;

    if(right > left)                         
    {
        split = partition(array, p, left, right);

        array[split] = p;
        QuickSort(array, left, split-1);   
        QuickSort(array, split+1, right);    
    }
}


int partition(int* array, int p, int left, int right)
{
    int lb = left;
    int rb = right;

    while(lb < rb)             
    {
         while( p < array[rb]&& rb > lb)      
         {
              rb--;                     
         }
         swap(array[lb], array[rb]);

         while( p >= array[lb]&& lb < rb)     
         {
              lb++;                      
         }
         swap(array[rb], array[lb]);

    }
    return lb;                            


}