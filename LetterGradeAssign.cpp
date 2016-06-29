#include <iostream>
using namespace std;

const int MAXSIZE = 25;


void getlist(int [], int&);
void putlist(const int [], int);
void find_grade(const int [], int, char []);
void print_grades(const int[], const char [],int);

int main()
{
    int list[MAXSIZE], num_items;
    char lettergrade[MAXSIZE], A, B,C,D,F;
    
    getlist(list, num_items);
    putlist( list, num_items);
    find_grade(list, num_items, lettergrade);
    print_grades(list, lettergrade, num_items);
    
    system("pause");
    return 0;
}

void getlist(int list [], int& num_items)
{
     int i;
    cout << "Please enter the number of array values: ";
    cin  >>  num_items;
    
    for(i = 0; i < num_items; i++)
          {
               cout << "Enter the next a grade value " << endl;
               cin >> list [i];
               }
}
void putlist (const int list [], int num_items)
{
     cout << "Array Elements " << endl;
      for (int i = 0; i < num_items; i++)
          cout << i << "  " << list [i] << endl;
}

void find_grade(const int list[], int num_items,char lettergrade[])
{
     char A, B,C,D,F;
     for (int v, i = 0; i < num_items; i++)
     {
      v = list[i];
      if (v >= 90)
     lettergrade[i] = 'A';
     else if (list[i] >= 80)
     lettergrade[i] = 'B';
     else if (list[i] >= 70)
     lettergrade[i] = 'C';
     else if (list[i] >= 60)
     lettergrade[i] = 'D';
     else if (list[i] <= 50)
     lettergrade[i]= 'F';
     }

}


void print_grades(const int list[], const char lettergrade[],int num_items)
{
          for(int  i = 0; i < num_items; i++)
          
          
          cout << "Index: " << i << " Percent: " << list[i] << " Letter: " << lettergrade[i] << endl;
          cout << setw(10);
}   
