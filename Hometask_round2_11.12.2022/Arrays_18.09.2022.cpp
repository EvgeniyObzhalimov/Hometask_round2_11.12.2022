#include<iostream>
#include<iomanip>
#include<string>
#include<array>
#include<random>

template<typename T>
void matrix(T arr[][10], const int rows, const int columns)
{
	std::cout.precision(3);
	for (int i = 0; i < std::size(arr[10]); i++)
	{
		for (int j = 0; j < std::size(arr[10]); j++)
		{
			std::cout << std::setw(2)<<arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}


void mainDiagonal(int arr[][10], const int rows, const int columns) {
	for (int i = 0; i < std::size(arr[10]); i++)
	{
		for (int j = 0; j < std::size(arr[10]); j++)
		{
			if (i == j)
			{
				std::cout << arr[i][j] << " ";

			}
			else
				std::cout << "* ";

		}
		std::cout << "\n";
	}
}
int minEl(int arr[][10], const int rows, const int columns)
{
	int min = 0;
	min = arr[0][0];
	
	std::cout << "show matrix min element of main diagonal: ";
	for (int i = 0; i < std::size(arr[10]); i++)
	{
		for (int j = 0; j < std::size(arr[10]); j++)
		{
			if (min > arr[i][j] && i == j)
			{
				min = arr[i][j];

			}
		}

	}
	return min;
}
int maxEl(int arr[][10], const int rows, const int columns)
{
	int max = 0;
	max = arr[0][0];
	std::cout << "show matrix max element of main diagonal: ";
	for (int i = 0; i < std::size(arr[10]); i++)
	{
		for (int j = 0; j < std::size(arr[10]); j++)
		{
			if (max < arr[i][j] && i == j)
			{
				max = arr[i][j];

			}
		}

	}
	return max;
}
double maxEl(double arr[][10], const int rows, const int columns)
{
	double max = 0;
	max = arr[0][0];
	std::cout << "show matrix max element of main diagonal: ";
	for (int i = 0; i < std::size(arr[10]); i++)
	{
		for (int j = 0; j < std::size(arr[10]); j++)
		{
			if (max < arr[i][j] && i == j)
			{
				max = arr[i][j];

			}
		}

	}
	return max;
}
double minEl(double arr[][10], const int rows, const int columns)
{
	double min = 0;
	min = arr[0][0];

	std::cout << "show matrix min element of main diagonal: ";
	for (int i = 0; i < std::size(arr[10]); i++)
	{
		for (int j = 0; j < std::size(arr[10]); j++)
		{
			if (min > arr[i][j] && i == j)
			{
				min = arr[i][j];

			}
		}

	}
	return min;
}
template<typename T>
void sortEl(T arr[][10], const int rows, const int columns) {

	for (int i = 0; i < std::size(arr[10]); i++)
	{
		for (int j = 0; j < std::size(arr[10]); j++)
		{
			double tmp = arr[i][j];
			for (int k = 0; k < std::size(arr[10]) - 1; k++) {
				if (arr[i][k] > arr[i][k + 1]) {
					int tmp = arr[i][k];
					arr[i][k] = arr[i][k + 1];
					arr[i][k + 1] = tmp;
				}
			}

		}

	}
	for (int i = 0; i < std::size(arr[10]); i++)
	{
		for (int j = 0; j < std::size(arr[10]); j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}





int main() {
	setlocale(LC_ALL, "Russian");
	const int rows = 10;
	const int columns = 10;

	int arr[rows][columns]{};

	double arr1[rows][columns]{};

	char arr2[rows][columns]{};


	std::mt19937 gen{ std::random_device()() };
	std::uniform_real_distribution<double> dist(0, 10);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = dist(gen);
		}
	}

	std::cout << "show matrix: " << "\n";
		matrix(arr, rows, columns);
		std::cout << "\n";
		matrix(arr1, rows, columns);
		std::cout << "\n";
		matrix(arr2, rows, columns);
		
	std::cout << "\n";
	std::cout << "show min element of main diagonal: " << minEl(arr, rows, columns) << "\n";
	std::cout << "show min element of main diagonal: " << minEl(arr1, rows, columns) << "\n";
	

	std::cout << "show  main diagonal: " << "\n";
		mainDiagonal(arr, rows, columns);
	std::cout << "show  main diagonal: " << minEl(arr, rows, columns) << "\n";
	std::cout << "\n";
	std::cout << "show  main diagonal: " << minEl(arr1, rows, columns) << "\n";
	std::cout << "\n";
	

	std::cout << "show max element of main diagonal: " << maxEl(arr, rows, columns) << "\n";
	std::cout << "\n";
	std::cout << "show max element of main diagonal: " << maxEl(arr1, rows, columns) << "\n";
	std::cout << "\n";
	std::cout << "show matrix after rearranging: "<<"\n";
		sortEl(arr, rows, columns);
		std::cout << "\n";
		sortEl(arr1, rows, columns);
		std::cout << "\n";
	



	return 0;


}


