#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main ()
{


    int   size1 , size2 , set1[100]={} , set2[100]={} , seta[100] = {} , setb[100] = {};
    string file_name1 , file_name2  ;
    char choice ;
    cout << "What do you like to do today?" << endl << "1- Enter a new data set" << endl ;
    cout << "2- Load two data sets" << endl << "3- Display data sets" << endl << "E- End" << endl ;
    while (true)
    {
        cin >> choice ;
        if (choice == '1')
        {
            cout << "Enter the file's name  " << endl ;
            cin >> file_name1 ;
            ofstream file1 ;
            file1.open(file_name1.c_str()) ;
            cout << "Enter the size of  the set : " ;
            cin >> size1 ;
            cout << "Enter the elements of  the set : " ;
            for (int i =0 ; i < size1 ; i++)
            {
                cin >> set1[i] ;
                file1 << set1[i] << " "  ;
            }
            cout << "Choice 1 is ended" << endl ;
            file1.close () ;
            continue  ;
        }
        else if (choice == '2' )
        {
            cout << "Enter the file1's name :  "  ;
            cin >> file_name1 ;
            cout << "Enter the size of set1 :  "  ;
            cin >> size1 ;

            cout << "Enter the file2's name :  " ;
            cin >> file_name2 ;
            cout << "Enter the size of set2 :  " ;
            cin >> size2 ;

            ifstream file1 ;
            file1.open(file_name1.c_str()) ;
            for (int i =0 ; i < size1 ; i++)
            {
                file1 >> set1[i] ;
                seta[i] = set1[i] ;
            }

            ifstream file2 ;
            file2.open(file_name2.c_str()) ;
            for (int i =0 ; i < size2 ; i++)
            {
                file2 >> set1[i] ;
                setb[i] = set1[i] ;
            }
            cout << "Choice 2 is ended" << endl ;
            continue ;
        }
         else if (choice == '3' )
        {
            cout << "Enter the file1's name :  "  ;
            cin >> file_name1 ;
            cout << "Enter the size of set1 :  "  ;
            cin >> size1 ;

            cout << "Enter the file2's name :  " ;
            cin >> file_name2 ;
            cout << "Enter the size of set2 :  " ;
            cin >> size2 ;

            ifstream file1 ;
            file1.open(file_name1.c_str()) ;
            for (int i =0 ; i < size1 ; i++)
            {
                file1 >> set1[i] ;
                cout << set1[i] << " " ;
            }
            cout << "\n" ;

            ifstream file2 ;
            file2.open(file_name2.c_str()) ;
            for (int i =0 ; i < size2 ; i++)
            {
                file2 >> set1[i] ;
                cout << set1[i] << " " ;
            }
            cout << endl << "Choice 3 is ended" << endl ;
            continue ;
        }
        else if (choice == 'E')
        {
            cout << "Closed" ;
            return 0 ;
        }

    }




}
