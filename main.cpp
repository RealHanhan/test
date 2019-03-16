//e24076035簡成翰
//lab2
//Mar 13 2019
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include"bmi.h"
using namespace std;

int main()
{
	BMICal BMIreal;	//Instantiation

	ifstream Input("file_in.txt", ios::in);
	if (!Input) {
		cerr << "<error input>\nPlease add new file with data, file name needs to be referred to as 'file_in.txt'.\n";
		exit(1);
	}
	ofstream Output("file_out.txt", ios::out);
	if (!Output) {
		cerr << "Unable to create file.\n";
		exit(1);
	}
	else
		cout << "<Ring>\nFile is created as following displayed！\nYou're able to find it inside of the programming folder.\nfile name is'file_out.txt'.\n";

	double height;
	double weight;
	cout << "Calculation of BMI from inserted data:\n";
	cout << "BMI     Category" << endl;
	while (Input >> height >> weight) {
		
		BMIreal.setBMI(height, weight);
		Output << setprecision(4) << BMIreal.BMIpre << "	" << BMIreal.s << endl;
	/*	BMIreal.BMI(height, weight);*/
	}

	Input.clear();
	ifstream In("input.txt", ios::in);

	/*if (!In) {
		cerr << "Please add new file with data\n";
		exit(1);
	}
	double h;
	double w;
	cout << "Original data:\n";
	while (In >> h >> w) {
		cout << h <<"\t" << w << endl;	
	}
	In.clear();*/
	//not yet output file
}
