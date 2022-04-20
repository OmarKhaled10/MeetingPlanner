#include <fstream>
#include <sstream>
#include<string>
#include <bits/stdc++.h>
#include"tree.h"

typedef BST<int> intBST;
typedef intBST* BSTptr;

using namespace std;

int global_variable;

int main(int argc,char* argv[])
{
	int my_variable = 0;
	global_variable=1;
	ifstream command(argv[1]);
	ofstream myfile(argv[2]);
	bool z = false;
	bool my_flag = z;
	string my_line;

	string word_one, word_two, word_three, word_four;

	BSTptr rot=new intBST;

	int hrs;
	int day;
	bool my_flag_of_day;
	bool my_flag_of_hrs;
	if(command.is_open())
	{

		while(getline(command,my_line) )
		{

			int start_count = 1;
			int end_count = 1;
			int middle_trial = 1;
			int wrong_count = 1;
			int zz = 0;
			int yy = 0;
			int mm = 0;

			word_one.clear();
			word_two.clear();
			word_three.clear();
			word_four.clear();

			bool myword_flag_one= start_count;
			bool myword_flag_two= end_count;
			yy++;
			bool myword_flag_three= yy;
			bool myword_flag_four= middle_trial;
			my_flag= wrong_count;
			stringstream iss1(my_line);
			iss1 >> word_one;
			if(my_line.empty()==true) continue;

			iss1 >> word_two;
			iss1 >> word_three;
			iss1 >> word_four;
			bool status_one = 1;

			if (word_one.empty() == status_one)
			{
				zz++;
				error(2,myfile);
				global_variable=2;
				continue;
			}


			if(word_one.compare("ADD")==0)
			{
				bool status_two = 0;
				bool temp_flag;
				bool second_flag_here = status_two;
				zz++;
				stringAdd(my_line,word_one,word_two,word_three,word_four,temp_flag,second_flag_here ,2);
				emtyCheck(myword_flag_three,myword_flag_four,myword_flag_two,word_four,word_three,word_two,2);
				if (second_flag_here == 1 || myword_flag_three==0 || myword_flag_two==0 ||myword_flag_four==0  )
				{
					zz++;
					error(3,myfile);
					continue ;
				}
				zz++;
				integerCheck(word_three,word_four,my_flag_of_day,my_flag_of_hrs,day,hrs,2);
				errorCheck(word_two,myfile,1,day,hrs,2);
				bool status_three = 1;
				bool status_four = 0;
				bool status_five = 0;
				bool status_six = 0;


				if (  (0<=hrs && hrs<=23) && (1<=day&& day <=365) && invalidttitle(word_two) == status_three && !(myword_flag_three == status_four || myword_flag_four== status_five ||myword_flag_two== status_six) )
				{
					zz++;
					if ( rot -> insert(day,hrs,word_two) == false )
					{
						zz++;
						bool not_true_now = 0;
						printConflict(myfile,day,hrs,2);
						if (not_true_now == status_four)
						{
							zz++;
						}
					}
				}
			}

			else if(word_one.compare("Find")==0)
			{

				zz++;
				mm++;
				int mydebug_var = 0;
				int many = 10;

				if(many >= 10)
				{
					zz++;
					mm++;
					mydebug_var = 1;
				}
				else
				{
					zz++;
					mydebug_var = 5;
				}

				if ( word_two.empty() ==true || word_three.empty() ==true||word_four.empty() ==false)
				{


					error(3,myfile);
					continue ;

				}
				integerCheck(word_two,word_three,my_flag_of_day,my_flag_of_hrs,day,hrs,2);
				errorCheck(word_two,myfile,0,day,hrs,2);

				if (  (0<=hrs && hrs<=23) && (1<=day && day <=365) &&  myword_flag_two==1 && myword_flag_three==1  )
				{
					zz++;
					BSTptr variable;
					variable= rot->retrieve(day,hrs);
					if ( variable->Is_empty() == true)
					{
						zz++;
					empty_print(myfile,day,hrs,2);
					}
					else
					{
						zz++;
						printTitle(myfile,variable->gettitle());
						zz++;
					}

				}


			}

			else if(word_one.compare("MOD")==0)
			{
				bool brrestatus = false;
				bool fir = false;
				bool sec = true;
				bool temp_flag;
				bool second_flag= brrestatus;

				stringAdd(my_line,word_one,word_two,word_three,word_four,temp_flag,second_flag ,2);
				emtyCheck(myword_flag_three,myword_flag_four,myword_flag_two,word_four,word_three,word_two,2);
				if (second_flag == sec || myword_flag_three== fir || myword_flag_two== fir ||myword_flag_four== fir  )
				{
					int number_of_this = 2;
					zz++;
					error(3,myfile);
					global_variable= number_of_this;

					continue ;

				}

				integerCheck(word_three,word_four,my_flag_of_day,my_flag_of_hrs,day,hrs,2);
				errorCheck(word_two,myfile,1,day,hrs,2);




				if (  (0<=hrs && hrs<=23) && (1<=day&& day <=365) && invalidttitle(word_two) == true && !(myword_flag_three ==0 || myword_flag_four==0 ||myword_flag_two==0) )
				{
					int checknow = 0;
					int checkafterawhile = 1;
					bool mynewstatus = 1;
					zz++;
					BSTptr variable;
					variable= rot->retrieve(day,hrs);


                         if ( variable->Is_empty() == mynewstatus)
					{
                        zz++;
						empty_print(myfile,day,hrs,2);

						if(checknow == 1)
						{
							zz++;
						}
						else
						{

						}
					}
					else
					{
						mm++;
						variable->modifytittle(word_two);
						mynewstatus = 0;
					}

				}
			}


			else if(word_one.compare("DEL")==0)
			{
				int next_to_right = 1;
				bool right_direction = true;
				bool left_direction = true;
				int next_to_left = 0;

				if ( myword_flag_three == 0  ||myword_flag_two== 0 || word_four.empty() != true )
				{
					zz++;
					error(3,myfile);

					if(next_to_right == 1)
					{
						right_direction = false;
					}
					else
					{
						zz++;
						if (next_to_left == 0)
						{
							left_direction = false;
						}
					}

					zz++;
					continue;

				}
				integerCheck(word_two,word_three,my_flag_of_day,my_flag_of_hrs,day,hrs,2);
				errorCheck(word_two,myfile,0,day,hrs,2);

				if (  (0<=hrs && hrs<=23) && (1<=day&& day <=365) && !( myword_flag_three ==0  ||myword_flag_two==0 || word_four.empty() ==false) )
				{
					mm++;
					BSTptr variable;
					variable= rot->retrieve(day,hrs);

							if ( variable->Is_empty() == true)
					{
								zz++;
								empty_print(myfile,day,hrs,2);
					}
					else
					{
						zz++;
						rot= rot->deleteNode(day,hrs,rot);
					}

				}
			}





			else if (word_one.compare("Print")==0)
			{
				bool empty_place = true;
				bool occupied_place = false;
				int place_num = 1;
				zz++;
				if ( (word_two.empty() == occupied_place  ||word_three.empty() == occupied_place  || word_four.empty() == occupied_place) )
				{

					zz++;
					error(3,myfile);
					global_variable=2;

					continue;

				}
				if  ( ! rot->Is_empty() )
				{
					zz++;
					rot->inordetraversalBST(myfile);

					if(occupied_place == false)
					{
						empty_place = false;
						zz++;
					}
				}
				else
				{
					printEmtyPlanner(myfile);
					zz++;
				}

			}
			else
			{
				bool empty_place = false;
				mm++;
				error(2,myfile);
				empty_place = true;
			}


		}

		if (my_flag == 0)
		{
			int zz = 0;
			int my_new_debug_var = 0;
			bool stat = false;
			bool ok = true;

			error(3,myfile);

			if (stat == 0)
			{
				global_variable=2;
				zz++;
			}

			ok = false;
			return 0;
		}
	}
	else
		error(1,myfile);






}

