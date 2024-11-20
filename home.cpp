
using namespace std;
#include <iostream>

class people
{
	struct FIB
	{
		string name;
		string surname;
		string fachername;	
		
	};
	int count;
	FIB* Fullname;
	int countpeople = 0;
public:
	

	people():Fullname(nullptr) {
		Fullname->name = "no name";
		Fullname->surname = "no surname";
		Fullname->fachername = "no fachername";



	}
	people(int count) {
		Fullname = new FIB[count];
		countpeople=count;
	}

	 void showperson1() {
		for (int i = 0; i < countpeople; i++)
		{
			cout <<"name:"<< Fullname[i].name << "\n";
			cout <<"surname:" << Fullname[i].surname << "\n";
			cout <<"fachername:" << Fullname[i].fachername << "\n";
		}
		
	}
	void get(string name1, string surname1, string facher1){
		for (int i = 0; i < countpeople; i++)
		{
			Fullname[i].name = name1;
			Fullname[i].surname = surname1;
			Fullname[i].fachername = facher1;
			
		}
	
	

	}



	~people() {
		if (Fullname != nullptr)
		{
			delete[] Fullname;
		}


	}
	void show() {
		cout << " name:" << Fullname->name << "\n";
		cout << " surname:" << Fullname->surname << "\n";
		cout << " fachername:" << Fullname->fachername << "\n";

	}


};

class cvar
{
	people* hitman;
	int count;
	int currentSize;
	int numberromea;
	static int countpeople;
public:
	cvar() : hitman(nullptr), count(0), currentSize(0) { numberromea = 0; }

	cvar(int count) : count(count) {
		hitman = new people[count];
		countpeople = count;
	}

	~cvar() {
		if (hitman != nullptr)
		{
			delete[] hitman;
		}
	}
	void show() {
		cout << "number numberromea:" << numberromea;

	}
	void showperson() {

	
		for (int i = 0; i < countpeople; i++)
		{
			hitman[i].showperson1();
		}
	}	
	void get(string name, string surname, string facher) {
		for (int i = 0; i < countpeople; i++)
		{
			hitman[i].get(name, surname, facher);
		}
	}



};

class home
{
	cvar* room;
	int count;
	int currentSize;
	int numberhoma;
	int count1 = 0;
	int count2 = 0;
	static int counthome;
	static int countroome;
public:
	home() : room(nullptr), count(0), currentSize(0) { numberhoma = 0; }

	home(int count) : count(count), currentSize(0) {
		room = new cvar[count];
		counthome++;
		countroome = count;
	}
	~home() {
		if (room != nullptr)
		{
			delete[]room;
		}
	}
	 void show() {

		 cout << "number home:" << counthome << "\n";
		 for (int i = count1; i < countroome; i++)
		 {
	
			 cout << "number room:" << i + 1 << "\n";
			 cout << "people:" <<"\n";
			 room[i].showperson();
		 
		 }
		 count1++;



	}

	 void add(string name ,string surname,string facher) {
		 for (int i = count2; i < countroome; i++)
		 {
			 room[i].get(name, surname,facher);

		 }
		 count2++;
	 }
};
int home::counthome = 0;
int home::countroome = 0;
int cvar::countpeople = 0;



int main()
{
	home sd(1);
	people sd2(1);
sd2.get("bogdan", "sddd", "sdsd");
sd.show();
sd2.showperson1();



}

