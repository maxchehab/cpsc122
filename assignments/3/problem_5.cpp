#include <iostream>

using namespace std;

int arrayA[20];
int arrayB[20];

void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
}

int selectionSort(int array[]){
	int min;
	int exchanges = 0;
	for(int i = 0; i < 19; i++){
		min = i;
		for(int j = i+1; j < 20; j++){
			if(array[j] < array[min]){
				min = j;
				exchanges++;
			}

		}
		swap(&array[min], &array[i]);
	}

	return exchanges;
	
}

int bubbleSort(int array[]){
	int exchanges = 0;
	for(int i = 0; i < 19; i++){
		for(int j = 0; j < 19 - i; j++){
			if(array[j] > array[j+1]){
				exchanges++;
				swap(&array[j], &array[j+1]);
			}
		}
	}

	return exchanges;
	
}

int print(int array[]){
	for(int i = 0; i < 20; i < i++){
		cout << array[i] << " ";
	}

	cout << endl;
}

int main(){
	//Initialize arrays;
	for(int i = 0; i < 20; i++){
		arrayA[19 - i] = i;
		arrayB[19 - i] = i; 
	}
	cout << "arrayA before bubblesort: ";
	print(arrayA);
	int bubbleSortExchange = bubbleSort(arrayA);
	cout << "arrayA after bubblesort: ";
	print(arrayA);
	cout << "Bubblesort took " << bubbleSortExchange << " exchanges" << endl;	

	cout << "arrayB before selectionsort: ";
	print(arrayB);
	int selectionSortExchange = selectionSort(arrayB);
	cout << "arrayB after selectionsort: ";
	print(arrayB);
	cout << "Selectionsort took " <<  selectionSortExchange << " exchanges" << endl;
}
