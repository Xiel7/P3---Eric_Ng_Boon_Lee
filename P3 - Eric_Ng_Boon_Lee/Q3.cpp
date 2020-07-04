//#include <iostream>
//
//
//using namespace std;
//
//int main()
//{
//	int score[10], count = 0, total = 0, highCount = 0, lowCount = 0;
//	double average;
//
//	cout << "Enter the scores (negative number to end the program)"<<endl;
//
//	for (int i = 0; i < (sizeof(score) / sizeof(*score)); i++)
//	{
//		cout << "Score " << ++count << ": ";
//		cin >> score[i];
//		if (score[i] < 0)
//		{
//			--count;
//			break;
//			
//		}
//		else 
//			total += score[i];
//
//	}
//
//	average = (double)total / count;
//
//	for (int i = 0; i < count; i++)
//	{
//		if (score[i]>=average)
//			highCount++;
//		else
//			lowCount++;
//	}
//	
//	cout << "\nResults" << endl;
//	cout << "=======\n" << endl;
//	cout << "Average : " << average <<endl;
//	cout << "Number of scores above or equal to the average is " << highCount << endl;
//	cout << "Number of scores below the average is " << lowCount << endl;
//	
//	return 0;
//}