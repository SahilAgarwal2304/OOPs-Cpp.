#include<iostream>
using namespace std;

template<typename T>

void sort(T* arr,int s)
{
	int i=0,j=1;
	T temp;S
	for (int i = 0; i < s - 1; i++) {
    for (int j = i + 1; j < s; j++) {
        if (arr[i] > arr[j]) {
            T temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

	cout << "Sorted Array: ";
	for (int i = 0; i < s; i++)
	{
    	cout << arr[i] << " ";
	}
	cout << endl;

}


int main()
{
	int choice,size;
	
	cout<<"Enter 1 for int array and 2 for float array:"<<endl;
	cin>>choice;
	cout<<"Enter number of elements in the array:"<<endl;
	cin>>size;
	int arrint[size];
	float arrfloat[size];
	
	switch(choice)
	{
		case 1:
			int eint;
			for(int x=0;x<size;x++)
			{
				cin>>eint;
				arrint[x]=eint;
			
			}
			sort(arrint,size);
			case 2:
			float efloat;
			for(int y=0;y<size;y++)
			{
				cin>>efloat;
				arrfloat[y]=efloat;
				
			}
			sort(arrfloat,size);
	}
	return 0;
}

