#include <iostream>
using namespace std;

//Made process cpu/io burst global since they will not be modified
int P1[] = { 4,24,5,73,3,31,5,27,4,33,6,43,4,64,5,19,2 };
int P2[] = { 18,31,19,35,11,42,18,43,19,47,18,43,17,51,19,32,10 };
int P3[] = { 6,18,4,21,7,19,4,16,5,29,7,21,8,22,6,24,5 };
int P4[] = { 17,42,19,55,20,54,17,52,15,67,12,72,15,66,14 };
int P5[] = { 5,81,4,82,5,71,3,61,5,62,4,51,3,77,4,61,3,42,5 };
int P6[] = { 10,35,12,41,14,33,11,32,15,41,13,29,11 };
int P7[] = { 21,51,23,53,24,61,22,31,21,43,20 };
int P8[] = { 11,52,14,42,15,31,17,21,16,43,12,31,13,32,15 };
	

void swap(int i, int j, int *a) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void quicksort(int *arr, int left, int right) {
	int min = (left + right) / 2;
	int i = left;
	int j = right;
	int pivot = arr[min];

	while (left<j || i<right)
	{
		while (arr[i]<pivot)
			i++;
		while (arr[j]>pivot)
			j--;

		if (i <= j) {
			swap(i, j, arr);
			i++;
			j--;
		}
		else {
			if (left<j)
				quicksort(arr, left, j);
			if (i<right)
				quicksort(arr, i, right);
			return;
		}
	}
}
int findShortest(int processcounts[])
{
	int i = 0; //sets counter to 0 to go through counts array 0-7 for counts of each process
	int burst[] = { P1[processcounts[0]],P2[processcounts[1]],P3[processcounts[2]] ,P4[processcounts[3]] ,P5[processcounts[4]] ,P6[processcounts[5]] ,
		P7[processcounts[6]],P8[processcounts[7]] };
	int shortest = burst[0];
	quicksort(burst, 0, 7);
	cout << burst[1];
	
	return 0;
}
int main()
{
	int P1CT = 0;
	int P2CT = 0;
	int P3CT = 0;
	int P4CT = 0;
	int P5CT = 0;
	int P6CT = 0;
	int P7CT = 0;
	int P8CT = 0;
	int nextcpu[] = { P1CT,P2CT,P3CT,P4CT,P5CT,P6CT,P7CT,P8CT };
	int shortest;
	findShortest(nextcpu);


}
 /*int findShortest (int processcounts[])
{
	int i = 0; //sets counter to 0 to go through counts array 0-7 for counts of each process
	int burst[] = { P1[processcounts[0]],P2[processcounts[1]],P3[processcounts[2]] ,P4[processcounts[3]] ,P5[processcounts[4]] ,P6[processcounts[5]] ,
		P7[processcounts[6]],P8[processcounts[7]] };
	cout << burst[1];

}
*/







