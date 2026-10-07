#include <iostream>

int main()
{
	//quick sort
		//const int SIZE = 10;
		//int arr[SIZE] = { -10, 0 , 30, 100, -100, 25 , 0, 3 , -5 , 10 };

		//int i = 0;
		//int j = SIZE - 1;
		//int mid = arr[(i + j) / 2];

		//while (i <= j){
		//	while (arr[i] < mid) {
		//		++i;
		//	}
		//	while (arr[j] > mid) {
		//		--j;
		//	}
		//	if (i <= j) {
		//		int temp = arr[i];
		//		arr[i] = arr[j];
		//		arr[j] = temp;

		//		++i;
		//		--j;
		//	}
		//}
		//for (int i = 0; i < SIZE; ++i) {
		//	std::cout << arr[i] << " ";
		//}

		//2


//merge sort
        int arr[7] = { 7, 2, 9, 1, 5, 3, 6 };
        int temp[7];

        int size = 1;

        while (size < 7)
        {
            int left = 0;

            while (left < 7)
            {
                int middle = left + size;
                int right = left + size * 2;

                if (middle > 7)
                {
                    middle = 7;
                }

                if (right > 7)
                {
                    right = 7;
                }

                int i = left;
                int j = middle;
                int k = left;

                while (i < middle && j < right)
                {
                    if (arr[i] < arr[j])
                    {
                        temp[k] = arr[i];
                        i++;
                    }
                    else
                    {
                        temp[k] = arr[j];
                        j++;
                    }

                    k++;
                }

                while (i < middle)
                {
                    temp[k] = arr[i];
                    i++;
                    k++;
                }

                while (j < right)
                {
                    temp[k] = arr[j];
                    j++;
                    k++;
                }

                left = left + size * 2;
            }

            for (int i = 0; i < 7; i++)
            {
                arr[i] = temp[i];
            }

            size = size * 2;
        }

        for (int i = 0; i < 7; i++)
        {
            std::cout << arr[i] << " ";
        }



        //3

        //int marks[10];

        //std::cout << "Вvedit 10 ocinok:" << '\n';

        //for (int i = 0; i < 10; i++)
        //{
        //    std::cin >> marks[i];
        //}

        //int choice;

        //std::cout << '\n';
        //std::cout << "1 - Vyvesty ocinky" << '\n';
        //std::cout << "2 - Pereskladannya ispytu" << '\n';
        //std::cout << "3 - Chy vyhodyt stypendiya" << '\n';

        //std::cin >> choice;

        //if (choice == 1)
        //{
        //    for (int i = 0; i < 10; i++)
        //    {
        //        std::cout << marks[i] << " ";
        //    }
        //}

        //if (choice == 2)
        //{
        //    int number;
        //    int newMark;

        //    std::cout << "Vvedit nomer ocinky: ";
        //    std::cin >> number;

        //    std::cout << "Vvedit novu ocinku: ";
        //    std::cin >> newMark;

        //    marks[number - 1] = newMark;

        //    std::cout << "Ocin ku zmineno!" << '\n';

        //    for (int i = 0; i < 10; i++)
        //    {
        //        std::cout << marks[i] << " ";
        //    }
        //}

        //if (choice == 3)
        //{
        //    double sum = 0;

        //    for (int i = 0; i < 10; i++)
        //    {
        //        sum = sum + marks[i];
        //    }

        //    double average = sum / 10;

        //    std::cout << "Seredniy bal: " << average << '\n';

        //    if (average >= 10.7)
        //    {
        //        std::cout << "Stypendiya ye" << '\n';
        //    }
        //    else
        //    {
        //        std::cout << "Stypendiyi nema" << '\n'; 
        //    }
        //}


        //4


        //int arr[9] = { 5, 2, 8, 1, 7, 3, 9, 4, 6 };

        //double sum = 0;

        //for (int i = 0; i < 9; i++)
        //{
        //    sum = sum + arr[i];
        //}

        //double average = sum / 9;

        //int border;

        //if (average > 0)
        //{
        //    border = 6;
        //}
        //else
        //{
        //    border = 3;
        //}

        //for (int i = 0; i < border - 1; i++)
        //{
        //    for (int j = i + 1; j < border; j++)
        //    {
        //        if (arr[i] > arr[j])
        //        {
        //            int temp = arr[i];
        //            arr[i] = arr[j];
        //            arr[j] = temp;
        //        }
        //    }
        //}

        //int left = border;
        //int right = 8;

        //while (left < right)
        //{
        //    int temp = arr[left];
        //    arr[left] = arr[right];
        //    arr[right] = temp;

        //    left++;
        //    right--;
        //}

        //std::cout << "Result: ";

        //for (int i = 0; i < 9; i++)
        //{
        //    std::cout << arr[i] << " ";
        //}


}




















