#pragma once
#include <iostream>
#include <cmath>
#include <cctype>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;
namespace MyLib
{
	const string FileName = "Clients.txt";
	int ReadPositiveNumber(string Mess)
	{
		int Num;
		do {
			cout << Mess << endl;
			cin >> Num;
		} while (Num < 1 || Num > 10);
		return Num;
	}
	int RandomNumber(short From, short To)
	{
		short randomNum = rand() % (To - From + 1) + From;
		return randomNum;
	}
	void FillMatrixWithRandomNums(int Arr[3][3], short Rows, short Cols)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				Arr[i][j] = RandomNumber(1, 100);
			}
		}
	}
	void PrintMatrix(int Arr[3][3], short Rows, short Cols)
	{
		cout << "The following is a 3 x 3 random matrix: \n";
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				cout << setw(3) << Arr[i][j] << "    ";
			}
			cout << '\n';
		}
	}
	int CalculateSumOfRow(int Arr[3][3], short RowNumber, short Cols)
	{
		short Sum = 0;
		for (short j = 0; j < Cols; j++)
		{
			Sum += Arr[RowNumber][j];
		}
		return Sum;
	}
	int CalculateSumOfCol(int Arr[3][3], short Rows, short ColNumber)
	{
		short Sum = 0;
		for (short j = 0; j < Rows; j++)
		{
			Sum += Arr[j][ColNumber];
		}
		return Sum;
	}
	void PrintSumOfEachRow(int Arr[3][3], short Rows, short Cols)
	{
		cout << "\nThe the following are the sum of each row in the matrix:\n";
		for (short i = 0; i < Rows; i++)
		{
			cout << "Row " << i + 1 << " Sum = " << CalculateSumOfRow(Arr, i, Cols) << endl;
		}
	}
	void PrintSumOfEachCol(int Arr[3][3], short Rows, short Cols)
	{
		cout << "\nThe the following are the sum of each col in the matrix:\n";
		for (short i = 0; i < Cols; i++)
		{
			cout << "Col " << i + 1 << " Sum = " << CalculateSumOfCol(Arr, Rows, i) << endl;
		}
	}
	void SaveSumOfRowsInArr(int Arr[3][3], int Arr2[3], short Rows, short Cols)
	{
		for (short i = 0; i < Rows; i++)
		{
			Arr2[i] = CalculateSumOfRow(Arr, i, Cols);
		}
	}
	void PrintRowsSumArray(int Arr[3], short length)
	{
		cout << "\nThe the following are the sum of each row in the matrix:\n";
		for (short i = 0; i < length; i++)
		{
			cout << "Row " << i + 1 << " Sum = " << Arr[i] << endl;
		}
	}
	void SaveSumOfColsInArr(int Arr[3][3], int Arr2[3], short Rows, short Cols)
	{
		for (short i = 0; i < Cols; i++)
		{
			Arr2[i] = CalculateSumOfCol(Arr, Rows, i);
		}
	}
	void PrintColsSumArray(int Arr[3], short length)
	{
		cout << "\nThe the following are the sum of each col in the matrix:\n";
		for (short i = 0; i < length; i++)
		{
			cout << "Col " << i + 1 << " Sum = " << Arr[i] << endl;
		}
	}
	void FillMatrixWithOrderNums(int Arr[3][3], short Rows, short Cols)
	{
		int Count = 0;
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				Arr[i][j] = ++Count;
			}
		}
	}
	void TransPoseMatrix(int Arr1[3][3], int Arr2[3][3], short Rows, short Cols)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				Arr2[i][j] = Arr1[j][i];
			}
		}
	}
	void FillMatrixWithRandomNumsFrom1To10(int Arr[3][3], short Rows, short Cols)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				Arr[i][j] = RandomNumber(1, 10);
			}
		}
	}
	void MultipyTwoMatrix(int Arr1[3][3], int Arr2[3][3], int Arr3[3][3], short Rows, short Cols)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				Arr3[i][j] = Arr1[i][j] * Arr2[i][j];
			}
		}
	}
	void PrinMatrixFrom1To10(int Arr[3][3], short Rows, short Cols)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				printf("%0*d   ", 2, Arr[i][j]);
			}
			cout << '\n';
		}
	}
	void PrintMiddleRowOfMatrix(int Arr[3][3], short Rows, short Cols)
	{
		short MiddleRow = Rows / 2;
		cout << "Middle Row Of Matrix is: ";
		for (short j = 0; j < Cols; j++)
		{
			printf("%0*d   ", 2, Arr[MiddleRow][j]);
		}
		cout << '\n';
	}
	void PrintMiddleColOfMatrix(int Arr[3][3], int Rows, int Cols)
	{
		short MiddleCol = Cols / 2;
		cout << "Middle Col Of Matrix is: ";
		for (short j = 0; j < Rows; j++)
		{
			printf("%0*d   ", 2, Arr[j][MiddleCol]);
		}
		cout << '\n';
	}
	int SumAllNumbersInMatrix(int Arr[3][3], int Rows, int Cols)
	{
		int Sum = 0;
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				Sum += Arr[i][j];
			}
		}
		return Sum;
	}
	bool CheckEquality(int Arr1[3][3], int Arr2[3][3], short Rows, short Cols)
	{
		return (SumAllNumbersInMatrix(Arr1, Rows, Cols) == SumAllNumbersInMatrix(Arr2, Rows, Cols));
	}
	bool CheckTypically(int Arr1[3][3], int Arr2[3][3], short Rows, short Cols)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				if (Arr1[i][j] != Arr2[i][j])
					return false;
			}
		}
		return true;
	}
	void FillMatrixWith0And1(int Arr[3][3], short Rows, short Cols)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				Arr[i][j] = RandomNumber(0, 1);
			}
		}
	}
	bool CheckIdentity(int Arr[3][3], short Rows, short Cols)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				if (i == j && Arr[i][j] != 1)
					return false;
				else if (i != j && Arr[i][j] != 0)
					return false;
			}
		}
		return true;
	}
	bool CheckScalar(int Arr[3][3], short Rows, short Cols)
	{
		short FirstDiagElement = Arr[0][0];
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				if (i == j && Arr[i][j] != FirstDiagElement)
					return false;
				else if (i != j && Arr[i][j] != 0)
					return false;
			}
		}
		return true;
	}
	short CountNumberInMatrix(int Arr[3][3], short Element, short Rows, short Cols)
	{
		short NumberCount = 0;
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				if (Arr[i][j] == Element)
					NumberCount++;
			}
		}
		return NumberCount;
	}
	bool IsMatrixSparce(int Arr[3][3], short Rows, short Cols)
	{
		short MatrixSize = Rows * Cols;
		short CountOfZeros = 0;
		return (CountNumberInMatrix(Arr, 0, Rows, Cols) >= ceil((float)MatrixSize / 2));
	}
	bool IsNumberExistInMatrix(int Arr[3][3], short Number, short Rows, short Cols)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				if (Arr[i][j] == Number)
					return true;
			}
		}
		return false;
	}
	void PrintIntersectesNumbersInTwoMatrix(int Arr1[3][3], int Arr2[3][3], short Rows, short Cols)
	{
		int Number;
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				Number = Arr1[i][j];
				if (IsNumberExistInMatrix(Arr2, Number, Rows, Cols))
					cout << Arr2[i][j] << '\t';
			}
		}
		cout << '\n';
	}
	short GetMinNumberInMAtrix(int Matrix[3][3], short Rows, short Cols)
	{
		short MinNumber = Matrix[0][0];
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				if (MinNumber > Matrix[i][j])
					MinNumber = Matrix[i][j];
			}
		}
		return MinNumber;
	}
	short GetMaxNumberInMAtrix(int Matrix[3][3], short Rows, short Cols)
	{
		short MaxNumber = Matrix[0][0];
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols; j++)
			{
				if (MaxNumber < Matrix[i][j])
					MaxNumber = Matrix[i][j];
			}
		}
		return MaxNumber;
	}
	bool IsMatrixPalindrom(int Matrix[3][3], short Rows, short Cols)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Cols / 2; j++)
			{
				if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
					return false;
			}
		}
		return true;
	}
	void PrintFibonacciSeriesUsingLoop(short Num)
	{
		int Prev1 = 1, Prev2 = 0, FebNumber = 0;
		cout << "1   ";
		for (short i = 2; i <= Num; i++)
		{
			FebNumber = Prev1 + Prev2;
			cout << FebNumber << "   ";
			Prev2 = Prev1;
			Prev1 = FebNumber;

		}
		cout << "\n";
	}
	void PrintFibonacciSeriesUsingRecursion(short Num, int Prev1, int Prev2)
	{
		int FebNumber = 0;
		if (Num > 0)
		{
			FebNumber = Prev1 + Prev2;
			cout << FebNumber << "   ";
			Prev2 = Prev1;
			Prev1 = FebNumber;
			PrintFibonacciSeriesUsingRecursion(Num - 1, Prev1, Prev2);
		}
	}
	string ReadString()
	{
		string S1;
		cout << "Please Enter Your String?\n";
		getline(cin, S1);
		return S1;
	}
	char ReadChar()
	{
		char ch;
		cout << "Please Enter Your Character?\n";
		cin >> ch;
		return ch;
	}
	void PrintFirstLetterOfEachWord(string word)
	{
		bool IsFirstLetter = true;
		cout << "\nFirst Letter Of This String: \n";

		for (short i = 0; i < word.length(); i++)
		{
			if (word.at(i) != ' ' && IsFirstLetter)
				cout << word.at(i) << endl;
			IsFirstLetter = (word.at(i) == ' ' ? true : false);
		}
	}
	string ConvertFirstLetterToUppercase(string word)
	{
		bool IsFirstLetter = true;
		for (short i = 0; i < word.length(); i++)
		{
			if (word.at(i) != ' ' && IsFirstLetter)
				word.at(i) = toupper(word.at(i));
			IsFirstLetter = (word.at(i) == ' ' ? true : false);
		}
		return word;
	}
	string ConvertFirstLetterToLowercase(string word)
	{
		bool IsFirstLetter = true;
		for (short i = 0; i < word.length(); i++)
		{
			if (word.at(i) != ' ' && IsFirstLetter)
				word.at(i) = tolower(word.at(i));
			IsFirstLetter = (word.at(i) == ' ' ? true : false);
		}
		return word;
	}
	string ConverStringToUppercase(string word)
	{
		for (short i = 0; i < word.length(); i++)
			word.at(i) = toupper(word.at(i));
		return word;
	}
	string ConverStringToLowercase(string word)
	{
		for (short i = 0; i < word.length(); i++)
			word.at(i) = tolower(word.at(i));
		return word;
	}
	char InvertCharacterCase(char ch)
	{
		return isupper(ch) ? tolower(ch) : toupper(ch);
	}
	string InvertAllLettersInString(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = InvertCharacterCase(S1[i]);
		}
		return S1;
	}
	enum enWhatToCount { CountSmallLetters = 0, CountCapitalLetters = 1, All = 2 };
	short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
	{
		short Counter = 0;
		if (WhatToCount == enWhatToCount::All)
			return S1.length();
		for (short i = 0; i < S1.length(); i++)
		{
			if (WhatToCount == enWhatToCount::CountCapitalLetters && isupper(S1[i]))
				Counter++;
			else if (WhatToCount == enWhatToCount::CountSmallLetters && islower(S1[i]))
				Counter++;
		}
		return Counter;
	}
	short CountLetter(string S1, char Letter)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] == Letter)
				Counter++;
		}
		return Counter;
	}
	char InvertLetterCase(char letter)
	{
		return (isupper(letter) ? tolower(letter) : toupper(letter));
	}
	short CountLetterInSensetive(string S1, char Letter, bool MatchCase = true)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (MatchCase)
			{
				if (S1[i] == Letter)
					Counter++;
			}
			else
			{
				if (tolower(S1[i]) == tolower(Letter))
					Counter++;
			}
		}
		return Counter;
	}
	bool IsVowel(char ch)
	{
		ch = tolower(ch);
		return ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'));
	}
	short CountVowel(string S1)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (IsVowel(S1[i]))
				Counter++;
		}
		return Counter;
	}
	void PrintVowels(string S1)
	{
		cout << "\nVowels in String Are: ";
		for (short i = 0; i < S1.length(); i++)
		{
			if (IsVowel(S1[i]))
				cout << S1[i] << "    ";
		}
		cout << '\n';
	}
	void PrintEachWordInString(string S1)
	{
		string delim = " ";
		cout << "\nWords Of String Are:\n\n";
		short pos;
		string sWord;
		while ((pos = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);
			if (sWord != "")
				cout << sWord << endl;
			S1.erase(0, pos + delim.length());
		}
		if (S1 != "")
			cout << S1 << endl;
	}
	short CountEachWordInString(string S1)
	{
		string delim = " ";
		short pos = 0, Counter = 0;
		string sWord;
		while ((pos = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);
			if (sWord != "")
				Counter++;
			S1.erase(0, pos + delim.length());
		}
		if (S1 != "")
			Counter++;
		return Counter;
	}
	void PrintVectorStringElements(vector <string>& vWords)
	{
		cout << "Tokens: " << vWords.size() << endl;
		for (string& Word : vWords)
		{
			cout << Word << endl;
		}
	}
	vector<string> SplitString(string S1, string delim)
	{
		vector <string> vString;
		short pos = 0;
		string sWord = "";
		while ((pos = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);
			if (sWord != "")
				vString.push_back(sWord);
			S1.erase(0, pos + delim.length());
		}
		if (S1 != "")
			vString.push_back(S1);
		return vString;
	}
	string TrimLeft(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ')
				return (S1.substr(i, S1.length() - i));
		}
		return "";
	}
	string TrimRight(string S1)
	{
		for (short i = S1.length() - 1; i >= 0; i--)
		{
			if (S1[i] != ' ')
				return (S1.substr(0, i + 1));
		}
		return "";
	}
	string Trim(string S1)
	{
		return TrimLeft(TrimRight(S1));
	}
	string JoinString(vector <string>& vString, string delim)
	{
		string String;
		for (string& word : vString)
			String += word + delim;
		return String.substr(0, String.length() - delim.length());
	}
	string JoinString(string arrString[100], short Length, string delim)
	{
		string String;
		for (short i = 0; i < Length; i++)
			String += arrString[i] + delim;
		return String.substr(0, String.length() - delim.length());
	}
	string ReverseWordsInString(string S1)
	{
		vector <string> vString;
		string S2 = "";
		vString = SplitString(S1, " ");

		// declare iterator
		vector <string>::iterator iter = vString.end();
		while (iter != vString.begin())
		{
			--iter;
			S2 += *iter + " ";
		}
		return S2.substr(0, S2.length() - 1);
	}
	string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sReplaceTo)
	{
		short pos = S1.find(StringToReplace);
		while (pos != std::string::npos)
		{
			S1.replace(pos, StringToReplace.length(), sReplaceTo);
			pos = S1.find(StringToReplace);
		}
		return S1;
	}
	string LowerAllString(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
			S1[i] = tolower(S1[i]);
		return S1;
	}
	string ReplaceWordInStringUsingCustomFunction(string S1, string StringToReplace, string sReplaceTo, bool MatchCase)
	{
		vector <string> vString = SplitString(S1, " ");
		for (string& Word : vString)
		{
			if (MatchCase)
			{
				if (Word == StringToReplace)
				{
					Word = sReplaceTo;
				}
			}
			else
				if (LowerAllString(Word) == LowerAllString(StringToReplace))
					Word = sReplaceTo;
		}
		S1 = JoinString(vString, " ");
		return S1;
	}
	string RemoveAllPunctuations(string S1)
	{
		string S2;
		for (short i = 0; i < S1.length(); i++)
		{
			if (!ispunct(S1[i]))
				S2 += S1[i];
		}
		return S2;
	}
	struct stClient {
		string AccountNumber;
		string PinCode;
		string Name;
		string PhoneNumber;
		double AccountBalance;
		bool MarkToDelete = false;
	};
	stClient ReadNewClient()
	{
		stClient Client;
		cout << "Enter Account Number? ";
		getline(cin >> ws, Client.AccountNumber);
		cout << "Enter PinCode? ";
		getline(cin, Client.PinCode);
		cout << "Enter Name? ";
		getline(cin, Client.Name);
		cout << "Enter Phone? ";
		getline(cin, Client.PhoneNumber);
		cout << "Account Balance? ";
		cin >> Client.AccountBalance;
		return Client;
	}
	string ConvertRecordToLine(stClient ClientData, string Separtor = "#//#")
	{
		string S1 = "";
		S1 += ClientData.AccountNumber + Separtor;
		S1 += ClientData.PinCode + Separtor;
		S1 += ClientData.Name + Separtor;
		S1 += ClientData.PhoneNumber + Separtor;
		S1 += to_string(ClientData.AccountBalance);
		return S1;
	}
	stClient ConvertLineToRecord(string Line, string Separator = "#//#")
	{
		stClient Client;
		vector <string> vClientData;

		vClientData = SplitString(Line, Separator);

		Client.AccountNumber = vClientData[0];
		Client.PinCode = vClientData[1];
		Client.Name = vClientData[2];
		Client.PhoneNumber = vClientData[3];
		Client.AccountBalance = stod(vClientData[4]);
		return Client;
	}
	void PrintClientRecord(stClient Client)
	{
		cout << "\n\nThe Following Is The Extracted Client Record:";
		cout << "\nAccount Number: " << Client.AccountNumber;
		cout << "\nPinCode       : " << Client.PinCode;
		cout << "\nName          : " << Client.Name;
		cout << "\nPhone         : " << Client.PhoneNumber;
		cout << "\nAccout Balance: " << Client.AccountBalance;
	}
	void AddDataLineToFile(string FileName, string stDataLine)
	{
		fstream MyFile;
		MyFile.open(FileName, ios::out | ios::app);
		if (MyFile.is_open())
		{
			MyFile << stDataLine << endl;
			MyFile.close();
		}
	}
	void AddNewClient()
	{
		stClient Client;
		Client = ReadNewClient();
		AddDataLineToFile("Clients.txt", ConvertRecordToLine(Client));
	}
	void AddClients()
	{
		char AddMore = 'Y';
		do {
			system("cls");
			cout << "Adding New Client:\n\n";
			AddNewClient();
			cout << "\nClient Added Successfully, Do you want to add more clients? Y/N\n";
			cin >> AddMore;
		} while (toupper(AddMore) == 'Y');
	}
	vector <stClient> LoadDataFromFileToVector(string FileName)
	{
		vector <stClient> vClients;
		fstream MyFile;
		MyFile.open(FileName, ios::in);
		if (MyFile.is_open())
		{
			stClient Client;
			string Line;
			while (getline(MyFile, Line))
			{
				Client = ConvertLineToRecord(Line);
				vClients.push_back(Client);
			}
			MyFile.close();
		}
		return vClients;
	}
	void PrintClientRecordInList(stClient Client)
	{
		cout << "| " << setw(15) << left << Client.AccountNumber;
		cout << "| " << setw(10) << left << Client.PinCode;
		cout << "| " << setw(40) << left << Client.Name;
		cout << "| " << setw(12) << left << Client.PhoneNumber;
		cout << "| " << setw(12) << left << Client.AccountBalance;
	}
	void PrintAllClientsData(vector <stClient> vClients)
	{
		cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
		cout << "\n_______________________________________________________";
		cout << "_______________________________________________________\n" << endl;
		cout << "| " << left << setw(15) << "Account Number";
		cout << "| " << left << setw(10) << "Pin Code";
		cout << "| " << setw(40) << left << "Client Name";
		cout << "| " << setw(12) << left << "Phone";
		cout << "| " << setw(12) << left << "Balance";
		cout << "\n_______________________________________________________";
		cout << "_______________________________________________________\n" << endl;
		for (stClient& Client : vClients)
		{
			PrintClientRecordInList(Client);
			cout << endl;
		}
		cout << "\n_______________________________________________________";
		cout << "_______________________________________________________\n" << endl;
	}
	bool FindClientByAccountNumber(string AccountNumber, stClient& Client)
	{
		vector <stClient> vClients = LoadDataFromFileToVector(FileName);
		for (stClient& C : vClients)
		{
			if (C.AccountNumber == AccountNumber)
			{
				Client = C;
				return true;
			}
		}
		return false;
	}
	string ReadClientAccountNumber()
	{
		string AccountNumber = "";
		cout << "\nPlease Enter Account Number? ";
		cin >> AccountNumber;
		return AccountNumber;
	}
	// OverLoading
	bool FindClientByAccountNumber(string AccountNumber, vector <stClient>& vClients, stClient& Client)
	{
		for (stClient& C : vClients)
		{
			if (C.AccountNumber == AccountNumber)
			{
				Client = C;
				return true;
			}
		}
		return false;
	}
	bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <stClient>& vClients)
	{
		for (stClient& C : vClients)
		{
			if (C.AccountNumber == AccountNumber)
			{
				C.MarkToDelete = true;
				return true;

			}
		}
		return false;
	}
	vector <stClient> SaveClientsDataToFile(string FileName, vector <stClient> vClients)
	{
		fstream MyFile;
		MyFile.open(FileName, ios::out);
		string DataLine;
		if (MyFile.is_open())
		{
			for (stClient& Client : vClients)
			{
				if (Client.MarkToDelete == false)
				{
					DataLine = ConvertRecordToLine(Client);
					MyFile << DataLine << endl;
				}
			}
			MyFile.close();
		}
		return vClients;
	}
	bool DeleteClientByAccountNumber(string AccountNumber, vector <stClient>& vClients)
	{
		stClient Client;
		char Answer = 'n';
		if (FindClientByAccountNumber(AccountNumber, vClients, Client))
		{
			PrintClientRecord(Client);
			cout << "\n\nAre You Sure You Want To Delete This Account? Y/N ? ";
			cin >> Answer;
			if (toupper(Answer) == 'Y')
			{
				MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
				SaveClientsDataToFile(FileName, vClients);
				// Refresh Clients
				vClients = LoadDataFromFileToVector(FileName);
				cout << "\nClient Deleted Successfully.";
				return true;
			}
		}
		else
		{
			cout << "\nClient With Account Number (" << AccountNumber << ") is Not Found!";
			return false;
		}
	}
	stClient ChangeClientRecord(string AccountNumber)
	{
		stClient Client;
		Client.AccountNumber = AccountNumber;
		cout << "\n\nEnter PinCode? ";
		getline(cin >> ws, Client.PinCode);
		cout << "Enter Name? ";
		getline(cin, Client.Name);
		cout << "Enter Phone? ";
		getline(cin, Client.PhoneNumber);
		cout << "Account Balance? ";
		cin >> Client.AccountBalance;
		return Client;
	}

	bool UpdateClientDataByAccountNumber(string AccountNumber, vector <stClient>& vClients)
	{
		stClient Client;
		char Answer = 'n';
		if (FindClientByAccountNumber(AccountNumber, vClients, Client))
		{
			PrintClientRecord(Client);
			cout << "\n\nAre You Sure You Want Update This Client? Y/N ? ";
			cin >> Answer;
			if (toupper(Answer) == 'Y')
			{
				for (stClient& C : vClients)
				{
					if (C.AccountNumber == AccountNumber)
					{
						C = ChangeClientRecord(AccountNumber);
						break;
					}
				}
				SaveClientsDataToFile(FileName, vClients);
				cout << "\nClient Updated Successfully.";
				return true;
			}
		}
		else
		{
			cout << "\nClient With Account Number (" << AccountNumber << ") is Not Found!";
			return false;
		}
	}

}

