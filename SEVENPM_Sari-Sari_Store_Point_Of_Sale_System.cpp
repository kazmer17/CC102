#include <iostream>

using namespace std;

int main ()
{
	float sugarPriceUSD = 0.00, ricePricePound = 0.0, sardinesPricePound = 0.0, coffeePriceUSD = 0.0, milkPriceUSD = 0.0, pound = 0.0, PHP = 0,
	float usdToPhp, poundToPhp, totalCostPhp;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	
	const float USD =0.00;
	cout << "Enter the quantity of sugar\n";
	cin >> sugarQty;
	cout << "Enter the quantity of rice\n";
	cin >> riceQty;
	cout << "Enter the quantity of sardines\n";
	cin >> sardinesQty;
	cout << "Enter the quantity of coffee\n";
	cin >> coffeeQty;
	cout << "Enter the quantity of milk\n";
	cin >> milkQty;
	cout << "\n";
	
	//Currency COnversion
	usdToPhp =  USD * PHP;
	poundToPhp = pound * PHP;

	cout << "\n";
	
	cout << "Price of sugar in PHP\n";
	
	cout << "Price of rice in PHP\n";
	
	cout << "Price of sardines in PHP\n";
	
	cout << "Price of coffee in php\n";
	
	
	
	cout << "The total cost";
	cin >> totalCostPhp;
	
	return 0;
	
}