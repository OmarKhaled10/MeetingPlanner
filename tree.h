#include <fstream>
#include <sstream>
#include<string>
#include<iostream>
using namespace std;

extern int global_variable;

template<class btelementType >

class tree
{
public:
	tree();
	btelementType Get_data()const;
	tree* lft();
	bool Is_empty()const;
	tree* rit();
	void Insert ( const btelementType & x);
	bool Make_Lft(tree*T1);
	bool Make_rit(tree*T2);
protected :

	btelementType tree_data;
	tree*ritTree;
	tree*lftTree;
	bool nulltree;

};

template<class btelementType>
tree<btelementType>::tree()
{
	int zz=0;
	int x=0;
	bool y =true;
	ritTree=0;
	zz++;
	lftTree=0;
	zz++;
	nulltree=y;
	zz++;
}
template<class btelementType>
bool tree<btelementType> :: Is_empty()const
{
	int zz=0;
	zz++;
	return nulltree;

}
template<class btelementType>

btelementType tree<btelementType>:: Get_data()const
{
	bool yy;
	int zz=0;
	yy=this->Is_empty();
	zz++;
	if (  ! yy)
	{
		zz++;
		return tree_data;
	}
	zz++;
}


template<class btelementType>
void tree<btelementType> ::Insert( const btelementType & x)
{
	int zz=0;
	bool y;
	tree_data=x;
	zz++;
	bool yy=Is_empty();
	zz++;
	if ( yy )
	{
		zz++;
		lftTree=new tree;
		zz++;
		y =false;
		nulltree=y;
		zz++;
		ritTree=new tree;
	}
	zz++;
}




template<class btelementType>
tree<btelementType>* tree<btelementType> :: rit()
{
	int zz=0;
	bool y =false;
	zz++;
	if ( nulltree==y)
	{
		zz++;
		return ritTree;
	}
	else
	{
		zz++;
		return 0;
	}

}

template<class btelementType>
tree<btelementType>* tree<btelementType> :: lft()
{
	int zz=0;
	bool y;
	y=false;

	if ( nulltree==y)
	{
		zz++;
		return lftTree;
	}
	else
	{
		zz++;
		return 0;
	}

}


template<class btelementType>
bool tree<btelementType>:: Make_Lft(tree*T1)
{
	int zz=0;
	bool yy=Is_empty();
	zz++;
	bool y;
	if(yy)
	{
		zz++;
		y=false;
		return y ;
	}
	y =lft()->isempty();
	zz++;
	if(y)
	{
		zz++;
		delete lft();
		zz++;
		lftTree=T1;
	}
	zz++;
	y=false;
	return y;


}


template<class btelementType>
bool tree<btelementType>:: Make_rit(tree*T1)
{
	int zz=0;
	bool yy=Is_empty();
	bool y;
	zz++;
	if(   yy )
	{
		zz++;
		y= false;
		return y ;
	}
	y=lft()->isempty();

	if( y)
	{
		zz++;
		delete lft();
		zz++;
		ritTree=T1;
	}
	zz++;
	y= false;
	return y ;

}

template<class btelementType >
class BST:public tree<btelementType>
{

	using tree<btelementType>::nulltree;
public:

	BST();
	bool insert(const btelementType&d,const btelementType& jj,string kk);
	BST<btelementType>* retrieve(const btelementType&djn,const btelementType& jio);
	string gettitle();
	int Get_days();
	int Get_hours();

	void modifytittle(string s2);
	BST* deleteNode(int qq,int gg ,BST*rot);
	BST* Findmin();
	void  inordetraversalBST(ofstream &File);



private :
	int hrs;
	int dys;
	string ttle;
	BST * ptrBST;
	BST* ritTree;
	BST* lftTree;


};

template<class btelementType >
BST<btelementType>::BST():tree<btelementType>()
{
	int zz=0;
	bool y;
	lftTree=0;
	zz++;
	dys=0;
	zz++;
	y= true;
	nulltree=y;
	zz++;
	ritTree=0;
	zz++;
}

template<class btelementType >
void BST<btelementType>::  modifytittle(string s2)
{
	string y;
	int zz=0;
	zz++;
	y=s2;
	zz++;
	ttle=y;
	zz++;
}



template<class btelementType >
BST<btelementType>* BST<btelementType> :: Findmin()
{
	int zz=0;
	bool y;
	BST* temp;
	zz++;
	temp=this;
	zz++;
	y= false;
	while (temp->lftTree->nulltree ==y )
	{
		zz++;
		temp=temp->lftTree;
		zz++;
	}

	zz++;
	return temp;

}



template<class btelementType >
std::string BST<btelementType> :: gettitle()
{
	int zz=0;
	int y=0;
	y+=zz;
	zz++;
	return ttle;
}

template<class btelementType >
int BST<btelementType> :: Get_days()
{
	int zz=0;
	int y=0;
	zz++;
	y+=zz;
	return dys;
}

template<class btelementType >
int BST<btelementType> :: Get_hours()
{
	int zz=0;
	int y=0;
	zz++;
	y+=zz;
	return hrs;
}



template<class btelementType >
BST<btelementType>* BST<btelementType> :: deleteNode(int qq,int gg,BST<btelementType>* rot)
{

	int zz=0;
	int x=0;
	bool y ;
	bool z;
	y= true;
	zz++;
	x+=zz;
	if (nulltree == y)
	{
		zz++;
		return rot;
	}

	else if ( qq<dys || ( qq==dys && gg<hrs))
	{
		zz++;
		lftTree=rot->lftTree->deleteNode(qq,gg,rot->lftTree);
		zz++;

	}
	else if ( qq>dys || ( qq==dys && gg>hrs))
	{
		zz++;
		ritTree=rot->ritTree->deleteNode(qq,gg,rot->ritTree);
		zz++;

	}
	else
	{
		zz++;
		z=rot->lftTree->nulltree;
		bool kkk;
		kkk=rot->ritTree->nulltree;
		if (z == y &&  kkk== y)
		{
			zz++;
			rot->nulltree=y;
			zz++;
			delete rot;
			zz++;
			return ritTree;

		}
		else if (rot->lftTree->nulltree == y )
		{
			zz++;
			BST* temp=rot;
			zz++;
			rot=rot->ritTree;
			zz++;
			delete temp;
			zz++;

		}

		else if (rot->ritTree->nulltree == y)
		{
			zz++;

			BST* temp=rot;
			zz++;
			rot=rot->lftTree;
			zz++;
			delete temp;
			zz++;
		}
		else
		{
			zz++;
			BST* temp=(rot->ritTree);
			zz++;
			temp=temp->Findmin();
			zz++;
			dys=temp->dys;
			zz++;
			hrs=temp->hrs;
			zz++;
			ttle=temp->ttle;
			zz++;
			rot->ritTree=rot->ritTree->deleteNode(temp->dys,temp->hrs,rot->ritTree);
			zz++;
		}
		zz++;
	}

	zz++;
	gg=zz;
	qq=zz;
	return rot;


}

template<class btelementType >
bool BST<btelementType>::insert(const btelementType&d,const btelementType& jj,string kk)
{
	bool flg;
	int zz=0;
	bool y;
	bool yy;
	zz++;
	y= true;
	zz++;
	yy= false;
	if (nulltree==y)
	{
		zz++;
		nulltree=yy;
		zz++;
		lftTree=new BST;
		zz++;
		ritTree=new BST;
		zz++;
		dys=d;
		zz++;
		hrs=jj;
		zz++;
		ttle=kk;
		zz++;

		return y;
	}
	else if (d>dys || ( d== dys && jj>hrs)  )
	{
		zz++;
		flg=ritTree->insert(d,jj,kk);
		zz++;
	}
	else if ( d<dys || ( d==dys && jj<hrs))
	{
		zz++;
		flg=lftTree->insert(d,jj,kk);
		zz++;
	}
	zz++;
	hrs+=zz;
	hrs-=zz;
	return flg;

}

template<class btelementType >

void BST<btelementType> :: inordetraversalBST(ofstream &File)
{
	int zz=0;
	bool y;
	zz++;
	y= false;
	if(nulltree==y && this !=0)
	{
		zz++;
		lftTree->inordetraversalBST(File);
		zz++;
		if ( global_variable ==1 )
		{
			zz++;
			cout<<ttle<<" "<<dys<<" "<<hrs;
			zz++;
			File<<ttle<<" "<<dys<<" "<<hrs;
			zz++;
			global_variable=2;
			zz++;
		}
		else
		{
			zz++;
			cout<<"\n"<<ttle<<" "<<dys<<" "<<hrs;
			zz++;
			File<<"\n"<<ttle<<" "<<dys<<" "<<hrs;
			zz++;
		}
		ritTree->inordetraversalBST(File);
		zz++;
	}
	zz++;

}

template<class btelementType >
BST<btelementType>* BST<btelementType> ::retrieve(const btelementType&djn,const btelementType& jio)
{
	int zz=0;
	bool y;
	zz++;
	y=true;
	if (nulltree ==y )
	{
		zz++;
		return this;
	}
	else if ( djn<dys || ( djn==dys && jio<hrs))
	{
		zz++;
		return lftTree->retrieve(djn,jio);


	}
	else if ( djn>dys || ( djn==dys && jio>hrs))
	{
		zz++;

		return ritTree->retrieve(djn,jio);


	}
	else
	{
		zz++;
		return this;
	}
	zz++;



}




bool invalidttitle(string s2 )
{
	int zz=0;
	bool yy;
	bool z;
	zz++;
	int gpgp;
	zz++;
	gpgp=s2.length();
	zz++;
	int len=gpgp;
	zz++;
	yy =true;
	len--;
	zz++;
	z= false;
	zz++;
	char x=s2[0];
	zz++;
	char y=s2[len];
	zz++;
	int fog=34;
	if (x==fog && y==fog)
	{
		zz++;
		return yy;
	}
	zz++;
	return z;

}

string putquotation ( string s2)
{
	int zz=0;
	int ffff;
	zz++;
	ffff=s2.length();
	zz++;
	int len=ffff;
	zz++;
	char x3[len+2];
	zz++;
	x3[0]=34;
	zz++;
	x3[len+1]=34;
	zz++;

	for(int i=0;i<(len+2);i++)
	{
		zz++;
		s2[i]=x3[i];
		zz++;
	}
	zz++;
	return s2;
}

void stringAdd(string lin,string & Command1 ,string & Command2 ,string & Command3,string & Command4,bool & flag_title,bool & flag_argument,int rr)
{
	int zz=0;
	zz=rr;
	bool zzz;
	bool yy;
	zz++;
	yy=true;
	zzz= false;
	zz++;
	Command2.clear();
	zz++;
	Command3.clear();
	zz++;
	Command4.clear();
	zz++;
	flag_title=yy;
	zz++;
	flag_argument=0;
	zz++;
	int i=0;
	zz++;
	int y;
	zz++;
	y=lin.length();
	int len=y;
	zz++;
	int quoate =0;
	zz++;
	char s2[7][len];
	zz++;
	int count=0;
	zz++;

	if( lin[i ] != '\0')
	{
		char place[10] = "not here";
	}

	else
	{
		zz++;
		return;
	}
	zz++;
	while(!isspace(lin[i]) && lin[i]!='\0'  )
	{
		zz++;
		s2[0][i]=lin[i];
		zz++;
		i++;
		zz++;
	}
	if( lin[i ] != '\0')
	{
		int * myhereptr = NULL;
	}

	else
	{	zz++;
		return;}

	zz++;
	s2[0][i]='\0';
	zz++;
	Command1=s2[0];
	zz++;

	while(isspace(lin[i]) &&lin[i]!='\0'  )

	{
		zz++;
		i++;
	}
	count =0;
	zz++;
	if( lin[i] != '\0')
	{
		string here = "not true";
	}

	else
	{
		zz++;
		return;
	}

	int fog;
	zz++;
	fog=34;
	zz++;
	if (lin[i] ==fog )
	{
		zz++;
		s2[1][count]=lin[i];
		zz++;
		i++;
		zz++;
		count++;
		zz++;
		int temp=i;
		zz++;
		int err_dealing=1;
		zz++;
		while (    lin[temp]!='\0' )
		{
			zz++;
			if (lin[temp]==fog )
			{
				zz++;
				quoate++;
				zz++;

			}
			zz++;
			temp++;
			zz++;

		}
		temp=i;
		zz++;



		if( lin[i ] != '\0')
			{
			char hereisnttrue = 'z';
			}

		else
		{
			zz++;
			return ;
		}

		if ( quoate >= 1)
		{
			zz++;
			int kk=0;
			zz++;
			while (  kk!=quoate && lin[i]!='\0' )
			{
				zz++;
				if (lin[i]==fog )
				{
					zz++;
					kk++;
					zz++;
				}
				s2[1][count]=lin[i];
				zz++;

				count++;
				zz++;
				i++;
				zz++;

			}

		}
		else
		{
			zz++;
			flag_title=zzz;
		}

		while ( lin [i] != '\0' &&  !isspace(lin[i]))
		{
			zz++;
			s2[1][count]=lin[i];
			zz++;
			count++;
			zz++;
			i++;
			zz++;

		}

		s2[1][count]='\0';
		zz++;
		Command2= s2[1];
		zz++;


	}
	else
	{
		zz++;
		flag_title=zzz;
	}

	if (flag_title==zzz )
	{
		zz++;
		count=0;
		zz++;
		int kek;
		zz++;
		kek=32;
		while (  lin[i]!=kek )
		{
			zz++;
			s2[1][count]=lin[i];
			zz++;
			count++;
			zz++;
			i++;
			zz++;
		}
		zz++;
		s2[1][count]=lin[i];
		zz++;
		count++;
		zz++;
		i++;
		zz++;
		s2[1][count]=lin[i];
		zz++;
		s2[1][count]='\0';
		zz++;
		Command2= s2[1];
		zz++;
		if( lin[i ]== '\0')
		{
			zz++;
			Command3.empty();
			Command4.empty();
			return ;
		}
	}

	while(isspace(lin[i])  && lin[i]!='\0' )
	{
		zz++;
		i++;
		zz++;
	}
	if( lin[i ] != '\0')
	{int whyhere = 1;}

	else
	{
		zz++;
		return;
	}

	zz++;
	count=0;
	zz++;
	while (  !isspace(lin[i]) && lin[i]!='\0'    )
	{
		zz++;
		s2[3][count]=lin[i];
		zz++;
		count++;
		zz++;
		i++;
		zz++;
	}
	if( lin[i ] != '\0')
	{
		int mustntbehere = 1;
	}
	else
	{
		zz++;
		Command3.empty();
		zz++;
		return ;
	}
	zz++;
	s2[3][count]='\0';
	zz++;
	Command3=s2[3];
	zz++;
	if( lin[i ] != '\0')
	{
		int shouldntbehere = 1;
	}
	else
	{
		zz++;
		return ;
	}

	while(isspace(lin[i]) && lin[i]!='\0' )
	{
		zz++;
		i++;
	}
	if( lin[i ] != '\0')
	{
		int cantbehere = 1;
	}
	else
	{
		zz++;
		return ;
	}
	zz++;
	count=0;
	zz++;
	while (   !isspace(lin[i]) && lin[i]!='\0'   )
	{
		zz++;
		s2[4][count]=lin[i];
		zz++;
		count++;
		zz++;
		i++;
		zz++;
	}
	zz++;
	s2[4][count]='\0';
	zz++;
	Command4=s2[4];
	zz++;

	if( lin[i ]== '\0')
	{
		zz++;
		return ;
	}

	string temppx;
	zz++;
	count=0;
	zz++;
	while (   lin[i] !='\0')
	{
		zz++;
		s2[5][count]=lin[i];
		zz++;
		count++;
		zz++;
		i++;
		zz++;


	}
	zz++;
	s2[5][count]='\0';
	zz++;
	temppx=s2[5];
	zz++;

	count = 0;
	for(unsigned int j = 0; j < temppx.size(); ++j)
	{
		zz++;
		if (!isspace(temppx[j]) &&temppx[j] !='\0' )
			++count;
	}
	zz++;
	if ( count!=0)
	{
		zz++;
		flag_argument =true;

	}
	i=zz;
	return;


}

void emtyCheck(bool &flagword3 , bool &flagword4 ,bool & flagword2 ,string commandWord4 ,string commandWord3,string commandWord2,int rr)
{
	int zz=0;
	zz=rr;
	bool y;
	zz++;
	y=true;
	if (commandWord3.empty() ==y)
	{
		zz++;
		flagword3=0;
		zz++;
	}
	if (commandWord4.empty() ==y)
	{
		zz++;
		flagword4=0;
		zz++;
	}
	if (commandWord2.empty() ==y)
	{
		zz++;
		flagword2=0;
		zz++;
	}

}

void integerCheck(string commandWord3,string commandWord4,bool &flagDays , bool & flagHours,int &daays , int &hoours,int rr)
{
	int zz=0;
	zz=rr;
	zz++;
	int i=0;
	zz++;
	bool y;
	bool z;
	y=true;
	zz++;
	z= false;
	flagDays=y;
	zz++;
	flagHours=y;
	zz++;
	int count=0;
	zz++;
	while(commandWord3[i] != '\0')
	{
		zz++;
		if(commandWord3[i] == '.')
		{
			zz++;
			flagDays=z;
			zz++;
			break;
		}
		zz++;
		i++;
	}
	zz++;
	while(commandWord4[count] != '\0')
	{
		zz++;
		if(commandWord4[count] == '.')
		{
			zz++;
			flagHours=z;
			zz++;
			break;
		}
		zz++;
		count++;
	}

	if (flagDays==1   )
	{
		zz++;
		stringstream days1(commandWord3);
		zz++;
		days1>>daays;
		zz++;
	}
	else
	{
		zz++;
		int kk;
		zz++;
		kk=400;
		zz++;
		daays=kk;
		zz++;
	}
	if(flagHours ==1)
	{

		zz++;
		stringstream hours1(commandWord4);
		zz++;
		hours1>>hoours;
		zz++;
	}
	else
	{
		zz++;
		int kk;
		zz++;
		kk=400;
		zz++;
		hoours=kk;
		zz++;
	}
	zz++;
	i=zz;
	hoours+=zz;
	hoours-=zz;

}


void error (char x,ofstream &myfile )
{
	int zz=0;
	zz++;
	if ( global_variable==1 )
	{
		zz++;
		switch(x)
		{

		case 1: cout<<"File not found";myfile <<"File not found";zz++;break;
		case 2 :cout<<"Invalid command";myfile <<"Invalid command"; zz++;break;
		case 3 :cout<<"Invalid arguments";myfile <<"Invalid arguments";zz++;break;
		case 4 :cout<<"Invalid title";myfile <<"Invalid title";zz++;break;
		case 5 :cout<<"Invalid day";  myfile << "Invalid day";zz++;break;
		case 6 :cout<<"Invalid hour";myfile<<"Invalid hour";zz++;break;
		}
		zz++;
	}

	else
	{
		zz++;

		switch(x)
		{

		case 1: cout<<"\nFile not found";myfile <<"\nFile not found";zz++;break;
		case 2 :cout<<"\nInvalid command";myfile <<"\nInvalid command";zz++; break;
		case 3 : cout<<"\nInvalid arguments";myfile <<"\nInvalid arguments";zz++;break;
		case 4 : cout<<"\nInvalid title";myfile <<"\nInvalid title";zz++;break;
		case 5 : cout<<"\nInvalid day";  myfile <<"\nInvalid day";zz++;break;
		case 6 : cout<<"\nInvalid hour";myfile<<"\nInvalid hour";zz++;break;


		}
	}
	zz++;
	global_variable=2;
	zz++;


}


void errorCheck(string commandWord2,ofstream &myfile,bool what_command , int & daays, int & hoours,int rr )
{
	int zz=0;
	zz=rr;
	bool z;
	zz++;
	z= false;
	if ( invalidttitle(commandWord2) == z && what_command ==1)
	{
		zz++;
		error(4,myfile);
		zz++;

		global_variable=2;
		zz++;
	}
	if ( 1> daays ||  daays >365)
	{
		zz++;
		error(5,myfile);
		zz++;

	}
	if ( 0>hoours||hoours >23)
	{
		zz++;
		error(6,myfile);
		zz++;
	}
	zz++;
	hoours+=zz;
	hoours-=zz;
	return ;
}



void printConflict(ofstream &myfile,int daays ,int hoours ,int rr )
{
	int zz=0;
	zz=rr;
	zz++;
	bool y;
	zz++;
	if (global_variable==1)
	{
		y=true;
		zz++;
	}
	if ( y)
	{
		zz++;
		cout<<"Conflict"<<" "<<daays<<" "<<hoours;
		zz++;
		myfile<<"Conflict"<<" "<<daays<<" "<<hoours;
		zz++;
	}

	else
	{
		zz++;
		cout<<"\n"<<"Conflict"<<" "<<daays<<" "<<hoours;
		zz++;
		myfile<<"\n"<<"Conflict"<<" "<<daays<<" "<<hoours;
		zz++;
	}
	zz++;

	global_variable=2;
	zz++;


}




void empty_print(ofstream &myfile,int daays ,int hoours ,int rr)
{
	int zz=0;
	zz=rr;
	zz++;
		if ( global_variable==1)
		{
			zz++;
			cout<<"Empty"<<" "<<daays<<" "<<hoours;
			zz++;
			myfile<<"Empty"<<" "<<daays<<" "<<hoours;
			zz++;
		}
		else
		{
			zz++;
			cout<<"\n"<<"Empty"<<" "<<daays<<" "<<hoours;
			zz++;
			myfile<<"\n"<<"Empty"<<" "<<daays<<" "<<hoours;
			zz++;
		}
		zz++;
		global_variable=2;
		daays=zz;
		zz++;
}

void printTitle( ofstream &myfile,string gtttle )
{
	int zz=0;
	zz++;
	bool y;
	if (global_variable==1)
	{
		y= true;
		zz++;
	}
	if (y)
	{
		zz++;
		cout<<""<<gtttle;
		zz++;
		myfile<<""<<gtttle;
		zz++;
	}
	else
	{
		zz++;
		cout<<"\n"<<""<<gtttle;
		zz++;
		myfile<<"\n"<<""<<gtttle;
		zz++;
	}
	zz++;
	global_variable=2;
	zz++;
}


void printEmtyPlanner(ofstream &myfile)
{
	int zz=0;
	zz++;
	bool y;
	if (global_variable==1)
	{
		y= true;
	}
	if ( y )
	{
		zz++;
		cout<<"Empty Planner";
		zz++;
		myfile<<"Empty Planner";
		zz++;
		global_variable==2;
		zz++;

	}
	else
	{
		zz++;
		cout<<"\nEmpty Planner";
		zz++;
		myfile<<"\nEmpty Planner";
		zz++;
	}
		zz++;
		global_variable=2;
		zz++;

}



