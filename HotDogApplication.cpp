//Luke Farren - Mathmatics Assignment 1 Part 1
# include <iostream>
# include <string>
using namespace std;

int main ()
  {
    int a,b,c; 
    cout << "This application is to calculate both the minimum number of servings and the number per package. " << endl;
    cout << endl;
    cout << "Enter The Number of Hot Dogs in a Package =  ";
    cin >> a;
    cout << endl;
    cout << "Enter The Number of Buns in a Package = ";
    cin >> b;
    cout << endl;
    c=a*b;
   
   while(a!=b) 
        {
          if(a>b) 
          a=a-b;
          else 
          b=b-a;
        }

    cout << "Number Of Containers = " << a << endl;
    cout << "Lowest Number Of Servings = " << c/a << endl;
    cout << endl;
    cout << "Thank you for using this app. " << endl;
    
    return 0;

  }
