#include <iostream>
#include <array>
using namespace std;

int main(){
	int *x;

	cout << "How many numbers in the array? ";
	int input;
	cin >> input;
	
	x = new int[input];									// the pointer x points to the
														// numbers in the array
	cout << "Enter the values into the array: ";
	for (int i = 0; i < input; i++)
		cin >> x[i];

	double average = 0;
	double sum = 0;
	for (int i = 0; i < input; i++){
		sum += x[i];									
	}												
	average = (sum / input);

	cout << "Average: " << average << endl;

	delete[] x;
	return 0;
}
