//University Admission Management System

#include<iostream>
using namespace std;

void print_menu();
void calculate_aggregate(float matric_marks, float inter_marks, float ecat_marks);
void compare_marks(string stu1, int ecat_marks1, string stu2, int ecat_marks2);
main()
{
	int choice;
	system("cls");
	print_menu();
	cout << "Enter the corresponding number to continue." << endl << endl;
	cout << "1. Calculate aggregate" << endl;
	cout << "2. Compare marks" << endl;
	cout << "Choice: ";
	cin >> choice;	
	if(choice == 1)
	{
		float matric_marks, inter_marks, ecat_marks;
		cout << "Enter your marks in matric: ";
		cin >> matric_marks;	
		cout << "Enter your marks in inter: ";
		cin >> inter_marks;
		cout << "Enter your marks in ecat: ";
		cin >> ecat_marks;
		calculate_aggregate(matric_marks, inter_marks, ecat_marks);
	}
	if(choice == 2)
	{
		string stu1, stu2;
		int ecat_marks1, ecat_marks2;
		cout << "Name of student 1: ";
		cin >> stu1;
		cout << "Enter ecat marks: ";
		cin >> ecat_marks1;
		cout << "Name of student 2: ";
		cin >> stu2;
		cout << "Enter ecat marks: ";
		cin >> ecat_marks1;
		compare_marks(stu1, ecat_marks1, stu2, ecat_marks2);
	}
}





















void print_menu()
{
	cout << endl << endl;
	cout << "                  ##       ##   #########   ##########" << endl;
	cout << "                  ##       ##   #########   ##########" << endl;
	cout << "                  ##       ##   ##              ##    " << endl;
	cout << "                  ##       ##   ##              ##    " << endl;
	cout << "                  ##       ##   #########       ##    " << endl;
	cout << "                  ##       ##   #########       ##    " << endl;
	cout << "                  ##       ##   ##              ##    " << endl;
	cout << "                  ##       ##   ##              ##    " << endl;
	cout << "                  ###########   #########       ##    " << endl;
	cout << "                  ###########   #########       ##    " << endl << endl << endl << endl << endl;
	cout << "# # ### ### # # ### ##   ## ### ### # #     #  ##  # # ###  ##  ## ###  #  ###                                                         " << endl;
	cout << "# # # #  #  # # #   # # #    #   #  # #    # # # # ###  #  #   #    #  # # # #                                                         " << endl;
	cout << "# # # #  #  # # ##  ##   #   #   #   #     ### # # ###  #   #   #   #  # # # #                                                         " << endl;
	cout << "# # # #  #  # # #   # #   #  #   #   #     # # # # # #  #    #   #  #  # # # #                                                         " << endl;
	cout << "### # # ###  #  ### # # ##  ###  #   #     # # ##  # # ### ##  ##  ###  #  # #                                                         " << endl << endl << endl;
	cout << "# #  #  ###  #   ## ### # # ### ### ###     ## # #  ## ### ### # #                                                                     " << endl;
	cout << "### # # # # # # #   #   ### #   # #  #     #   # # #    #  #   ###                                                                     " << endl;
	cout << "### ### # # ### # # ##  ### ##  # #  #      #   #   #   #  ##  ###                                                                     " << endl;
	cout << "# # # # # # # # # # #   # # #   # #  #       #  #    #  #  #   # #                                                                     " << endl;
	cout << "# # # # # # # #  ## ### # # ### # #  #     ##   #  ##   #  ### # #                                                                     " << endl << endl << endl;
}




void calculate_aggregate(float matric_marks, float inter_marks, float ecat_marks)
{
	float aggregate = ((matric_marks / 1100) * 30) + ((inter_marks / 550) * 30) + ((ecat_marks / 400) * 40);
	cout << "Aggregate: " << aggregate;
}



void compare_marks(string stu1, int ecat_marks1, string stu2, int ecat_marks2)
{
	if(ecat_marks1 > ecat_marks2)
	{
		cout << "Roll no. 1: " << stu1 << endl;
		cout << "Roll no. 2: " << stu2 << endl;
	}
	else
	{
		cout << "Roll no. 1: " << stu2 << endl;
		cout << "Roll no. 2: " << stu1 << endl;
	}
}