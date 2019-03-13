#include <iostream>
#include <string>

using namespace std;

int main ()
{
	double rate, hour, hour2, hour3, hour4, hour5, net, netbond;

	cout << "Amount of pay rate per hour: " << endl;
	cin >> rate;
	cout << "Total number of hours for week 1: " << endl;
	cin >> hour;
	cout << "Total number of hours for week 2: " << endl;
	cin >> hour2;
	cout << "Total number of hours for week 3: " << endl;
	cin >> hour3;
	cout << "Total number of hours for week 4: " << endl;
	cin >> hour4;
	cout << "Total number of hours for week 5: " << endl;
	cin >> hour5;
	cout << "Income before Tax: " << ((hour+hour2+hour3+hour4+hour5)*rate) << endl;
	cout << "Income after Tax: " << ((hour+hour2+hour3+hour4+hour5)*rate) - (((hour+hour2+hour3+hour4+hour5)*rate).14))) << endl;
		net=((hour+hour2+hour3+hour4+hour5)*rate) - (((hour+hour2+hour3+hour4+hour5)*rate).14)));
	cout << "Money spent on clothes and other accessories: " << (net*.1) << endl;
	cout << "Money spent on school supplies: " << (net*.01) << endl;
		netbond=(((hour*rate) - (hour*rate*.14))-((net*.1)+(net*.01)));
	cout << "Money spent to buy bonds: " << netbond*.25 << endl;
	cout << "Money spent by parents to buy additional bonds: " << (netbond*.25)*(.5) << endl;
	system("pause");
	return 0;
}