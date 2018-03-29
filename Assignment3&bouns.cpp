#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{

    vector <int> union1 ;
    vector <int> setd ;
    vector <int> inter ;
    int   size1 , size2 , size3 , counter , counter2 , counter3  , set1[100]={} , set2[100]={} , seta[100] = {} , setb[100] = {} ,setc[100] = {}   ;
    string file_name1 , file_name2 ,file_name3   ;
    char choice ;
    cout << "What do you like to do today?" << endl << "1- Enter a new data set" << endl ;
    cout << "2- Load three data sets" << endl << "3- Display data sets" <<endl  << "4- Union of A, B ,C"<< endl <<
    "5- Intersection of A, B ,C" << endl<<"6- A - B - C" << endl << "E- End" << endl ;
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
          //  continue  ;
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

            cout << "Enter the file3's name :  " ;
            cin >> file_name3 ;
            cout << "Enter the size of set3 :  " ;
            cin >> size3 ;

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

            ifstream file3 ;
            file3.open(file_name3.c_str()) ;
            for (int i =0 ; i < size3 ; i++)
            {
                file3 >> set1[i] ;
                setc[i] = set1[i] ;
            }
            cout << "Choice 2 is ended" << endl ;
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

            cout << "Enter the file3's name :  " ;
            cin >> file_name3 ;
            cout << "Enter the size of set3 :  " ;
            cin >> size3 ;


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
            cout << "\n" ;

            ifstream file3 ;
            file3.open(file_name3.c_str()) ;
            for (int i =0 ; i < size3 ; i++)
            {
                file3 >> set1[i] ;
                cout << set1[i] << " " ;
            }

            cout << endl << "Choice 3 is ended" << endl ;
        //    continue ;
        }
        else if (choice == 'E')
        {
            cout << "  --------------------Closed--------------------" ;
            return 0 ;
        }
        else if (choice == '4')
        {

            counter = 0 ;
            counter3 = 0 ;
            for (int i = 0 ; i < size1 ; i++ )
            {
                union1.push_back(seta[i])  ;
            }
            for (int h = size1 ; h < size1+size2  ; h++)
            {
                union1.push_back(setb[counter])  ;
                counter += 1 ;
            }
            for (int d = size1+size2 ; d < (size1 + size2 + size3) ; d++ )
            {
              union1.push_back(setc[counter3]) ;
              counter3 += 1 ;
            }
            for (int i = 0 ; i < union1.size() ; i++)
            {
                if (union1[i] != 321321 )
                {
                    cout << union1[i] << " " ;
                }
                for(int p = i+1 ; p < union1.size() ; p++)
                {
                    if(union1[i] == union1[p])
                    {
                        union1[p] = 321321 ;
                    }
                }
            }
            cout << endl <<  " Choice 4 is ended" << endl ;
        }

        else if (choice == '5')
        {
            counter3 = 0 ;
            for (int i = 0 ; i < size1  ; i++)
            {
                for(int p = i+1 ; p < size1 ; p++)
                {
                    if(seta[i] == seta[p])
                    {
                        seta[p] = 321321 ;
                    }
                }
            }
            sort(seta , seta+size1) ;

            for(int i = 0 ; i < size1; i ++)
            {
                for(int p = 0 ; p < size2 ; p++)
                {
                    if(seta[i] == setb[p])
                    {
                        setd.push_back(seta[i]) ;
                        //cout << seta[i] << " " ;
                        break ;
                    }
                }
            }
            for(int i = 0 ; i < setd.size(); i ++)
            {
                for(int p = 0 ; p < size3 ; p++)
                {
                    if(setd[i] == setc[p])
                    {
                        cout << setd[i] << " " ;
                        break ;
                    }
                }

            }
            setd.clear() ;
            cout << endl << "Choice 5 is ended " << endl ;
        }
        else if(choice == '6')
        {
            for (int i = 0 ; i < size1  ; i++)
            {
                for(int p = i+1 ; p < size1 ; p++)
                {
                    if(seta[i] == seta[p])
                    {
                        seta[p] = 321321 ;
                    }
                }
            }
            for (int i = 0 ; i < size1; i++ )
            {
                if (seta[i] == 321321 )
                {
                    continue ;
                }
                for (int p = 0 ; p < size2 ; p++)
                {
                    if (seta[i] == setb[p])
                    {
                        break ;
                    }
                    if (p == size2-1)
                    {
                        inter.push_back(seta[i]) ;
                        //cout << seta[i] << " " ;
                    }
                }

            }
            for (int i = 0 ; i < inter.size(); i++ )
            {
                if (inter[i] == 321321 )
                {
                    continue ;
                }
                for (int p = 0 ; p < size3 ; p++)
                {
                    if (inter[i] == setc[p])
                    {
                        break ;
                    }
                    if (p == size3-1)
                    {
                        cout << inter[i] << " " ;
                    }
                }

            }
            inter.clear() ;

            cout << endl << "Choice 6 is ended " << endl ;
        }
    }
}
