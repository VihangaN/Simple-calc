#include <iostream>
using namespace std;


float addcalc(float, float);
float subcalc(float, float);
float multicalc(float, float);
float divcalc(float, float);

int main()
{
    int  selection;
    float num1, num2, sumval , subval , multival , divval;
    
    cout << " Welcome to calculator ";
    cout << "\n\n\n";
    cout << " Please Select the calculation type from the menu :\n\n";
    
    cout << " 1. Addition\n";
    cout << " 2. Subtraction\n";
    cout << " 3. Multiplication\n";
    cout << " 4. Division\n";
    cout << "\n";
    
    cout << " Selection: ";
    cin >> selection;

    cout << "\n\n\n";
    
    cout<<" Enters two numbers to calculate one number per line : ";
    cin >>num1 >> num2;

    
    
      switch(selection)
  {

    case 1:
	sumval = addcalc(num1, num2);
    cout << " Value = " << sumval;
	break;
	
    case 2:
    subval = subcalc(num1, num2);
    cout << "\n Value = " << subval;
	break;
	
    case 3:
    multival = multicalc(num1, num2);
    cout << "\n Value = " << multival;
	break;
	
    case 4:
    divval = divcalc(num1, num2);
    cout << "\n Value = " << divval;
	break;
   

    default:
	cout << "\n Invalid selection\n";
	break;
    }
    
    return 0;
}


float addcalc(float a, float b)
{
    float addval;
    addval = a + b;
    return addval;
}

float subcalc(float a, float b)
{
	int subval;
    subval = a - b;
    return subval;
}

float multicalc(float a, float b)
{
	float multival;
    multival = a * b;
    return multival;
}

float divcalc(float a, float b)
{
	float divval;
    divval = a / b;
    return divval;
}
