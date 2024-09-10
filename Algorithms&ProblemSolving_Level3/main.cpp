#include "Header.h"
using namespace MyLib;

int main()
{
	// Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	/*

	// Problem 1
	int Arr[3][3];
	FillMatrixWithRandomNums(Arr, 3, 3);
	PrintMatrix(Arr, 3, 3);
	system("pause>0");

	*/

	/*
		// Problem 2
		int Arr[3][3];
		FillMatrixWithRandomNums(Arr, 3, 3);
		PrintMatrix(Arr, 3, 3);
		PrintSumOfEachRow(Arr, 3, 3);
		system("pause>0");
	*/

	/*
		// Problem 3
		int Arr1[3][3], Arr2[3];
		FillMatrixWithRandomNums(Arr1, 3, 3);
		PrintMatrix(Arr1, 3, 3);
		SaveSumOfRowsInArr(Arr1, Arr2, 3, 3);
		PrintRowsSumArray(Arr2, 3);
	*/

	/*
		// Problem 4
		int Arr[3][3];
		FillMatrixWithRandomNums(Arr, 3, 3);
		PrintMatrix(Arr, 3, 3);
		PrintSumOfEachCol(Arr, 3, 3);
		system("pause>0");
	*/

	/*
		// Problem 5
		int Arr1[3][3], Arr2[3];
		FillMatrixWithRandomNums(Arr1, 3, 3);
		PrintMatrix(Arr1, 3, 3);
		SaveSumOfColsInArr(Arr1, Arr2, 3, 3);
		PrintColsSumArray(Arr2, 3);
		system("pause>0");
	*/

	/*
	// Problem 6
	int Arr[3][3];
	FillMtrixWithOrderNums(Arr, 3, 3);
	PrintMatrix(Arr, 3, 3);
	system("pause>0");
	*/

	/*
	// Problem 7
	int Arr1[3][3], Arr2[3][3];
	FillMatrixWithOrderNums(Arr1, 3, 3);
	cout << "\nThe following is a 3x3 ordered matrix:\n";
	PrintMatrix(Arr1, 3, 3);
	TransPoseMatrix(Arr1, Arr2, 3, 3);
	cout << "\n\nThe following is the transposed matrix:\n";
	PrintMatrix(Arr2, 3, 3);
	*/

	/*
	// Problem 8
	int Matrix1[3][3], Matrix2[3][3], Matrix3[3][3];
	FillMatrixWithRandomNumsFrom1To10(Matrix1, 3, 3);
	FillMatrixWithRandomNumsFrom1To10(Matrix2, 3, 3);
	cout << "\nMatrix1:\n";
	PrinMatrixFrom1To10(Matrix1, 3, 3);
	cout << "\n\nMatrix2:\n";
	PrinMatrixFrom1To10(Matrix2, 3, 3);
	cout << "\n\nMatrix3:\n";
	MultipyTwoMatrix(Matrix1, Matrix2, Matrix3, 3, 3);
	PrinMatrixFrom1To10(Matrix3, 3, 3);
	*/

	/*
	// Problem 9
	int Matrix[3][3];
	FillMatrixWithRandomNumsFrom1To10(Matrix, 3, 3);
	PrinMatrixFrom1To10(Matrix, 3, 3);
	PrintMiddleRowOfMatrix(Matrix, 3, 3);
	PrintMiddleColOfMatrix(Matrix, 3, 3);
	*/

	/*
	// Problem 10
	int Matrix[3][3];
	FillMatrixWithRandomNumsFrom1To10(Matrix, 3, 3);
	PrinMatrixFrom1To10(Matrix, 3, 3);
	cout << "Sum Of Matrix is: " << SumAllNumbersInMatrix(Matrix, 3, 3) << endl;
	*/

	/*
	// Problem 11
	int Matrix1[3][3], Matrix2[3][3];

	FillMatrixWithRandomNumsFrom1To10(Matrix1, 3, 3);
	cout << "\nMatrix1\n";
	PrinMatrixFrom1To10(Matrix1, 3, 3);
	cout << "Sum Of Matrix1 is: " << SumAllNumbersInMatrix(Matrix1, 3, 3) << endl;

	FillMatrixWithRandomNumsFrom1To10(Matrix2, 3, 3);
	cout << "\nMatrix2\n";
	PrinMatrixFrom1To10(Matrix2, 3, 3);
	cout << "Sum Of Matrix2 is: " << SumAllNumbersInMatrix(Matrix2, 3, 3) << endl;

	if (CheckEquality(Matrix1, Matrix2, 3, 3))
		cout << "\nYes: Matrix Are Equal.\n";
	else
		cout << "\nNo: Matrix Are Not Equal.\n";
	system("pause>0");
	*/

	/*
	// Problem 12
	int Matrix1[3][3], Matrix2[3][3];

	FillMatrixWithRandomNumsFrom1To10(Matrix1, 3, 3);
	cout << "\nMatrix1\n";
	PrinMatrixFrom1To10(Matrix1, 3, 3);

	FillMatrixWithRandomNumsFrom1To10(Matrix2, 3, 3);
	cout << "\nMatrix2\n";
	PrinMatrixFrom1To10(Matrix2, 3, 3);

	if (CheckTypically(Matrix1, Matrix2, 3, 3))
		cout << "\nYes: Matrix Are Typical.\n";
	else
		cout << "\nNo: Matrix Are Not Typical.\n";
	system("pause>0");
	*/

	/*
	// Problem 13
	int Matrix[3][3];
	FillMatrixWith0And1(Matrix, 3, 3);
	PrintMatrix(Matrix, 3, 3);
	if (CheckIdentity(Matrix, 3, 3))
		cout << "\nYes: Matrix Is Identity.\n";
	else
		cout << "\nNo: Matrix Is Not Identity.\n";
	system("pause>0");
	*/

	/*
	// Problem 15
	int Matrix[3][3];
	FillMatrixWithRandomNumsFrom1To10(Matrix, 3, 3);
	cout << "\nMatrix\n";
	PrinMatrixFrom1To10(Matrix, 3, 3);
	int Num = ReadPositiveNumber("Enter The Number To Count in Matrix? ");
	cout << "Number " << Num << " count in matrix is " << CountNumberInMatrix(Matrix, Num, 3, 3) << endl;
	system("pause>0");
	*/

	/*
	// Problem 16
	int Matrix[3][3] = { {1, 0, 0}, {0, 0, 0}, {13 , 0 , 1} };
	PrintMatrix(Matrix, 3, 3);
	if (IsMatrixSparce(Matrix, 3, 3))
		cout << "\nYes: It's Sparse\n";
	else
		cout << "\nNo: It's Not Sparce\n";
	*/

	/*
	// Problem 17
	int Matrix[3][3];
	FillMatrixWithRandomNumsFrom1To10(Matrix, 3, 3);
	PrinMatrixFrom1To10(Matrix, 3, 3);
	int Num = ReadPositiveNumber("Please Enter the number to look for in matrix? ");
	if (IsNumberExistInMatrix(Matrix, Num, 3, 3))
		cout << "\nYes it is there.\n";
	else
		cout << "\nNo it is Not.\n";
	*/


	/*
	// Problem 18
	int Matrix1[3][3], Matrix2[3][3];
	FillMatrixWithRandomNumsFrom1To10(Matrix1, 3, 3);
	cout << "\nMatrix1\n";
	PrinMatrixFrom1To10(Matrix1, 3, 3);
	FillMatrixWithRandomNumsFrom1To10(Matrix2, 3, 3);
	cout << "\nMatrix2\n";
	PrinMatrixFrom1To10(Matrix2, 3, 3);
	PrintIntersectesNumbersInTwoMatrix(Matrix1, Matrix2, 3, 3);
	*/

	/*
	// Problem 19
	int Matrix[3][3];
	FillMatrixWithRandomNums(Matrix, 3, 3);
	cout << "\nMatrix\n";
	PrintMatrix(Matrix, 3, 3);
	cout << "Minimum Number is: " << GetMinNumberInMAtrix(Matrix, 3, 3) << endl;
	cout << "Max Number is: " << GetMaxNumberInMAtrix(Matrix, 3, 3) << endl;
	*/

	/*
	// Problem 20
	int Matrix[3][3] = { {1,2, 1}, {5, 5, 5}, {7, 3, 7} };
	cout << "\nMatrix:\n";
	PrinMatrixFrom1To10(Matrix, 3, 3);
	if (IsMatrixPalindrom(Matrix, 3, 3))
		cout << "Yes: Matrix is Palindrom\n";
	else
		cout << "No: Matrix is Not Palindrom\n";
	*/

	/*
	// Problem 21
	int Num = ReadPositiveNumber("Please Enter Number: ");
	// PrintFibonacciSeriesUsingLoop((short)Num);
	// Problem 22
	PrintFibonacciSeriesUsingRecursion(10, 0, 1);
	*/

	// Problem 23
	//PrintFirstLetterOfEachWord(ReadString());

	// Problem 24
	// cout << ConvertFirstLetterToUppercase(ReadString());

	// Problem 25
	// cout << ConvertFirstLetterToLowercase(ReadString());

	/*
	// Problem 26
	string S1 = ReadString();
	S1 = ConverStringToUppercase(S1);
	cout << S1 << endl;
	S1 = ConverStringToLowercase(S1);
	cout << S1 << endl;
	*/

	// Problem 27
	//cout << InvertCharacterCase(ReadChar()) << endl;

	// Problem 28
	// cout << InvertAllLettersInString(ReadString()) << endl;

	// Problem 29
	/*
	string S1 = ReadString();
	cout << "Count Of String Length: " << CountLetters(S1) << endl;
	cout << "Count Of Capital Letters: " << CountLetters(S1, enWhatToCount::CountCapitalLetters) << endl;
	cout << "Count Of Small Letters: " << CountLetters(S1, enWhatToCount::CountSmallLetters) << endl;
	*/


	// Problem 30
	/*
	string S1 = ReadString();
	char letter = ReadChar();
	cout << "Letter \"" << letter << "\" Count = " << CountLetter(S1, letter) << endl;
	*/

	// Problem 31
	/*
		string S1 = ReadString();
		char letter = ReadChar();
		cout << "Letter \"" << letter << "\" Count = " << CountLetterInSensetive(S1, letter) << endl;
		cout << "Letter \"" << letter << "\" Or \"" << InvertCharacterCase(letter) << "\" = " << CountLetterInSensetive(S1, letter, false) << endl;
		system("pause>0");
	*/

	// Problem 32
	/*
	char ch = ReadChar();
	if (IsVowel(ch))
		cout << "\nYES Letter \'" << ch << "\' is vowel\n";
	else
		cout << "\nNO Letter \'" << ch << "\' is not vowel\n";
	*/

	// Probelem 33
	/*
	cout << "Number Of Vowels Is: " << CountVowel(ReadString()) << endl;
	system("pause>0");
	*/

	// Problem 34
	/*
	PrintVowels(ReadString());
	system("pause>0");
	*/

	// Problem 35
	/*
	PrintEachWordInString(ReadString());
	system("pause>0");
	*/

	// Problem 36
	/*
	string S1 = ReadString();
	cout << "\nThe Number Of Words In Your String Is: " << CountEachWordInString(S1) << endl;
	*/

	// Problem 37
	/*
	string S1 = ReadString();
	vector <string> String;
	String = SplitString(S1, " ");
	PrintVectorStringElements(String);
	*/

	// Problem 38

	/*
		string S1 = "       Mohammed Abu-Hadhoud       ";
		cout << "\nString   :" << S1;
		cout << "\n\nTrim Left  :" << TrimLeft(S1);
		cout << "\nTrim Right :" << TrimRight(S1);
		cout << "\nTrim       :" << Trim(S1);
		system("pause>0");
	*/

	// Problem 39
	/*
		vector <string> vString = { "Lobna", "Hadeer", "Nora", "Mona" };
		string Arr[] = { "Lobna", "Hadeer", "Nora", "Mona" };
		cout << "Vector After Join:\n" << JoinString(Arr, 4, " ") << endl;
		// Problem 40
		cout << "Array After Join:\n" << JoinString(vString, " ") << endl;

	*/
	// Problem 41
	/*
	string S1 = "Lobna Muhamed I'm From Egypt";
	cout << S1 << endl;
	cout << "\nString After Reverse Words\n";
	cout << ReverseWordsInString(S1) << endl;
	*/

	// Problem 42
	/*
	string S1 = ReadString();
	cout << "String After Replaced:\n";
	cout << ReplaceWordInStringUsingBuiltInFunction(S1, "Egypt", "Jordan") << endl;
	*/

	// Problem 43
	/*
		string S1 = ReadString();
		cout << "String After Replaced:\n";
		cout << ReplaceWordInStringUsingCustomFunction(S1, "Egypt", "Jordan", false) << endl;

	*/

	// Problem 44
	/*
	string S1 = "Welcome to Jordan, Jordan Is a nice Country, It's Amazing.";
	cout << endl << S1 << endl;
	cout << "Punctuation Removed:\n";
	cout << RemoveAllPunctuations(S1) << endl;
	*/

	// Problem 45
	/*
	cout << "\nPlease Enter Client Data: \n\n";
	stClientData Client;
	Client = ReadNewClient();
	cout << "\n\nClient Record For Saving Is: \n";
	cout << ConvertRecordToOneLine(Client);
	*/

	// Problem 46
	/*
	string S1 = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";
	stClientData Client;
	Client = ConvertLineToRecord(S1, "#//#");
	PrintClientRecord(Client);
	*/

	// Problem 47
	/*
	AddClients();
	system("pause>0");
	*/

	// Problem 48

	/*

	vector <stClient> vClients = LoadDataFromFileToVector("Clients.txt");
	PrintAllClientsData(vClients);
	system("pause>0");
	*/

	// Problem 49

	/*
	stClient Client;
	string AccountNumber = ReadClientAccountNumber();
	if (FindClientByAccountNumber(AccountNumber, Client))
		PrintClientRecord(Client);
	else
		cout << "\nClient With Account Number (" << AccountNumber << ") is Not Found!";
	system("pause>0");
	*/

	// Problem 50
	/*
	vector <stClient> vClients = LoadDataFromFileToVector(FileName);
	string AccountNumber = ReadClientAccountNumber();
	DeleteClientByAccountNumber(AccountNumber, vClients);
	system("pause>0");
	*/

	// Problem 51
	vector <stClient> vClients = LoadDataFromFileToVector(FileName);
	string AccountNumber = ReadClientAccountNumber();
	UpdateClientDataByAccountNumber(AccountNumber, vClients);
	system("pause>0");
	return 0;
}

