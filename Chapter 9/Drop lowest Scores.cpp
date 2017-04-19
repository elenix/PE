#include <iostream>
#include <iomanip>

using namespace std;

void arrSelectSort(int arr[], int size);
int arrAvgScore(int arr[] , int size);
void DropLowerScore(int array[], int size);


int main()
{
	double *TestScores, total = 0.0;
	int numofTest, average;
	
	cout << "***********************************************************************************************************************" << endl;
	cout << setw(65)<< "DROP LOWEST SCORES" << endl;
	cout << "***********************************************************************************************************************" << endl << endl;

	cout << "How many test scores do you wish to enter: ";
	cin >> numofTest;
	cout<<endl;
	int array[numofTest];
	
	cout << "Enter the scores to be placed in the array below.\n";
	cout << "-------------------------------------------------------"<<endl<<endl;

	for (int i = 0; i < numofTest; i++)
	{
		cout << " Scores number  " << (i + 1) << " : ";
		cin >> array[i];
	}
	
	cout <<endl<< "-------------------------------------------------------"<<endl<<endl;

	average = arrAvgScore(array, numofTest);
	cout<<" Average : "<<average<<endl;
	arrSelectSort(array, numofTest);
	cout<<endl;
	DropLowerScore(array, numofTest);
	
	return 0;
}

void arrSelectSort(int array[], int size){
	
	int temp;
	int arr[size];
	
	for(int i = 0; i <size; i++){
		arr[i] = array [i];
	}
	
	for(int i = 0; i < size ; i++){
	  for(int j = 0; j < size-1; j++){
			   if(arr[j]>arr[j+1]){
					 temp=arr[j];
					 arr[j]=arr[j+1];
					 arr[j+1]=temp;
 			  }
	  }
   }
   
   cout<<" Array in Ascending order: "<<endl<<endl;
   	for(int o = 0; o <size; o++ ){
   		cout<<"\t"<<arr[o];
   }

}

int arrAvgScore(int arr[], int size){

	int    i, sum = 0;       
  	double avg;          

  	for (i = 0; i < size; ++i){
	    sum += arr[i];
   }

  	avg = double(sum) / size;

	return avg;
}

void DropLowerScore(int array[], int size){
	
	int temp;
	int arr[size];
	
	for(int i = 0; i <size; i++){
		arr[i] = array [i];
	}
	
	for(int i = 0; i < size ; i++){
	  for(int j = 0; j < size-1; j++){
			   if(arr[j]>arr[j+1]){
					 temp=arr[j];
					 arr[j]=arr[j+1];
					 arr[j+1]=temp;
 			  }
	  }
   }
   
   cout<<" Lowest Scores have been dropped: "<<endl<<endl;
   	for(int o = 0; o <size-1; o++ ){
   		cout<<"\t"<<arr[o+1];
   }
	
	
	
	
}

