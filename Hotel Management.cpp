#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
   // Quantity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    // food items sold
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    // Total proce of items
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;
    cout <<"\n\t\t\t\t********Quantity of items we have********";
    cout <<"\nRooms avaliabe:";
    cin >> Qrooms;
    cout <<"\nQuantity of pasta:";
    cin >> Qpasta;
    cout <<"\nQuantity of burger:";
    cin >> Qburger;
    cout <<"\nQuantity of noodles:";
    cin >> Qnoodles;
    cout <<"\nQuantity of shake:";
    cin >> Qshake;
    cout <<"\nQuantity of chicken-roll:";
    cin >> Qchicken;
    
    m:
    cout <<"\n\t\t\tPlease select from the menu options";
	cout <<"\n\n1)Rooms";
	cout <<"\n2)Pasta";
	cout <<"\n3)Burger";
	cout <<"\n4)Noodles";
	cout <<"\n5)shake";
	cout <<"\n6)Chicken-roll";\
	cout <<"\n7)Information regarding sales and collection";
	cout <<"\n8)Exit";
	cout <<"\n\nPlease Enter your choice!";
	cin >> choice;
	switch(choice)
	{
    case 1:
        cout <<"\n\nEnter the number of rooms you want:";
        cin >> quant;
        if(Qrooms-Srooms>=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+quant*1200;
            cout <<"\n\n\t\t"<< quant <<"room/rooms have been alloted to you!";
        }
        else
            cout <<"\n\tOnly"<< Qrooms-Srooms <<"Rooms remaining in hotel";
            break;
            
    case 2:
		cout <<"\n\nEnter Pasta Quantity:";
		cin >> quant;
		if(Qpasta-Spasta>=quant)
		{
			Spasta=Spasta+quant;
			Total_pasta=Total_pasta+quant*250;
			cout <<"\n\n\t\t"<< quant <<"pasta is the order!";
		}
		else
        	cout <<"\n\tOnly"<< Qpasta-Spasta <<"Pasta remaining in hotel";
			break;
			
	case 3:
		cout <<"\n\nEnter Burger Quantity:";
		cin >> quant;
		if(Qburger-Sburger>=quant)
		{
			Sburger-Sburger+quant;
			Total_burger=Total_burger+quant*100;
			cout <<"\n\n\t\t"<< quant <<"burger is the order!";
		}
		else
			cout <<"\n\tOnly"<< Qburger-Sburger <<"burger remaining in hotel";
			break;
	case 4:
	cout <<"\n\nEnter Noodle Quantity:";
	cin >> quant;
	if(Qnoodles-Snoodles>=quant)
	{
    	Snoodles=Snoodles+quant;
    	Total_noodles=Total_noodles+quant*50;
    	cout <<"\n\n\t\t"<< quant <<"noodle is the order!";
	}
	else
    	cout <<"\n\tOnly"<< Qnoodles-Snoodles <<"Noodles remaining in hotel";
    	break;
    	
    case 5:
	cout <<"\n\nEnter Shakes Quantity:";
	cin >> quant;
	if(Qshake-Sshake>=quant)
	{
		Sshake=Sshake+quant;
		Total_shake=Total_shake+quant*120;
		cout <<"\n\n\t\t"<< quant <<"shakes is the order!";
	}
	else
		cout <<"\n\tOnly"<< Qshake-Sshake <<"Noodles remaining in hotel";
		break;
		
	case 6:
	cout <<"\n\nEnter Chicken-roll Quantity:";
	cin >> quant;
	if(Qchicken-Schicken>=quant)
	{
		Schicken=Schicken+quant;
		Total_chicken=Total_chicken+quant*150;
		cout <<"\n\n\t\t"<< quant <<"chicken-roll is the order!";
	}
	else
		cout <<"\n\tOnly"<< Qchicken-Schicken <<"Chicken-roll remaining in hotel";
		break;
		
	case 7:
	cout <<"\n\t\tDetails of sales and collection";
	cout <<"\n\nNumber of rooms we had:"<< Qrooms;
	cout <<"\n\nNumber of rooms we gave for rent"<< Srooms;
	cout <<"\n\nRemaining rooms:"<< Qrooms-Srooms;
	cout <<"\n\nTotal rooms collection for the day:"<< Total_rooms;
	cout <<"\n\nNumber of Pastas we had:"<< Qpasta;
	cout <<"\n\nNumber of Pastas we sold"<< Spasta;
	cout <<"\n\nRemaining Pastas:"<< Qpasta-Spasta;
	cout <<"\n\nTotal Pasta collection for the day:"<< Total_pasta;
	cout <<"\n\nNumber of burger we had:"<< Qburger;
	cout <<"\n\nNumber of burgers sold"<< Sburger;
	cout <<"\n\nRemaining burgers:"<< Qburger-Sburger;
	cout <<"\n\nTotal burger collection for the day:"<< Total_burger;
	cout <<"\n\nNumber of Noodles we had:"<< Qnoodles;
	cout <<"\n\nNumber of noodles we sold"<< Srooms;
	cout <<"\n\nRemaining noodles:"<< Qnoodles-Snoodles;
	cout <<"\n\nTotal noodle collection for the day:"<< Total_noodles;
	cout <<"\n\nNumber of shakes we had:"<< Qshake;
	cout <<"\n\nNumber of shakes we sold"<< Qshake;
	cout <<"\n\nRemaining shakes:"<< Qshake-Sshake;
	cout <<"\n\nTotal shakes collection for the day:"<< Total_shake;
	cout <<"\n\nNumber of Chicken-roll we had:"<< Qchicken;
	cout <<"\n\nNumber of Chicken-roll we sold"<< Schicken;
	cout <<"\n\nRemaining Chciken-roll:"<< Qchicken-Schicken;
	cout <<"\n\nTotal Chicken-roll collection for the day:"<< Total_chicken;
	
	case 8:
    	exit(0);
    	default:
        	cout <<"\nPlease select the numbers mentioned above!";
	}
goto m;
}