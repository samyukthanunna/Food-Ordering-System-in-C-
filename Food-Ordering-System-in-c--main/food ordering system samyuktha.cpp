#include<iostream>
#include<map>
#include<iomanip>
#include<utility> // for std::pair
#include<stdlib.h>
using namespace std;


class items{
	public:
		int quantity[100];
		string product[100];
		
};
items obj[100];

int i=0;
int j=0;
int no_product[100]={0};


order_details(){
	
	int x,y;
	for(x=0;x<i;x++){
		cout<<x+1<<"Order:"<<endl;
		for(y=0;y<no_product[x];y++){
			cout<<obj[x].product[y]<<endl;
		}
		
	}
	
}

void menu1()
{
     cout << "\n\n\n\t\t\t                                  Welcome to HUG A MUG CAFE !\n\n\n\n";

           

           

           

                                     cout << "\t\t\t\t\t                " << "    _____\n";

                                       cout << "\t\t\t\t                        " << "   /     \\   ____   ____    __ __\n";

                                           cout << " \t\t\t\t                        " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";

                                          cout << " \t\t\t\t                        " << " /    Y    \\  ___/|   |   \\|  |  |\n";
                                          
                                          cout << " \t\t\t\t                        " << " \\____|____/\\____>____|____|_____|\n\n\n";
                                          
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|              ITEMS                    |              PRICE                   | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|        1) Salt lime                   |              40                      | \n";
                                          cout<<"\t\t\t\t|        2) Black Current               |              75                      | \n";
                                          cout<<"\t\t\t\t|        3) Blue Lagoon                 |              75                      | \n";
                                          cout<<"\t\t\t\t|        4) Kokum                       |              75                      | \n";
                                          cout<<"\t\t\t\t|        5) Ginger Lime                 |              75                      | \n";
                                          cout<<"\t\t\t\t|        6) Chocolate Milk Shake        |              100                     | \n";
                                          cout<<"\t\t\t\t|        7) Butter Scotch Milk Shake    |              100                     | \n";
                                          cout<<"\t\t\t\t|        8) Strawberry Milk Shake       |              100                     | \n";
                                          cout<<"\t\t\t\t|        9) Pineapple Milk Shake        |              100                     | \n";
                                          cout<<"\t\t\t\t|       10) Lichi Milk Shake            |              100                     | \n";
                                          cout<<"\t\t\t\t|       11) Chocolate Thick Shake       |              140                     | \n";
                                          cout<<"\t\t\t\t|       12) Mango Thick Shake           |              140                     | \n";
                                          cout<<"\t\t\t\t|       13) Lichi Thick Shake           |              140                     | \n";
                                          cout<<"\t\t\t\t|       14) Strawberry Thick Shake      |              140                     | \n";
                                          cout<<"\t\t\t\t|       15) Pineapple Thick Shake       |              140                     | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                           

    typedef pair<string, double> Item; // Define a typedef for convenience
    map<int, Item> priceList;

    // Insert items and prices into the map
    priceList[1] = Item("Salt lime", 40.0);
    priceList[2] = Item("Black Current", 75.0);
    priceList[3] = Item("Blue Lagoon", 75.0);
    priceList[4] = Item("Kokum", 75.0);
    priceList[5] = Item("Ginger Lime", 75.0);
    priceList[6] = Item("Chocolate Milk Shake", 100.0);
    priceList[7] = Item("Butter Scotch Milk Shake", 100.0);
    priceList[8] = Item("Strawberry Milk Shake", 100.0);
    priceList[9] = Item("Pineapple Milk Shake", 100.0);
    priceList[10] = Item("Lichi Milk Shake", 100.0);
    priceList[11] = Item("Chocolate Thick Shake", 140.0);
    priceList[12] = Item("Mango Thick Shake", 140.0);
    priceList[13] = Item("Lichi Thick Shake", 140.0);
    priceList[14] = Item("Strawberry Thick Shake", 140.0);
    priceList[15] = Item("Pineapple Thick Shake", 140.0);

    char continueOrder;
    int itemNumber;
    int quantity;
    double totalAmount = 0.0;

    map<int, pair<string, double> > orderedItems; // To store ordered items with quantity

    do {
        

        // Ask for user input
        cout << " \n\t\t\t\tEnter the number of the item you want to order (or enter 0 to exit): ";
        cin >> itemNumber;
        if (itemNumber == 0) {
            break;
        }

        // Check if the entered item number is valid
        map<int, Item>::iterator it = priceList.find(itemNumber);
        if (it != priceList.end()) {
            // Ask for the quantity
            cout << " \n\t\t\t\tEnter the quantity: ";
            cin >> quantity;

            // Add the item name, price, and quantity to the ordered items
            orderedItems[itemNumber] = make_pair(it->second.first, quantity);

            // Add the total price for the specified quantity to the total amount
            totalAmount += it->second.second * quantity;
        } else {
            cout << "\n\t\t\t\tInvalid item number. Please enter a valid item number.\n";
        }

        // Ask if the user wants to continue ordering
        cout << "\n\t\t\t\tDo you want to continue ordering? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    if (itemNumber != 0)
	{
    // Display the final order summary
    cout << "\n\t\t\t\tYour order summary:\n\n";
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    cout << "\t\t\t\t| Item" << setw(40) << setfill(' ') << "|  Quantity |"<< setw(9) << setfill(' ') <<"Total  "<< setw(3) << setfill(' ') <<"|"<<endl;
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";

    for (map<int, pair<string, double> >::iterator it = orderedItems.begin(); it != orderedItems.end(); ++it) 
	{
		double itemTotal = it->second.second * priceList[it->first].second; // Calculate total for each item
		obj[i].product[j]= it->second.first;
		obj[i].quantity[j]= it->second.second;
		j++;
		no_product[i]=j;
        cout << "\t\t\t\t| " << setw(30) << left << it->second.first << " | " << setw(9) << it->second.second << " | $" << setw(8)<<setfill(' ') << itemTotal << " |\n";
        cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    }
	i++;
	j=0;  
    

    cout << "\t\t\t\t| Total amount" << setw(30)<<setfill(' ') << " | " << setw(9) <<setfill(' ')<< " | $"<< totalAmount << " |\n";
     cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n\n\n";
   }
}

 	
void menu2()
{
     cout << "\n\n\n\t\t\t                                  Welcome to PIZZA HOUSE   !\n\n\n\n";

           

           

           

                                     cout << "\t\t\t\t\t                " << "    _____\n";

                                       cout << "\t\t\t\t                        " << "   /     \\   ____   ____    __ __\n";

                                           cout << " \t\t\t\t                        " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";

                                          cout << " \t\t\t\t                        " << " /    Y    \\  ___/|   |   \\|  |  |\n";
                                          
                                          cout << " \t\t\t\t                        " << " \\____|____/\\____>____|____|_____|\n\n\n";
                                          
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|              ITEMS                    |              PRICE                   | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|        1) Paneer Mini Pizza           |              170                     | \n";
                                          cout<<"\t\t\t\t|        2) Veg Large Pizza             |              300                     | \n";
                                          cout<<"\t\t\t\t|        3) Paneer Medium Pizza         |              250                     | \n";
                                          cout<<"\t\t\t\t|        4) Corn Large Pizza            |              310                     | \n";
                                          cout<<"\t\t\t\t|        5) Chicken Large Pizza         |              330                     | \n";
                                          cout<<"\t\t\t\t|        6) Veg Burger                  |              100                     | \n";
                                          cout<<"\t\t\t\t|        7) Veg Cheese Burger           |              120                     | \n";
                                          cout<<"\t\t\t\t|        8) Chicken Burger              |              150                     | \n";
                                          cout<<"\t\t\t\t|        9) Chicken Cheese Burger       |              170                     | \n";
                                          cout<<"\t\t\t\t|       10) Veg Cheese Sandwich         |               70                     | \n";
                                          cout<<"\t\t\t\t|       11) Chicken Cheese Sandwich     |              100                     | \n";
                                          cout<<"\t\t\t\t|       12) Chicken Nuggets(8)          |              200                     | \n";
                                          cout<<"\t\t\t\t|       13) Peri Peri Chicken(6)        |              250                     | \n";
                                          cout<<"\t\t\t\t|       14) Chicken Legs (5)            |              350                     | \n";
                                          cout<<"\t\t\t\t|       15) Choco Lava                  |               40                     | \n"; 
                                          cout<<"\t\t\t\t********************************************************************************\n\n"; 
										  
	typedef pair<string, double> Item; // Define a typedef for convenience
    map<int, Item> priceList;

    // Insert items and prices into the map
    priceList[1] = Item("Paneer Mini Pizza ", 170.0);
    priceList[2] = Item("Veg Large Pizza", 300.0);
    priceList[3] = Item("Paneer Medium Pizza ", 250.0);
    priceList[4] = Item("Corn Large Pizza", 310.0);
    priceList[5] = Item("Chicken Large Pizza", 330.0);
    priceList[6] = Item("Veg Burger", 100.0);
    priceList[7] = Item("Veg Cheese Burger", 120.0);
    priceList[8] = Item("Chicken Burger", 150.0);
    priceList[9] = Item("Chicken Cheese Burger", 170.0);
    priceList[10] = Item("Veg Cheese Sandwich", 70.0);
    priceList[11] = Item("Chicken Cheese Sandwich", 100.0);
    priceList[12] = Item("Chicken Nuggets(8)", 200.0);
    priceList[13] = Item("Peri Peri Chicken(6)", 250.0);
    priceList[14] = Item("Chicken Legs (5)", 350.0);
    priceList[15] = Item("Choco Lava ", 40.0);

    char continueOrder;
    int itemNumber;
    int quantity;
    double totalAmount = 0.0;

    map<int, pair<string, double> > orderedItems; // To store ordered items with quantity

    do {
        

        // Ask for user input
        cout << " \n\t\t\t\tEnter the number of the item you want to order (or enter 0 to exit): ";
        cin >> itemNumber;
        if (itemNumber == 0) {
            break;
        }

        // Check if the entered item number is valid
        map<int, Item>::iterator it = priceList.find(itemNumber);
        if (it != priceList.end()) {
            // Ask for the quantity
            cout << " \n\t\t\t\tEnter the quantity: ";
            cin >> quantity;

            // Add the item name, price, and quantity to the ordered items
            orderedItems[itemNumber] = make_pair(it->second.first, quantity);

            // Add the total price for the specified quantity to the total amount
            totalAmount += it->second.second * quantity;
        } else {
            cout << "\n\t\t\t\tInvalid item number. Please enter a valid item number.\n";
        }

        // Ask if the user wants to continue ordering
        cout << "\n\t\t\t\tDo you want to continue ordering? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    if (itemNumber != 0)
	{
    // Display the final order summary
    cout << "\n\t\t\t\tYour order summary:\n\n";
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    cout << "\t\t\t\t| Item" << setw(40) << setfill(' ') << "|  Quantity |"<< setw(9) << setfill(' ') <<"Total  "<< setw(3) << setfill(' ') <<"|"<<endl;
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";

    for (map<int, pair<string, double> >::iterator it = orderedItems.begin(); it != orderedItems.end(); ++it) 
	{
		double itemTotal = it->second.second * priceList[it->first].second; // Calculate total for each item
			obj[i].product[j]= it->second.first;
		obj[i].quantity[j]= it->second.second;
		j++;
		no_product[i]=j;
        cout << "\t\t\t\t| " << setw(30) << left << it->second.first << " | " << setw(9) << it->second.second << " | $" << setw(8)<<setfill(' ') << itemTotal << " |\n";
        cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    }
    i++;
    j=0;

    cout << "\t\t\t\t| Total amount" << setw(30)<<setfill(' ') << " | " << setw(9) <<setfill(' ')<< " | $"<< totalAmount << " |\n";
     cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n\n\n";
   }
}  	



void menu3()
{
     cout << "\n\n\n\t\t\t                                  Welcome to LITTLE VILLAGE !\n\n\n\n";

           

           

           

                                     cout << "\t\t\t\t\t                " << "    _____\n";

                                       cout << "\t\t\t\t                        " << "   /     \\   ____   ____    __ __\n";

                                           cout << " \t\t\t\t                        " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";

                                          cout << " \t\t\t\t                        " << " /    Y    \\  ___/|   |   \\|  |  |\n";
                                          
                                          cout << " \t\t\t\t                        " << " \\____|____/\\____>____|____|_____|\n\n\n";
                                          
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|              ITEMS                    |              PRICE                   | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|        1) Chicken Dum Biryani         |              270                     | \n";
                                          cout<<"\t\t\t\t|        2) SP. Chicken Biryani         |              340                     | \n";
                                          cout<<"\t\t\t\t|        3) Chicken Fry Biryani         |              310                     | \n";
                                          cout<<"\t\t\t\t|        4) Natukodi Biryani            |              350                     | \n";
                                          cout<<"\t\t\t\t|        5) Wings Biryani               |              330                     | \n";
                                          cout<<"\t\t\t\t|        6) Veg Biryani                 |              200                     | \n";
                                          cout<<"\t\t\t\t|        7) Paneer Biryani              |              250                     | \n";
                                          cout<<"\t\t\t\t|        8) Mushroom Biryani            |              250                     | \n";
                                          cout<<"\t\t\t\t|        9) Baby corn Biryani           |              250                     | \n";
                                          cout<<"\t\t\t\t|       10) Avakai Veg Biryani          |              250                     | \n";
                                          cout<<"\t\t\t\t|       11) Tandoori Chicken(FULL)      |              520                     | \n";
                                          cout<<"\t\t\t\t|       12) Tandoori Chicken(HALL)      |              290                     | \n";
                                          cout<<"\t\t\t\t|       13) Chicken Tikka               |              320                     | \n";
                                          cout<<"\t\t\t\t|       14) Chicken 65                  |              290                     | \n";
                                          cout<<"\t\t\t\t|       15) Curd Rice                   |              90                      | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n\n\n";
										  
	typedef pair<string, double> Item; // Define a typedef for convenience
    map<int, Item> priceList;

    // Insert items and prices into the map
    priceList[1] = Item("Chicken Dum Biryani ", 270.0);
    priceList[2] = Item("SP. Chicken Biryani", 340.0);
    priceList[3] = Item("Chicken Fry Biryani ",310.0);
    priceList[4] = Item("Natukodi Biryani ", 350.0);
    priceList[5] = Item("Wings Biryani", 330.0);
    priceList[6] = Item("Veg Biryani ", 200.0);
    priceList[7] = Item("Paneer Biryani", 250.0);
    priceList[8] = Item(" Mushroom Biryani ", 250.0);
    priceList[9] = Item("Baby corn Biryani", 250.0);
    priceList[10] = Item("Avakai Veg Biryani", 250.0);
    priceList[11] = Item("Tandoori Chicken(FULL)", 520.0);
    priceList[12] = Item("Tandoori Chicken(HALL)", 290.0);
    priceList[13] = Item("Chicken Tikka", 320.0);
    priceList[14] = Item("Chicken 65 ", 290.0);
    priceList[15] = Item("Curd Rice", 90.0);

    char continueOrder;
    int itemNumber;
    int quantity;
    double totalAmount = 0.0;

    map<int, pair<string, double> > orderedItems; // To store ordered items with quantity

    do {
        

        // Ask for user input
        cout << " \n\t\t\t\tEnter the number of the item you want to order (or enter 0 to exit): ";
        cin >> itemNumber;
        if (itemNumber == 0) {
            break;
        }

        // Check if the entered item number is valid
        map<int, Item>::iterator it = priceList.find(itemNumber);
        if (it != priceList.end()) {
            // Ask for the quantity
            cout << " \n\t\t\t\tEnter the quantity: ";
            cin >> quantity;

            // Add the item name, price, and quantity to the ordered items
            orderedItems[itemNumber] = make_pair(it->second.first, quantity);

            // Add the total price for the specified quantity to the total amount
            totalAmount += it->second.second * quantity;
        } else {
            cout << "\n\t\t\t\tInvalid item number. Please enter a valid item number.\n";
        }

        // Ask if the user wants to continue ordering
        cout << "\n\t\t\t\tDo you want to continue ordering? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    if (itemNumber != 0)
	{
    // Display the final order summary
    cout << "\n\t\t\t\tYour order summary:\n\n";
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    cout << "\t\t\t\t| Item" << setw(40) << setfill(' ') << "|  Quantity |"<< setw(9) << setfill(' ') <<"Total  "<< setw(3) << setfill(' ') <<"|"<<endl;
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";

    for (map<int, pair<string, double> >::iterator it = orderedItems.begin(); it != orderedItems.end(); ++it) 
	{
		double itemTotal = it->second.second * priceList[it->first].second; // Calculate total for each item
			obj[i].product[j]= it->second.first;
		obj[i].quantity[j]= it->second.second;
		j++;
		no_product[i]=j;
        cout << "\t\t\t\t| " << setw(30) << left << it->second.first << " | " << setw(9) << it->second.second << " | $" << setw(8)<<setfill(' ') << itemTotal << " |\n";
        cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    }
    i++;
    j=0;

    cout << "\t\t\t\t| Total amount" << setw(30)<<setfill(' ') << " | " << setw(9) <<setfill(' ')<< " | $"<< totalAmount << " |\n";
     cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n\n\n";
   }	
}
void menu4()
{
     cout << "\n\n\n\t\t\t                                  Welcome to ANDHRA RUCHULU !\n\n\n\n";

           

           

           

                                     cout << "\t\t\t\t\t                " << "    _____\n";

                                       cout << "\t\t\t\t                        " << "   /     \\   ____   ____    __ __\n";

                                           cout << " \t\t\t\t                        " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";

                                          cout << " \t\t\t\t                        " << " /    Y    \\  ___/|   |   \\|  |  |\n";
                                          
                                          cout << " \t\t\t\t                        " << " \\____|____/\\____>____|____|_____|\n\n\n";
                                          
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|              ITEMS                    |              PRICE                   | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|        1) Idly                        |              40                      | \n";
                                          cout<<"\t\t\t\t|        2) Vada                        |              45                      | \n";
                                          cout<<"\t\t\t\t|        3) Masala Dosa                 |              45                      | \n";
                                          cout<<"\t\t\t\t|        4) Plain Dosa                  |              35                      | \n";
                                          cout<<"\t\t\t\t|        5) Onion Dosa                  |              45                      | \n";
                                          cout<<"\t\t\t\t|        6) Egg Dosa                    |              50                      | \n";
                                          cout<<"\t\t\t\t|        7) Double Egg Dosa             |              55                      | \n";
                                          cout<<"\t\t\t\t|        8) Upma                        |              40                      | \n";
                                          cout<<"\t\t\t\t|        9) Mysore Bajji                |              40                      | \n";
                                          cout<<"\t\t\t\t|       10) Set Dosa                    |              60                      | \n";
                                          cout<<"\t\t\t\t|       11) Chola Poori                 |              60                      | \n";
                                          cout<<"\t\t\t\t|       12) Combo Tiffen                |              80                      | \n";
                                          cout<<"\t\t\t\t|       13) Combo Dinner                |              90                      | \n";
                                          cout<<"\t\t\t\t|       14) Chapati                     |              45                      | \n";
                                          cout<<"\t\t\t\t|       15) Sambar Rice                 |              45                      | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n\n\n";
			
	typedef pair<string, double> Item; // Define a typedef for convenience
    map<int, Item> priceList;

    // Insert items and prices into the map
    priceList[1] = Item("Idly ", 40.0);
    priceList[2] = Item("Vada ", 45.0);
    priceList[3] = Item("Masala Dosa ",45.0);
    priceList[4] = Item("Plain Dosa ", 35.0);
    priceList[5] = Item("Onion Dosa", 45.0);
    priceList[6] = Item("Egg Dosa", 50.0);
    priceList[7] = Item("Double Egg Dosa", 55.0);
    priceList[8] = Item("Upma ", 40.0);
    priceList[9] = Item("Mysore Bajji", 40.0);
    priceList[10] = Item("Set Dosa", 60.0);
    priceList[11] = Item("Chola Poori", 60.0);
    priceList[12] = Item("Combo Tiffen", 80.0);
    priceList[13] = Item("Combo Dinner", 90.0);
    priceList[14] = Item("Chapati", 45.0);
    priceList[15] = Item("Sambar Rice", 45.0);

    char continueOrder;
    int itemNumber;
    int quantity;
    double totalAmount = 0.0;

    map<int, pair<string, double> > orderedItems; // To store ordered items with quantity

    do {
        

        // Ask for user input
        cout << " \n\t\t\t\tEnter the number of the item you want to order (or enter 0 to exit): ";
        cin >> itemNumber;
        if (itemNumber == 0) {
            break;
        }

        // Check if the entered item number is valid
        map<int, Item>::iterator it = priceList.find(itemNumber);
        if (it != priceList.end()) {
            // Ask for the quantity
            cout << " \n\t\t\t\tEnter the quantity: ";
            cin >> quantity;

            // Add the item name, price, and quantity to the ordered items
            orderedItems[itemNumber] = make_pair(it->second.first, quantity);

            // Add the total price for the specified quantity to the total amount
            totalAmount += it->second.second * quantity;
        } else {
            cout << "\n\t\t\t\tInvalid item number. Please enter a valid item number.\n";
        }

        // Ask if the user wants to continue ordering
        cout << "\n\t\t\t\tDo you want to continue ordering? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    if (itemNumber != 0)
	{
    // Display the final order summary
    cout << "\n\t\t\t\tYour order summary:\n\n";
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    cout << "\t\t\t\t| Item" << setw(40) << setfill(' ') << "|  Quantity |"<< setw(9) << setfill(' ') <<"Total  "<< setw(3) << setfill(' ') <<"|"<<endl;
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";

    for (map<int, pair<string, double> >::iterator it = orderedItems.begin(); it != orderedItems.end(); ++it) 
	{
		double itemTotal = it->second.second * priceList[it->first].second; // Calculate total for each item
			obj[i].product[j]= it->second.first;
		obj[i].quantity[j]= it->second.second;
		j++;
		no_product[i]=j;
        cout << "\t\t\t\t| " << setw(30) << left << it->second.first << " | " << setw(9) << it->second.second << " | $" << setw(8)<<setfill(' ') << itemTotal << " |\n";
        cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    }
    i++;
    j=0;

    cout << "\t\t\t\t| Total amount" << setw(30)<<setfill(' ') << " | " << setw(9) <<setfill(' ')<< " | $"<< totalAmount << " |\n";
     cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n\n\n";
   }		
}
void menu5()
{
     cout << "\n\n\n\t\t\t                                  Welcome to BISMILLAH !\n\n\n\n";

           

           

           

                                     cout << "\t\t\t\t\t                " << "    _____\n";

                                       cout << "\t\t\t\t                        " << "   /     \\   ____   ____    __ __\n";

                                           cout << " \t\t\t\t                        " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";

                                          cout << " \t\t\t\t                        " << " /    Y    \\  ___/|   |   \\|  |  |\n";
                                          
                                          cout << " \t\t\t\t                        " << " \\____|____/\\____>____|____|_____|\n\n\n";
                                          
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|              ITEMS                    |              PRICE                   | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|        1) Chicken Dum Biryani         |              160                     | \n";
                                          cout<<"\t\t\t\t|        2) SP. Chicken Biryani         |              200                     | \n";
                                          cout<<"\t\t\t\t|        3) Chicken Fry Biryani         |              175                     | \n";
                                          cout<<"\t\t\t\t|        4) Natukodi Biryani            |              300                     | \n";
                                          cout<<"\t\t\t\t|        5) Mutton Dum Biryani          |              250                     | \n";
                                          cout<<"\t\t\t\t|        6) Mutton Fry Biryani          |              280                     | \n";
                                          cout<<"\t\t\t\t|        7) Chicken Joint Biryani       |              200                     | \n";
                                          cout<<"\t\t\t\t|        8) Dragon Chicken              |              220                     | \n";
                                          cout<<"\t\t\t\t|        9) Chicken Pokoda              |              120                     | \n";
                                          cout<<"\t\t\t\t|       10) Chicken Full Joint          |              120                     | \n";
                                          cout<<"\t\t\t\t|       11) Chicken 555                 |              190                     | \n";
                                          cout<<"\t\t\t\t|       12) Chicken 65                  |              190                     | \n";
                                          cout<<"\t\t\t\t|       13) Chicken Majestic            |              210                     | \n";
                                          cout<<"\t\t\t\t|       14) Chicken Curry               |              190                     | \n";
                                          cout<<"\t\t\t\t|       15) Curd Rice                   |              100                     | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n\n\n";
										  
    typedef pair<string, double> Item; // Define a typedef for convenience
    map<int, Item> priceList;

    // Insert items and prices into the map
    priceList[1] = Item("Chicken Dum Biryani ", 160.0);
    priceList[2] = Item("SP. Chicken Biryani", 200.0);
    priceList[3] = Item("Chicken Fry Biryani ",175.0);
    priceList[4] = Item("Natukodi Biryani ", 300.0);
    priceList[5] = Item("Mutton Dum Biryani", 250.0);
    priceList[6] = Item("Mutton Fry Biryani ", 280.0);
    priceList[7] = Item("Chicken Joint Biryani", 200.0);
    priceList[8] = Item("Dragon Chicken", 220.0);
    priceList[9] = Item("Chicken Pokoda", 120.0);
    priceList[10] = Item("Chicken Full Joint ", 120.0);
    priceList[11] = Item("Chicken 555", 190.0);
    priceList[12] = Item("Chicken 65", 190.0);
    priceList[13] = Item(" Chicken Majestic", 210.0);
    priceList[14] = Item("Chicken Curry", 190.0);
    priceList[15] = Item("Curd Rice", 100.0);

    char continueOrder;
    int itemNumber;
    int quantity;
    double totalAmount = 0.0;

    map<int, pair<string, double> > orderedItems; // To store ordered items with quantity

    do {
        

        // Ask for user input
        cout << " \n\t\t\t\tEnter the number of the item you want to order (or enter 0 to exit): ";
        cin >> itemNumber;
        if (itemNumber == 0) {
            break;
        }

        // Check if the entered item number is valid
        map<int, Item>::iterator it = priceList.find(itemNumber);
        if (it != priceList.end()) {
            // Ask for the quantity
            cout << " \n\t\t\t\tEnter the quantity: ";
            cin >> quantity;

            // Add the item name, price, and quantity to the ordered items
            orderedItems[itemNumber] = make_pair(it->second.first, quantity);

            // Add the total price for the specified quantity to the total amount
            totalAmount += it->second.second * quantity;
        } else {
            cout << "\n\t\t\t\tInvalid item number. Please enter a valid item number.\n";
        }

        // Ask if the user wants to continue ordering
        cout << "\n\t\t\t\tDo you want to continue ordering? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    if (itemNumber != 0)
	{
    // Display the final order summary
    cout << "\n\t\t\t\tYour order summary:\n\n";
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    cout << "\t\t\t\t| Item" << setw(40) << setfill(' ') << "|  Quantity |"<< setw(9) << setfill(' ') <<"Total  "<< setw(3) << setfill(' ') <<"|"<<endl;
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";

    for (map<int, pair<string, double> >::iterator it = orderedItems.begin(); it != orderedItems.end(); ++it) 
	{
		double itemTotal = it->second.second * priceList[it->first].second; // Calculate total for each item
			obj[i].product[j]= it->second.first;
		obj[i].quantity[j]= it->second.second;
		j++;
		no_product[i]=j;
        cout << "\t\t\t\t| " << setw(30) << left << it->second.first << " | " << setw(9) << it->second.second << " | $" << setw(8)<<setfill(' ') << itemTotal << " |\n";
        cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    }
    i++;
    j=0;

    cout << "\t\t\t\t| Total amount" << setw(30)<<setfill(' ') << " | " << setw(9) <<setfill(' ')<< " | $"<< totalAmount << " |\n";
     cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n\n\n";
   }		
}
void menu6()
{
     cout << "\n\n\n\t\t\t                                  Welcome to FOOD POINT !\n\n\n\n";

           

           

           

                                     cout << "\t\t\t\t\t                " << "    _____\n";

                                       cout << "\t\t\t\t                        " << "   /     \\   ____   ____    __ __\n";

                                           cout << " \t\t\t\t                        " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";

                                          cout << " \t\t\t\t                        " << " /    Y    \\  ___/|   |   \\|  |  |\n";
                                          
                                          cout << " \t\t\t\t                        " << " \\____|____/\\____>____|____|_____|\n\n\n";
                                          
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|              ITEMS                    |              PRICE                   | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|        1) Chicken Dum Biryani         |              300                     | \n";
                                          cout<<"\t\t\t\t|        2) SP. Chicken Biryani         |              350                     | \n";
                                          cout<<"\t\t\t\t|        3) Chicken Fry Biryani         |              350                     | \n";
                                          cout<<"\t\t\t\t|        4) Milaoo                      |              400                     | \n";
                                          cout<<"\t\t\t\t|        5) Punjabi Biryani             |              300                     | \n";
                                          cout<<"\t\t\t\t|        6) Veg Birayani                |              180                     | \n";
                                          cout<<"\t\t\t\t|        7) Paneer Birayani             |              220                     | \n";
                                          cout<<"\t\t\t\t|        8) Chicken Shawarma            |              100                     | \n";
                                          cout<<"\t\t\t\t|        9) Chicken Fried Rice          |              130                     | \n";
                                          cout<<"\t\t\t\t|       10) Paneer Fried Rice           |              130                     | \n";
                                          cout<<"\t\t\t\t|       11) Kaju Fried Rice             |              140                     | \n";
                                          cout<<"\t\t\t\t|       12) Mushrom Fried Rice          |              140                     | \n";
                                          cout<<"\t\t\t\t|       13) Chilli Egg                  |              180                     | \n";
                                          cout<<"\t\t\t\t|       14) Chicken 555                 |              300                     | \n";
                                          cout<<"\t\t\t\t|       15) Chicken 65                  |              290                     | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n\n\n";
										  
	typedef pair<string, double> Item; // Define a typedef for convenience
    map<int, Item> priceList;

    // Insert items and prices into the map
    priceList[1] = Item("Chicken Dum Biryani ", 300.0);
    priceList[2] = Item("SP. Chicken Biryani", 350.0);
    priceList[3] = Item("Chicken Fry Biryani ",350.0);
    priceList[4] = Item("Milaoo  ", 400.0);
    priceList[5] = Item("Punjabi Biryani", 300.0);
    priceList[6] = Item("Veg Birayani", 180.0);
    priceList[7] = Item("Paneer Birayani", 220.0);
    priceList[8] = Item("Chicken Shawarma", 100.0);
    priceList[9] = Item("Chicken Fried Rice", 130.0);
    priceList[10] = Item("Paneer Fried Rice ", 130.0);
    priceList[11] = Item("Kaju Fried Rice", 130.0);
    priceList[12] = Item("Mushrom Fried Rice", 140.0);
    priceList[13] = Item("Chilli Egg", 180.0);
    priceList[14] = Item("Chicken 555", 300.0);
    priceList[15] = Item("Chicken 65", 290.0);

    char continueOrder;
    int itemNumber;
    int quantity;
    double totalAmount = 0.0;

    map<int, pair<string, double> > orderedItems; // To store ordered items with quantity

    do {
        

        // Ask for user input
        cout << " \n\t\t\t\tEnter the number of the item you want to order (or enter 0 to exit): ";
        cin >> itemNumber;
        if (itemNumber == 0) {
            break;
        }

        // Check if the entered item number is valid
        map<int, Item>::iterator it = priceList.find(itemNumber);
        if (it != priceList.end()) {
            // Ask for the quantity
            cout << " \n\t\t\t\tEnter the quantity: ";
            cin >> quantity;

            // Add the item name, price, and quantity to the ordered items
            orderedItems[itemNumber] = make_pair(it->second.first, quantity);

            // Add the total price for the specified quantity to the total amount
            totalAmount += it->second.second * quantity;
        } else {
            cout << "\n\t\t\t\tInvalid item number. Please enter a valid item number.\n";
        }

        // Ask if the user wants to continue ordering
        cout << "\n\t\t\t\tDo you want to continue ordering? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    if (itemNumber != 0)
	{
    // Display the final order summary
    cout << "\n\t\t\t\tYour order summary:\n\n";
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    cout << "\t\t\t\t| Item" << setw(40) << setfill(' ') << "|  Quantity |"<< setw(9) << setfill(' ') <<"Total  "<< setw(3) << setfill(' ') <<"|"<<endl;
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";

    for (map<int, pair<string, double> >::iterator it = orderedItems.begin(); it != orderedItems.end(); ++it) 
	{
		double itemTotal = it->second.second * priceList[it->first].second; // Calculate total for each item
			obj[i].product[j]= it->second.first;
		obj[i].quantity[j]= it->second.second;
		j++;
		no_product[i]=j;
        cout << "\t\t\t\t| " << setw(30) << left << it->second.first << " | " << setw(9) << it->second.second << " | $" << setw(8)<<setfill(' ') << itemTotal << " |\n";
        cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    }
    i++;
    j=0;

    cout << "\t\t\t\t| Total amount" << setw(30)<<setfill(' ') << " | " << setw(9) <<setfill(' ')<< " | $"<< totalAmount << " |\n";
    cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n\n\n";
   }			
}
void menu7()
{
     cout << "\n\n\n\t\t\t                                  Welcome to CAKE MAGIC !\n\n\n\n";

           

           

           

                                     cout << "\t\t\t\t\t                " << "    _____\n";

                                       cout << "\t\t\t\t                        " << "   /     \\   ____   ____    __ __\n";

                                           cout << " \t\t\t\t                        " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";

                                          cout << " \t\t\t\t                        " << " /    Y    \\  ___/|   |   \\|  |  |\n";
                                          
                                          cout << " \t\t\t\t                        " << " \\____|____/\\____>____|____|_____|\n\n\n";
                                          
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|              ITEMS                    |              PRICE                   | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|        1) Red Velvet Cake             |              800                     | \n";
                                          cout<<"\t\t\t\t|        2) Strawberry Cake             |              750                     | \n";
                                          cout<<"\t\t\t\t|        3) White Cake & Vanilla.       |              750                     | \n";
                                          cout<<"\t\t\t\t|        4) Chocolate Cake              |              750                     | \n";
                                          cout<<"\t\t\t\t|        5) Rainbow Cake                |              750                     | \n";
                                          cout<<"\t\t\t\t|        6) Lemon Cake                  |              700                     | \n";
                                          cout<<"\t\t\t\t|        7) Black Forest Cake           |              700                     | \n";
                                          cout<<"\t\t\t\t|        8) White Forest Cake           |              700                     | \n";
                                          cout<<"\t\t\t\t|        9) Banana Cake                 |              600                     | \n";
                                          cout<<"\t\t\t\t|       10) Black Current Cake          |              750                     | \n";
                                          cout<<"\t\t\t\t|       11) Normal Cake                 |              300                     | \n";
                                          cout<<"\t\t\t\t|       12) Normal Chocolate Cake       |              340                     | \n";
                                          cout<<"\t\t\t\t|       13) Blast                       |               80                     | \n";
                                          cout<<"\t\t\t\t|       14) Caps                        |               25                     | \n";
                                          cout<<"\t\t\t\t|       15) Candles                     |               20                     | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n\n\n";
										 
		typedef pair<string, double> Item; // Define a typedef for convenience
    map<int, Item> priceList;

    // Insert items and prices into the map
    priceList[1] = Item("Red Velvet Cake ", 800.0);
    priceList[2] = Item("Strawberry Cake", 750.0);
    priceList[3] = Item("White Cake & Vanilla",750.0);
    priceList[4] = Item("Chocolate Cake ", 750.0);
    priceList[5] = Item("Rainbow Cake", 750.0);
    priceList[6] = Item("Lemon Cake", 700.0);
    priceList[7] = Item("Black Forest Cake", 700.0);
    priceList[8] = Item("White Forest Cake", 700.0);
    priceList[9] = Item("Banana Cake", 600.0);
    priceList[10] = Item("Black Current Cake ", 750.0);
    priceList[11] = Item("Normal Cake", 300.0);
    priceList[12] = Item("Normal Chocolate Cake", 340.0);
    priceList[13] = Item("Blast ", 80.0);
    priceList[14] = Item("Caps", 25.0);
    priceList[15] = Item("Candles ", 20.0);

    char continueOrder;
    int itemNumber;
    int quantity;
    double totalAmount = 0.0;

    map<int, pair<string, double> > orderedItems; // To store ordered items with quantity

    do {
        

        // Ask for user input
        cout << " \n\t\t\t\tEnter the number of the item you want to order (or enter 0 to exit): ";
        cin >> itemNumber;
        if (itemNumber == 0) {
            break;
        }

        // Check if the entered item number is valid
        map<int, Item>::iterator it = priceList.find(itemNumber);
        if (it != priceList.end()) {
            // Ask for the quantity
            cout << " \n\t\t\t\tEnter the quantity: ";
            cin >> quantity;

            // Add the item name, price, and quantity to the ordered items
            orderedItems[itemNumber] = make_pair(it->second.first, quantity);

            // Add the total price for the specified quantity to the total amount
            totalAmount += it->second.second * quantity;
        } else {
            cout << "\n\t\t\t\tInvalid item number. Please enter a valid item number.\n";
        }

        // Ask if the user wants to continue ordering
        cout << "\n\t\t\t\tDo you want to continue ordering? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    if (itemNumber != 0)
	{
    // Display the final order summary
    cout << "\n\t\t\t\tYour order summary:\n\n";
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    cout << "\t\t\t\t| Item" << setw(40) << setfill(' ') << "|  Quantity |"<< setw(9) << setfill(' ') <<"Total  "<< setw(3) << setfill(' ') <<"|"<<endl;
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";

    for (map<int, pair<string, double> >::iterator it = orderedItems.begin(); it != orderedItems.end(); ++it) 
	{
		double itemTotal = it->second.second * priceList[it->first].second; // Calculate total for each item
			obj[i].product[j]= it->second.first;
		obj[i].quantity[j]= it->second.second;
		j++;
		no_product[i]=j;
        cout << "\t\t\t\t| " << setw(30) << left << it->second.first << " | " << setw(9) << it->second.second << " | $" << setw(8)<<setfill(' ') << itemTotal << " |\n";
        cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    }
    i++;
    j=0;

    cout << "\t\t\t\t| Total amount" << setw(30)<<setfill(' ') << " | " << setw(9) <<setfill(' ')<< " | $"<< totalAmount << " |\n";
    cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n\n\n";
   }				
}
void menu8()
{
     cout << "\n\n\n\t\t\t                                  Welcome to ZAM ZAM !\n\n\n\n";

           

           

           

                                     cout << "\t\t\t\t\t                " << "    _____\n";

                                       cout << "\t\t\t\t                        " << "   /     \\   ____   ____    __ __\n";

                                           cout << " \t\t\t\t                        " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";

                                          cout << " \t\t\t\t                        " << " /    Y    \\  ___/|   |   \\|  |  |\n";
                                          
                                          cout << " \t\t\t\t                        " << " \\____|____/\\____>____|____|_____|\n\n\n";
                                          
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|              ITEMS                    |              PRICE                   | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|        1) Chicken Dum Biryani         |              250                     | \n";
                                          cout<<"\t\t\t\t|        2) Chicken Fry Biryani         |              270                     | \n";
                                          cout<<"\t\t\t\t|        3) Chicken Mandi               |              300                     | \n";
                                          cout<<"\t\t\t\t|        4) Mutton Mandi                |              350                     | \n";
                                          cout<<"\t\t\t\t|        5) Tandoori Chicken Mandi      |              300                     | \n";
                                          cout<<"\t\t\t\t|        6) Mixed Mandi                 |              500                     | \n";
                                          cout<<"\t\t\t\t|        7) Chicken 65                  |              300                     | \n";
                                          cout<<"\t\t\t\t|        8) Veg Mandi                   |              200                     | \n";
                                          cout<<"\t\t\t\t|        9) Paneer Mandi                |              250                     | \n";
                                          cout<<"\t\t\t\t|       10) Panner Tikka                |              200                     | \n";
                                          cout<<"\t\t\t\t|       11) Tandoori chicken            |              250                     | \n";
                                          cout<<"\t\t\t\t|       12) Grill Chicken               |              340                     | \n";
                                          cout<<"\t\t\t\t|       13) Sweet                       |               40                     | \n";
                                          cout<<"\t\t\t\t|       14) Chicken Shawarma            |              140                     | \n";
                                          cout<<"\t\t\t\t|       15) Juice                       |               80                     | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n\n\n";
										  
    typedef pair<string, double> Item; // Define a typedef for convenience
    map<int, Item> priceList;

    // Insert items and prices into the map
    priceList[1] = Item("Chicken Dum Biryani ", 250.0);
    priceList[2] = Item("Chicken Fry Biryani", 270.0);
    priceList[3] = Item("Chicken Mandi ",300.0);
    priceList[4] = Item("Mutton Mandi", 350.0);
    priceList[5] = Item("Tandoori Chicken Mandi", 300.0);
    priceList[6] = Item("Mixed Mandi", 500.0);
    priceList[7] = Item("Chicken 65", 300.0);
    priceList[8] = Item("Veg Mandi", 200.0);
    priceList[9] = Item("Paneer Mandi", 250.0);
    priceList[10] = Item("Panner Tikka ", 200.0);
    priceList[11] = Item(" Tandoori chicken ", 250.0);
    priceList[12] = Item("Grill Chicken", 340.0);
    priceList[13] = Item("Sweet", 40.0);
    priceList[14] = Item("Chicken Shawarma ", 140.0);
    priceList[15] = Item("Juice", 80.0);

    char continueOrder;
    int itemNumber;
    int quantity;
    double totalAmount = 0.0;

    map<int, pair<string, double> > orderedItems; // To store ordered items with quantity

    do {
        

        // Ask for user input
        cout << " \n\t\t\t\tEnter the number of the item you want to order (or enter 0 to exit): ";
        cin >> itemNumber;
        if (itemNumber == 0) {
            break;
        }

        // Check if the entered item number is valid
        map<int, Item>::iterator it = priceList.find(itemNumber);
        if (it != priceList.end()) {
            // Ask for the quantity
            cout << " \n\t\t\t\tEnter the quantity: ";
            cin >> quantity;

            // Add the item name, price, and quantity to the ordered items
            orderedItems[itemNumber] = make_pair(it->second.first, quantity);

            // Add the total price for the specified quantity to the total amount
            totalAmount += it->second.second * quantity;
        } else {
            cout << "\n\t\t\t\tInvalid item number. Please enter a valid item number.\n";
        }

        // Ask if the user wants to continue ordering
        cout << "\n\t\t\t\tDo you want to continue ordering? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    if (itemNumber != 0)
	{
    // Display the final order summary
    cout << "\n\t\t\t\tYour order summary:\n\n";
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    cout << "\t\t\t\t| Item" << setw(40) << setfill(' ') << "|  Quantity |"<< setw(9) << setfill(' ') <<"Total  "<< setw(3) << setfill(' ') <<"|"<<endl;
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";

    for (map<int, pair<string, double> >::iterator it = orderedItems.begin(); it != orderedItems.end(); ++it) 
	{
		double itemTotal = it->second.second * priceList[it->first].second; // Calculate total for each item
			obj[i].product[j]= it->second.first;
		obj[i].quantity[j]= it->second.second;
		j++;
		no_product[i]=j;
        cout << "\t\t\t\t| " << setw(30) << left << it->second.first << " | " << setw(9) << it->second.second << " | $" << setw(8)<<setfill(' ') << itemTotal << " |\n";
        cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    }
    i++;
    j=0;
    

    cout << "\t\t\t\t| Total amount" << setw(30)<<setfill(' ') << " | " << setw(9) <<setfill(' ')<< " | $"<< totalAmount << " |\n";
    cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n\n\n";
   }				
}
void menu9()
{
     cout << "\n\n\n\t\t\t                                  Welcome to  AUNTY SHOP !\n\n\n\n";

           

           

           

                                     cout << "\t\t\t\t\t                " << "    _____\n";

                                       cout << "\t\t\t\t                        " << "   /     \\   ____   ____    __ __\n";

                                           cout << " \t\t\t\t                        " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";

                                          cout << " \t\t\t\t                        " << " /    Y    \\  ___/|   |   \\|  |  |\n";
                                          
                                          cout << " \t\t\t\t                        " << " \\____|____/\\____>____|____|_____|\n\n\n";
                                          
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|              ITEMS                    |              PRICE                   | \n";
                                          cout<<"\t\t\t\t********************************************************************************\n";
                                          cout<<"\t\t\t\t|        1) Veg Manchuria               |               70                     | \n";
                                          cout<<"\t\t\t\t|        2) Egg Manchuria               |               85                     | \n";
                                          cout<<"\t\t\t\t|        3) Chicken Manchuria           |              115                     | \n";
                                          cout<<"\t\t\t\t|        4) Egg Rice                    |               80                     | \n";
                                          cout<<"\t\t\t\t|        5) Egg Noodles                 |               85                     | \n";
                                          cout<<"\t\t\t\t|        6) Chicken Fried Rice          |              110                     | \n";
                                          cout<<"\t\t\t\t|        7) Chicken Noodles             |              110                     | \n";
                                          cout<<"\t\t\t\t|        8) Egg Chicken Fried Rice      |              120                     | \n";
                                          cout<<"\t\t\t\t|        9) Egg Chicken Noodles         |              120                     | \n";
                                          cout<<"\t\t\t\t|       10) Chicken 65                  |              140                     | \n";
                                          cout<<"\t\t\t\t|       11) Chicken Birayani            |              160                     | \n";
                                          cout<<"\t\t\t\t|       12) Egg Fry                     |               80                     | \n";
                                          cout<<"\t\t\t\t|       13) Chicken Fry                 |              180                     | \n";
                                          cout<<"\t\t\t\t|       14) Egg Curry                   |              100                     | \n";
                                          cout<<"\t\t\t\t|       15) Chicken Curry               |              150                     | \n";
                                          cout<<"\t\t\t\t*********************************************************************************\n\n\n";
										  
	 typedef pair<string, double> Item; // Define a typedef for convenience
    map<int, Item> priceList;

    // Insert items and prices into the map
    priceList[1] = Item("Veg Manchuria ", 70.0);
    priceList[2] = Item("Egg Manchuria",85.0);
    priceList[3] = Item("Chicken Manchuria ",115.0);
    priceList[4] = Item("Egg Rice", 80.0);
    priceList[5] = Item("Egg Noodles ", 85.0);
    priceList[6] = Item("Chicken Fried Rice", 110.0);
    priceList[7] = Item("Chicken Noodles", 110.0);
    priceList[8] = Item("Egg Chicken Fried Rice ", 120.0);
    priceList[9] = Item("Egg Chicken Noodles", 120.0);
    priceList[10] = Item("Chicken 65", 140.0);
    priceList[11] = Item("Chicken Birayani", 160.0);
    priceList[12] = Item("Egg Fry ", 80.0);
    priceList[13] = Item("Chicken Fry", 180.0);
    priceList[14] = Item(" Egg Curry  ", 100.0);
    priceList[15] = Item("Chicken Curry", 150.0);

    char continueOrder;
    int itemNumber;
    int quantity;
    double totalAmount = 0.0;

    map<int, pair<string, double> > orderedItems; // To store ordered items with quantity

    do {
        

        // Ask for user input
        cout << " \n\t\t\t\tEnter the number of the item you want to order (or enter 0 to exit): ";
        cin >> itemNumber;
        if (itemNumber == 0) {
            break;
        }

        // Check if the entered item number is valid
        map<int, Item>::iterator it = priceList.find(itemNumber);
        if (it != priceList.end()) {
            // Ask for the quantity
            cout << " \n\t\t\t\tEnter the quantity: ";
            cin >> quantity;

            // Add the item name, price, and quantity to the ordered items
            orderedItems[itemNumber] = make_pair(it->second.first, quantity);

            // Add the total price for the specified quantity to the total amount
            totalAmount += it->second.second * quantity;
        } else {
            cout << "\n\t\t\t\tInvalid item number. Please enter a valid item number.\n";
        }

        // Ask if the user wants to continue ordering
        cout << "\n\t\t\t\tDo you want to continue ordering? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    if (itemNumber != 0)
	{
    // Display the final order summary
    cout << "\n\t\t\t\tYour order summary:\n\n";
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    cout << "\t\t\t\t| Item" << setw(40) << setfill(' ') << "|  Quantity |"<< setw(9) << setfill(' ') <<"Total  "<< setw(3) << setfill(' ') <<"|"<<endl;
    cout << "\t\t\t\t+-" << setw(40) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";

    for (map<int, pair<string, double> >::iterator it = orderedItems.begin(); it != orderedItems.end(); ++it) 
	{
		double itemTotal = it->second.second * priceList[it->first].second; // Calculate total for each item
			obj[i].product[j]= it->second.first;
		obj[i].quantity[j]= it->second.second;
		j++;
		no_product[i]=j;
        cout << "\t\t\t\t| " << setw(30) << left << it->second.first << " | " << setw(9) << it->second.second << " | $" << setw(8)<<setfill(' ') << itemTotal << " |\n";
        cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n";
    }
       i++;
       j=0;
       
    cout << "\t\t\t\t| Total amount" << setw(30)<<setfill(' ') << " | " << setw(9) <<setfill(' ')<< " | $"<< totalAmount << " |\n";
    cout << "\t\t\t\t+-" << setw(45) << setfill('-') << "---" << setw(9) << setfill('-') << "---" << setw(8) << setfill('-') << "-+\n\n\n";
   }					
}
void restaurants()
{
	int choice;
	while(1){
	  cout<<"\n\n\n";
	  cout << "========   "    <<"  ======== " << "  =======  " << " ========== " <<"      ====      "<<  " ||     || " <<   " ========  "  <<"      ====      "  << "||           || "<<  " ========== " << "  =======  " <<endl;
      cout << "||     ||  "    <<"  ||       " << "  ||       " << "     ||     " <<"      /  \\      "<< " ||     || " <<   " ||     || "  <<"      /  \\      " << "||\\          || "<< "     ||     " << "  ||       " <<endl;
      cout << "||     ||  "    <<"  ||       " << "  ||       " << "     ||     " <<"     /    \\     "<< " ||     || " <<   " ||     || "  <<"     /    \\     " << "||  \\        || "<< "     ||     " << "  ||       " <<endl;
      cout << "========   "    <<"  ======== " << "  =======  " << "     ||     " <<"    =========   "<<  " ||     || " <<   " ========  "  <<"    =========   "  << "||    \\      || "<< "     ||     " << "  =======  " <<endl; 
      cout << "||  \\ \\    "   <<"  ||       " << "       ||  " << "     ||     " <<"   /        \\   "<< " ||     || " <<   " ||  \\ \\   " <<"   /        \\   " << "||      \\    || "<< "     ||     " << "       ||  " <<endl;  
      cout << "||   \\ \\   "   <<"  ||       " << "       ||  " << "     ||     " <<"  /          \\  "<< " \\\\    //" << "   ||   \\ \\  " <<"  /          \\  " << "||        \\  || "<< "     ||     " << "       ||  " <<endl;
      cout << "||    \\ \\  "  <<"  ======== " << "  =======  " << "     ||     " <<" /            \\ "<< "   ====    " <<   " ||    \\ \\ " <<" /            \\ " << "||          \\|| "<< "     ||     " << "  =======  " <<endl;
	      cout << "\n\t\t\t\t\t\t\t+ ----------------------------- +" << endl;  

                                        cout << "\t\t\t\t\t\t\t| ----------------------------- |" ;

                                     cout << "\n\t\t\t\t\t\t\t| 1)    HUG A MUG CAFE          |" << endl;

                                         cout << "\t\t\t\t\t\t\t| 2)    PIZZA HOUSE             |"   << endl;

                                        cout << "\t\t\t\t\t\t\t| 3)    LITTLE VILLAGE          |"        << endl;

                                        cout << "\t\t\t\t\t\t\t| 4)    ANDHRA RUCHULU          |"        << endl;

                                        cout << "\t\t\t\t\t\t\t| 5)    BISMILLAH               |"   << endl;

                                        cout << "\t\t\t\t\t\t\t| 6)    FOOD POINT              |"   << endl;

                                        cout << "\t\t\t\t\t\t\t| 7)    CAKE MAGIC              |"        << endl;

                                        cout << "\t\t\t\t\t\t\t| 8)    ZAM ZAM                 |"        << endl;

                                        cout << "\t\t\t\t\t\t\t| 9)    AUNTY SHOP              |"        << endl;

                                        cout << "\t\t\t\t\t\t\t| 10)   EXIT                    |"        << endl;

                                        cout << "\t\t\t\t\t\t\t| ----------------------------- |"        << endl;

                                        cout << "\t\t\t\t\t\t\t+ ----------------------------- + \n\n\n" << endl;

                                


            
				
                cout << "\t\t\t\t\t\t\t" << " Select the resturant you want: ";

                cin  >> choice;
				switch(choice){
					case 1:
						menu1();
						break;
					case 2:
						menu2();
						break;
					case 3:
						menu3();
						break;
					case 4:
						menu4();
						break;
					case 5:
						menu5();
						break;
					case 6:
						menu6();
						break;
					case 7:
						menu7();
						break;
					case 8:
						menu8();
						break;
					case 9:
						menu9();
						break;
					case 10:
						cout<<"\n\n\t\t\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
						cout<<"\t\t\t\t\t\t\t ~ Get back to main page ~"<<endl;
						cout<<"\t\t\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
					    cout<<"\t\t\t\t\t\t\t\t*********  "<<endl;
	                    cout<<"\t\t\t\t\t\t\t\t$ Ahara $"<<endl;
	                    cout<<"\t\t\t\t\t\t\t\t*********"<<endl<<"\n\n\n\n\n";
                     	cout<<"\t\t\t\t\t\t\t 1.ORDERS\n\n"<<endl;
	                    cout<<"\t\t\t\t\t\t\t 2.CONTACT DETAILS\n\n"<<endl;
	                    cout<<"\t\t\t\t\t\t\t 3.ORDER DETAILS\n\n"<<endl;
                        cout<<"\t\t\t\t\t\t\t 4.EXIT\n\n"<<endl;
	  					break;					
					default:
						cout<<"\t\t\t\t\t\t\t Invaild number ,Try again "<<endl;
						break;
						
						
				}
				if(choice==10)
	            {
                  break;
	            }
	continue;    
	}

}
int main()
{   
    int a,choice;
    cout<<"\t\t\t\t\t\t\t\t*********  "<<endl;
	cout<<"\t\t\t\t\t\t\t\t$ Ahara $"<<endl;
	cout<<"\t\t\t\t\t\t\t\t*********"<<endl<<"\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t 1.ORDERS\n\n"<<endl;
	cout<<"\t\t\t\t\t\t\t 2.CONTACT DETAILS\n\n"<<endl;
	cout<<"\t\t\t\t\t\t\t 3.ORDER DETAILS\n\n"<<endl;
    cout<<"\t\t\t\t\t\t\t 4.EXIT\n\n"<<endl;	
	while(1){
	cout<<"\t\t\t\t\t\t\t select your choice(1/2/3/4) : ";
	cin>>a;
	cout<<endl;
	
	if(a!=1&&a!=2&&a!=3&&a!=4)
	{
		cout<<"You Entered Invalid Number"<<endl;
		cout<<"\t\t\t\t\t\t\t select your choice(1/2/3/4) : "<<endl;
		cin>>a;
	}
	else{
	
	switch(a){
	
		case 1:
			restaurants();
			break;
		case 2:
			cout<<"\t\t\t\t\t\t\t################################"<<endl;
			cout<<"\t\t\t\t\t\t\t# contect details : 9353281940 #"<<endl;
			cout<<"\t\t\t\t\t\t\t################################\n"<<endl<<endl;
//			cout<<"\t\t\t\t\t\t\t select your choice(1/2/3) : ";
//		    cin>>a;
            
		case 3:
			order_details();
			break;
		case 4:
			cout<<"\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
			cout<<"\t\t\t\t\t\t\t@ Thank you ,Have a great day @"<<endl;
			cout<<"\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"<<endl<<endl;
			
    }
   
	if(a==4)
	{
      break;
	}
	continue;
   }
   
  }
	
}
