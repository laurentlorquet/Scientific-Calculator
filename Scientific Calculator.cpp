#include <iostream>
#include <iomanip> // setprecision()
#include "power.h"
using namespace std;
double sin(double x);
double cos(double x);
int complex();
int AddSub();
int Mult();
int Div();
int PolRec();
int RecPol();
double Atan(double x);
double SquareRoot(double n);
double power(double x, double y);
double NthRoot(double number, int n);
double sqrt(double number);
int Conjugate();

int main()
{
int X;

cout <<"\nWelcome to the scientific calculator.\n";
cout <<"*******************************************\n";
cout <<"1.Complex Numbers\n";
cout <<"2.Trigonometry\n";
cout <<"3.Exponentials and Logarithm\n";
cout <<"4.Matrix\n";
cout <<"5.Combinatrix\n";
cout <<"6.Statistics and Financing\n";
cout <<"7.Exit\n";
cout <<"*******************************************\n\n";

cout << "Please select one of our options: ";
  while(!(cin >> X) || X < 1 || X >7)
      {
          cout << "Error. Choice must be the numbers above. ";
          cin.clear();
      }

  if (X ==1)
      {
          complex();
      }

  if (X==7)
      {
        return 0;
      }
}

int complex()
{
    int Choice;
    cout <<"\nComplex Numbers\n";
    cout <<"*******************************************\n";
    cout <<"1.Addition/Subtraction\n";
    cout <<"2.Multiplication\n";
    cout <<"3.Division\n";
    cout <<"4.Conjugate\n";
    cout <<"5.Polar to Rectangular\n";
    cout <<"6.Rectangular to Polar\n";
    cout <<"7.Return to main menu\n";
    cout <<"*******************************************\n\n";
    cout <<"Choose your option: ";
    
    while(!(cin >> Choice) || Choice < 1 || Choice >7)
    {
        cout << "Error. Choice must be the numbers above. ";
        cin.clear();
    }
    if (Choice==1)
      {
        AddSub();
      }
    if (Choice==2)
      {
        Mult();
      }
    if (Choice==3)
      {
        Div();
      }
    if (Choice==4)
      {
        Conjugate();
      }
    if (Choice==5)
      {
        PolRec();
      }
    if (Choice==6)
      {
        RecPol();
      }
    if (Choice==7)
      {
        main();
      }

    return 0;
}

int AddSub()
{
  double Num1,Num2,Sum;
  int Choice;
  Choice = 1;
  
  while (Choice != 3)
  {
    while (Choice ==1)
      {
        cout <<"\nFirst number: ";
        cin >> Num1;
        cout <<"\nSecond number: ";
        cin >> Num2;
        Choice = 2;
        Sum = Num1+Num2;
      }
      
        while (Choice==2)
        {
        cout <<"\n\nYour sum is: "<< Sum<< "\n";
        cout <<"1.Clear\n";
        cout <<"2.Add/Subtract more\n";
        cout <<"3.Return to menu\n";
        cout <<"Please choose above: ";

        while(!(cin >> Choice) || Choice < 1 || Choice >3)
          {
              cout << "Error. Choice must be the numbers above. ";
              cin.clear();
          }
          if (Choice==2)
            {
              cout << "\n\nNew Number: ";
              cin >>Num2;
              Sum=Sum+Num2;
            }
        }
  }
  if(Choice==3)
  {
    complex();
  }

return 0;
}

int Mult()
{
  double a, b, Result;
  int Choice;
  Choice=1;
  while (Choice!=3)
  {
    while (Choice ==1)
      {
        cout << "\nEnter first number: ";
        cin >> a;
        cout << "\nEnter second number: ";
        cin >> b;
        Choice = 2;
        Result = a * b;
      }
    while (Choice==2)
      {
        cout << "\nMultiplication: " << Result<<"\n";
        cout <<"1.Clear\n";
        cout <<"2.Multiply more\n";
        cout <<"3.Return to menu\n";
        cout <<"Please choose above: ";

        while(!(cin >> Choice) || Choice < 1 || Choice >3)
          {
              cout << "Error. Choice must be the numbers above. ";
              cin.clear();
          }
          if (Choice==2)
            {
              cout << "\n\nNew Number: ";
              cin >>b;
              Result=Result*b;
            }
      }

  }
  if(Choice==3)
    {
      complex();
    }
return 0;
}

int Div()
{
  double a, b, Result;
  int Choice;
  Choice=1;
  while (Choice!=3)
  {
    while (Choice ==1)
      {
        cout << "\nEnter first number: ";
        cin >> a;
        cout << "\nEnter second number: ";
        cin >> b;
        Choice = 2;
        Result = a / b;
      }
    while (Choice==2)
      {
        cout << "\nDivision: " << Result<<"\n";
        cout <<"1.Clear\n";
        cout <<"2.Divide more\n";
        cout <<"3.Return to menu\n";
        cout <<"Please choose above: ";

        while(!(cin >> Choice) || Choice < 1 || Choice >3)
          {
              cout << "Error. Choice must be the numbers above. ";
              cin.clear();
          }
          if (Choice==2)
            {
              cout << "\n\nNew Number: ";
              cin >>b;
              Result=Result/b;
            }
      }

  }
  if(Choice==3)
    {
      complex();
    }
return 0;
}

int Conjugate()
{
    double Term1,Term2;
    int Choice;
    Choice=1;
    while (Choice!=2)
    {
        cout<<"\nEnter First term: ";
        cin >>Term1;
        cout <<"\nEnter Second Term without i: ";
        cin >>Term2;
        if (Term2<0)
        {
            Term2 = Term2*-1;
            cout <<"\nThe Conjugate is: "<<Term1<<"+"<<Term2<<"i"<<endl;
        }
        else
        {
            cout <<"\nThe Conjugate is: "<<Term1<<"-"<<Term2<<"i"<<endl;
        }
        cout <<"1.Conjugate another item\n";
        cout <<"2.Return to menu\n";
        cout <<"Please choose above: ";
        while(!(cin >> Choice) || Choice < 1 || Choice >2)
          {
              cout << "Error. Choice must be the numbers above. ";
              cin.clear();
          }
    }
    if (Choice==2)
      {
        complex();
      }
return 0;
}

int PolRec()
{
  double Radius, Angle,x,y;
  int Choice;
  Choice=1;
  while (Choice!=2)
  {
    cout <<"\nEnter Radius: ";
    cin >>Radius;
    cout <<"\nEnter Angle: ";
    cin >>Angle;
    x=Radius*cos(Angle);
    y=Radius*sin(Angle);

    cout <<"\nX cordinates: " <<x<<endl;
    cout <<"Y Cordinates: " <<y<<endl;

    cout <<"1.Another cordinate\n";
    cout <<"2.Return to menu\n";
    cout <<"Please choose above: ";

        while(!(cin >> Choice) || Choice < 1 || Choice >2)
          {
              cout << "Error. Choice must be the numbers above. ";
              cin.clear();
          }

  }
  if (Choice==2)
  {
    complex();
  }
return 0;
}

int RecPol()
{
  double x,y,Radius,Angle,Num;
  int Choice;
  Choice=1;
  while (Choice!=2)
  {
    cout <<"\nEnter X: ";
    cin >>x;
    cout <<"\nEnter Y: ";
    cin >>y;
    Num = y/x;
    Angle=Atan(Num);
    Radius= sqrt((power(x,2)+power(y,2)));
    
    cout <<"\nRadius: " <<Radius<<endl;
    cout <<"Angle: " <<Angle<<endl;

    cout <<"1.Another cordinate\n";
    cout <<"2.Return to menu\n";
    cout <<"Please choose above: ";

        while(!(cin >> Choice) || Choice < 1 || Choice >2)
          {
              cout << "Error. Choice must be the numbers above. ";
              cin.clear();
          }

  }
  if (Choice==2)
  {
    complex();
  }
return 0;
}

const double PI=3.1415926535897932384650288;

double sin(double x){
  double sign=1;
  if (x<0){
    sign=-1.0;
    x=-x;
  }
  if (x>360) x -= int(x/360)*360;
  x*=PI/180.0;
  double res=0;
  double term=x;
  int k=1;
  while (res+term!=res){
    res+=term;
    k+=2;
    term*=-x*x/k/(k-1);
  }

  return sign*res;
}

double cos(double x){
  if (x<0) x=-x;
  if (x>360) x -= int(x/360)*360;
  x*=PI/180.0;
  double res=0;
  double term=1;
  int k=0;
  while (res+term!=res){
    res+=term;
    k+=2;
    term*=-x*x/k/(k-1);
  }  
  return res;
}

double Atan(double x)
{
  double result =0.0;

  if (x==-1|| x==1)
  {
    result = 45;
    return result;
  }
  else
  {
    if (x>-1 && x<1)
    {
      for (int i=0; i<=20; i++)
        {
          result += power(-1,i) * power(x,2 * i + 1)/(2 * i +1);
        }
      return result * (180/PI);
    }
    else if (x>1)
    {
      for (int i=0; i<=20; i++)
      {
        double t1 = 1/(power(-1,i) * power(x,((2 * i) + 1)) * ((2 * i) +1));
        result += t1;
      }
      return (PI / 2 -result) * (180 /PI);
    }
    else
    {
      for (int i=0; i<=20; i++)
      {
        double t1 = 1/(power(-1,i) * power(x,((2 * i) + 1)) * ((2 * i) +1));
        result += t1;
      }
      return (-PI / 2 -result) * (180 /PI);
    }
  }
}


long long int factorial(int n)
{
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

double expo(double x)
{
    double sum = 1;
    for (int i = 1; i < 50; ++i)
    {
        sum += power(x, i) / factorial(i);
    }
    return sum;
}

double ln(double x)
{
    double sum = 0;
    for (int i = 1; i < 50; ++i)
    {
        sum += power(x - 1, i) * power(-1, i - 1) / i;
    }
    return sum;
}

;  ;
double power(double x, double y)
{
    int b; float f;
    b = static_cast<int>(y);
    f = y - b;

    if (x == 0) return 0;
    else if (x == 1 || y == 0) return 1;

    else if (f == 0)
        return pow_int(x, y);
    else
        return pow_int(x, b) * pow_frac(x, f);
}

double pow_int(double x, int n)
{
    if (x == 0) return 0;
    else if (x == 1 || n == 0) return 1;
    else
    {
        double product = 1;
        for (int i = 1; i <= n; ++i)
            product *= x;
        return product;
    }
}

double pow_frac(double x, double f)
{
    double c;
    c = ln(x);
    return expo(f * c);
}

double log(double x)
{
    return ln(x) / ln(10);
}

double SquareRoot(double n)
{
    const double accuracy = 0.000001;
    double lower, upper, guess;
    if (n < 1)
    {
        lower = n;
        upper = 1;
    }
    else
    {
        lower = 1;
        upper = n;
    }
    while ((upper - lower) > accuracy)
    {
        guess = (upper + lower) / 2;
        if (guess * guess < n) upper = guess;
        else lower = guess;
    }
    return (upper + lower) / 2;
}

double NthRoot(double number, int n)
{
    const double accuracy = 0.000001;
    double lower, upper, guess;
    if (n < 1)
    {
        lower = n;
        upper = 1;
    }
    else
    {
        lower = 1;
        upper = n;
    }
    while ((upper - lower) > accuracy)
    {
        upper = ((n - 1) * lower + number / power(lower, n - 1)) / n;
    }
    return (upper + lower) / 2;
}

double sqrt(double number)
{
    double error = 0.00001; //define the precision of your result
    double s = number;

    while ((s - number / s) > error) //loop until precision satisfied 
    {
        s = (s + number / s) / 2;
    }
    return s;
}