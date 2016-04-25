#include <iostream>
#include <string>
#include <fstream>
using namespace std;


template<typename ItemType>
class data
{
public:
	ItemType Set(ItemType a){
		this.value = a;
	}
	ItemType Get(){
		return this.value;
	}
	ItemType Add(ItemType item){
		return this.value += item;
	}
	ItemType Sub(ItemType item){
		return this.value -= item;
	}
	ItemType Mul(ItemType item){
		return this.value *= item;
	}
	ItemType Div(ItemType item){
		if (item == 0){
			cout << "ERROR! Cannot devide by Zero" << endl;
		}
		else
			return this.value /= item;
	}
	void Print();
	data(ItemType a, std::string Name){
		Name.copy(this.name);
		this.value = a;
	}// Constructor
private:
	ItemType value;
	std::string	name;
};



class tracker
{
private:
	string vars_names[100];
	int track;
public:
	int tracker_insert(string var){
		if (tracker_look(var) != -1){ //found
			return track;
		}
		else{
			vars_names[track].copy(var);
			return track;
		}
	}
	int tracker_look(string var){
		int i = 0;
		while (i <= track){
			if (strcmp(var, vars_names[track]) == 0){	// found
				return 0;
			}
			i++;
		}
		return -1;
	}

	string getname(int tracker){
		return vars_names[tracker];
	}
	tracker(){
		track = 0;
		vars_names[] = { "NONO", "NONO" };
	}
};


int main(){
	int line_number = 0;
	tracker a;
	data d[100];
	// opening the file
	ifstream myfile("example.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			line_number++;

			string str = line;
			string word;

			stringstream stream(str);

			while (getline(stream, word, ' '))
				thelist.push_back(word);

			list<string>::iterator i;

			for (i = thelist.begin(); i != thelist.end(); ++i){
				if ((strcmp(i, "Let") == 0)){
					i++;	// skip i goto next
					if ((strcmp(i, "Let") == 0)){
						cout << "cannot use keyword as variable name";
						return 0;
					}
					else if (i.find_first_of("0", 1) || i.find_first_of("1", 1) || i.find_first_of("2", 1) || i.find_first_of("3", 1) || i.find_first_of("4", 1) || i.find_first_of("5", 1) || i.find_first_of("6", 1) || i.find_first_of("7", 1) || i.find_first_of("8", 1) || i.find_first_of("9", 1)){
						cout << "Ezpecting a variable name at line" << line_number << endl;
					}
					else{
						int track = a.tracker_insert(i);
						i++;	// getting next val
						if ((strcmp(i, "=") == 0)){
							i++;
							if (i.find_first_of("0", 1) || i.find_first_of("1", 1) || i.find_first_of("2", 1) || i.find_first_of("3", 1) || i.find_first_of("4", 1) || i.find_first_of("5", 1) || i.find_first_of("6", 1) || i.find_first_of("7", 1) || i.find_first_of("8", 1) || i.find_first_of("9", 1)){
								d[track] = data(i.toint();, a.getname(track));
							}
						}
						else{
							cout << "Error expecting an assignment operator";
							return 0;
						}
					}
				}
				else if ((strcmp(i, "Print") == 0)){
					i++;
					if (i.find_first_of("0", 1) || i.find_first_of("1", 1) || i.find_first_of("2", 1) || i.find_first_of("3", 1) || i.find_first_of("4", 1) || i.find_first_of("5", 1) || i.find_first_of("6", 1) || i.find_first_of("7", 1) || i.find_first_of("8", 1) || i.find_first_of("9", 1)){
						cout << "sorry cannot find integers as yet";
					}
					else if ((strcmp(i, "Print") == 0) || (strcmp(i, "Let") == 0)){
						cout << " ERROR expecting a variable;
					}
					else {
						int place = a.tracker_look();
						cout << d[place].Get();
					}
				}
			}

			cout << line << '\n';


		}
		myfile.close();
	}

	else cout << "Unable to open file";

}