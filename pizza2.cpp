#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void ending();
class Veg
{
1
public:
    void diet()
    {
        int option;
        cout<<setw(100)<<"How was Your Experience with the Pizza Hut Self Checkout System?"<<endl<<setw(70)<<"1:Excellent"<<endl<<setw(73)<<"2:SatisFactory";
        cin>>option;
        switch (option)
        {
            case 1:
            cout<<setw(100)<<"Thankyou So Much For your Valueable Feedback! Have a Great Day"<<endl;
            break;
            
            case 2:
            cout<<setw(100)<<"So Sorry to hear that.We will Try to improve our services as fast as possible."<<endl;
        }
        cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
};
int main()
{
    int c,op,v,nv,v1,cost,v2,v3,v4,nv1,nv2,nv3,nv4,top,side,app,pass,bev,des;
    int gb_count=0;
    int cgb_count=0;
    int pw_count=0;
    int cost1,cost2,cost_final;
    string coupon,name,phone;
    string your_order="You have placed order for -";
    cost=0;
    cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<""<<setw(90)<<"Welcome To Pizza Hut Self Checkout System"<<endl;
    cout<<setw(80)<<"Please Enter Your Name:";
    cin>>name;
    cout<<setw(88)<<"Please Enter Your Phone Number:";
    cin>>phone;
    if(phone.length()!=10)
    {
        cout<<"Invalid"<<endl;
    }
    else{
        cout<<"Valid Phone Number"<<endl;
    }
     cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
     cout<<setw(20)<<"                                                       Choose an Option:\n                                                       1:Veg\n                                                       2:Non Veg"<<endl;
     cin>>op;
     cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    if(op==1)
    {
        cout<<""<<setw(75)<<"Thankyou For Choosing Veg!!"<<endl;
                cout<<""<<setw(72)<<"Here are your Options:"<<endl;
                cout<<""<<setw(70)<<"1:Margherita Pizza"<<endl;
                cout<<""<<setw(69)<<"2:Farmhouse Pizza"<<endl;
                cout<<""<<setw(66)<<"3:Veggie Feast"<<endl;
                cout<<""<<setw(73)<<"4:Paneer Soya Supreme"<<endl;
                cin>>v;

                 cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    else if(op==2)
    {
         cout<<""<<setw(75)<<"Thankyou For Choosing Non Veg!!"<<endl;
                cout<<""<<setw(71)<<"Here are your Options:"<<endl;
                cout<<""<<setw(77)<<"1:Chicken Pepperoni Pizza"<<endl;
                cout<<""<<setw(73)<<"2:Chicken Tikka Pizza"<<endl;
                cout<<""<<setw(76)<<"3:Chicken Italiano Pizza"<<endl;
                cout<<""<<setw(75)<<"4:Chicken Pepper Crunch"<<endl;
                cin>>nv;   
                 cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    else{
        cout<<""<<setw(80)<<"Error!!Please Start Again";
    }
    if(v==1)
    {
        cout<<""<<setw(70)<<"Good Choice !!"<<endl;
        cout<<""<<setw(65)<<"1:Small-Rs 150"<<endl;
        cout<<""<<setw(66)<<"2:Medium-Rs 200"<<endl;
        cout<<""<<setw(65)<<"3:Large-Rs 220 "<<endl;
        cin>>v1;
         cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    else if(v==2)
    {
         cout<<""<<setw(70)<<"Good Choice !!"<<endl;
        cout<<""<<setw(65)<<"1:Small-Rs 200"<<endl;
        cout<<""<<setw(66)<<"2:Medium-Rs 250"<<endl;
        cout<<""<<setw(65)<<"3:Large-Rs 300"<<endl;
        cin>>v2;
         cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
   
    else if(v==3)
    {
         cout<<""<<setw(70)<<"Good Choice !!"<<endl;
        cout<<""<<setw(65)<<"1:Small-Rs 210"<<endl;
        cout<<""<<setw(66)<<"2:Medium-Rs 260"<<endl;
        cout<<""<<setw(65)<<"3:Large-Rs 330"<<endl;
        cin>>v3;
         cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    else if(v==4)
    {
         cout<<""<<setw(70)<<"Good Choice !!"<<endl;
        cout<<""<<setw(65)<<"1:Small-Rs 250"<<endl;
        cout<<""<<setw(66)<<"2:Medium-Rs 300"<<endl;
        cout<<""<<setw(65)<<"3:Large-Rs 370"<<endl;
        cin>>v4;
         cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
   
    if(v1==1)
    {
        cost=cost+150;
        your_order= your_order + " Small Veg Pizza";
    }
   else if(v1==2)
   {
    cost=cost+200;
     your_order= your_order + " Medium Veg Pizza";
   }
   else if(v1==3)
   {
    cost=cost+220;
     your_order= your_order + " Large Veg Pizza";
     
   }
   
    if(v2==1)
    {
        cost=cost+200;
       
    }
   else if(v2==2)
   {
    cost=cost+250;
    your_order= your_order + " Medium Veg Pizza";
   }
   else if(v2==3)
   {
    cost=cost+300;
    your_order= your_order + " Large Veg Pizza";
    
   }
   

    if(v3==1)
    {
        cost=cost+210;
       
    }
   else if(v3==2)
   {
    cost=cost+260;
   }
   else if(v3==3)
   {
    cost=cost+330;
   }


   
    if(v4==1)
    {
        cost=cost+250;
        your_order=your_order+" Small Veg Pizza ";
    }
   else if(v4==2)
   {
    cost=cost+300;
   }
   else if(v4==3)
   {
    cost=cost+370;
   }

// Non Veg
if(nv==1)
    {
        cout<<""<<setw(70)<<"Good Choice !!"<<endl;
        cout<<""<<setw(65)<<"1:Small-Rs 170"<<endl;
        cout<<""<<setw(66)<<"2:Medium-Rs 220"<<endl;
        cout<<""<<setw(65)<<"3:Large-Rs 240 "<<endl;
        cin>>nv1;
         cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    else if(nv==2)
    {
         cout<<""<<setw(70)<<"Good Choice !!"<<endl;
        cout<<""<<setw(65)<<"1:Small-Rs 220"<<endl;
        cout<<""<<setw(66)<<"2:Medium-Rs 270"<<endl;
        cout<<""<<setw(65)<<"3:Large-Rs 320"<<endl;
        cin>>nv2;
         cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
   
    else if(nv==3)
    {
         cout<<""<<setw(70)<<"Good Choice !!"<<endl;
        cout<<""<<setw(65)<<"1:Small-Rs 230"<<endl;
        cout<<""<<setw(66)<<"2:Medium-Rs 270"<<endl;
        cout<<""<<setw(65)<<"3:Large-Rs 350"<<endl;
        cin>>nv3;
         cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    else if(nv==4)
    {
         cout<<""<<setw(70)<<"Good Choice !!"<<endl;
        cout<<""<<setw(65)<<"1:Small-Rs 270"<<endl;
        cout<<""<<setw(66)<<"2:Medium-Rs 320"<<endl;
        cout<<""<<setw(65)<<"3:Large-Rs 390"<<endl;
        cin>>nv4;
         cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    if(nv1==1)
    {
        cost=cost+170;
    }
   else if(nv1==2)
   {
    cost=cost+220;
   }
   else if(nv1==3)
   {
    cost=cost+240;
   }
   
    if(nv2==1)
    {
        cost=cost+220;
    }
   else if(nv2==2)
   {
    cost=cost+270;
   }
   else if(nv2==3)
   {
    cost=cost+320;
   }
   

    if(nv3==1)
    {
        cost=cost+230;
    }
   else if(nv3==2)
   {
    cost=cost+270;
   }
   else if(nv3==3)
   {
    cost=cost+350;
   }


   
    if(v4==1)
    {
        cost=cost+270;
    }
   else if(v4==2)
   {
    cost=cost+320;
   }
   else if(v4==3)
   {
    cost=cost+390;
   }
cost1=0;
do
{
    cout<<""<<setw(75)<<"Want Some Extra Toppings???"<<endl;
        cout<<""<<setw(70)<<"1:Tomatoes-Rs 60"<<endl;
        cout<<""<<setw(70)<<"2:Mushroom-Rs 70"<<endl;
        cout<<""<<setw(68)<<"3:Olives-Rs 90"<<endl;
        cout<<""<<setw(72)<<"4:Jalapenos-Rs 115"<<endl;
        cout<<""<<setw(66)<<"5:Corn-Rs 55"<<endl;
        cout<<""<<setw(67)<<"6:Onion-Rs 75"<<endl;
        cout<<""<<setw(60)<<"7:Exit"<<endl;
        cin>>top;
        cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
        
        if(top==1)
        {
            cost1=cost1+60;
        }
        else if (top==2){
            cost1=cost1+70;
        }
        else if(top==3)
        {
            cost1=cost1+90;
        }
        else if (top==4)
        {
            cost1=cost1+115;
        }
        else if(top==5)
        {
            cost1=cost1+55;
        }
        else if(top==6)
        {
            cost1=cost1+75;
        }
        else if(top=7)
        {
            cout<<""<<setw(70)<<""<<endl;
        }
}
while(top!=7);
// Beverages
cost2=0;
do{


        cout<<setw(75)<<"Ultimate Pizza Hut Sides:"<<endl;
        cout<<""<<setw(70)<<"1:Appetizers"<<endl;
        cout<<""<<setw(66)<<"2:Pastas"<<endl;
        cout<<""<<setw(69)<<"3:Beverages"<<endl;
        cout<<""<<setw(68)<<"4:Desserts"<<endl;
        cout<<""<<setw(64)<<"5:Exit"<<endl;
        cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
        cin>>side;
        switch (side)
        {
            case 1:
            
            appetizer:

            cout<<setw(75)<<"Here are Your Options:"<<endl<<setw(71)<<"1:Garlic Bread:180Rs"<<endl<<setw(78)<<"2:Cheesy Garlic Bread:200Rs"<<endl<<setw(72)<<"3:Potato Wedges:250Rs"<<endl<<setw(57)<<"4:Exit"<<endl;
             
            cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
            
            cin>>app;
            
            if(app==1)
            {
                cost2=cost2+180;
                gb_count++;
                goto appetizer;
            }
            if(app==2)
            {
                cost2=cost2+200;
                cgb_count++;
                goto appetizer;
            }
            if(app==3)
            {
                cost2=cost2+250;
                pw_count++;
                goto appetizer;
            }
            if(app==4)
            {
                if(gb_count>0)
                {
                your_order = your_order + "+ Garlic Bread x " + to_string(gb_count);
                }
                if(cgb_count>0)
                {
                your_order = your_order + "+ Cheesy Garlic Bread x " + to_string(cgb_count);
                }
                if(pw_count>0)
                {
                your_order = your_order + "+ Potato Wedges x " + to_string(pw_count);
                }
                
                cout<<"Exit"<<endl;
                break;
            }














            case 2:cout<<setw(75)<<"Here are your options:"<<endl;
            cout<<""<<setw(70)<<"1:Red Sauce pasta:200Rs"<<endl;
            cout<<""<<setw(72)<<"2:White Sauce Pasta:220Rs"<<endl;
            cout<<""<<setw(71)<<"3:Pink Sauce Pasta:250Rs"<<endl;
            cout<<""<<setw(59)<<"4:Exit"<<endl;
             
             cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
            cin>>pass;
            if(pass==1)
            {
                cost2=cost2+200;
            }
            if(pass==2)
            {
                cost2=cost2+220;
            }
            if(pass==3)
            {
                cost2=cost2+250;
            }
            if(pass=4)
            {
                cout<<"Exit"<<endl;
            }
            break;

        case 3:
            cout<<setw(75)<<"Here are your options:"<<endl;
            cout<<""<<setw(70)<<"1:Pepsi:100Rs"<<endl;
            cout<<""<<setw(72)<<"2:Ice Tea:100Rs"<<endl;
            cout<<""<<setw(91)<<"3:Signature Pizza Hut Mojito:150Rs"<<endl;
            cout<<""<<setw(63)<<"4:Exit"<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
            cin>>des;
            if(des==1)
            {
                cost2=cost2+100;
            }
            if(des==2)
            {
                cost2=cost2+100;
            }
            if(bev==3)
            {
                cost2=cost2+150;
            }
            if(bev==4)
            {
                cout<<"Exit"<<endl;
            }
        break;

        case 4:
        cout<<setw(75)<<"Here are your options:"<<endl;
            cout<<""<<setw(80)<<"1:Choco Lava Cake:200Rs"<<endl;
            cout<<""<<setw(81)<<"2:Nutella Pancakes:250Rs"<<endl;
            cout<<""<<setw(86)<<"3:Chefs Special Baklava:280Rs"<<endl;
            cout<<""<<setw(63)<<"4:Exit"<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
            cin>>des;
            if(des==1)
            {
                cost2=cost2+200;
            }
            if(des==2)
            {
                cost2=cost2+250;
            }
            if(des==3)
            {
                cost2=cost2+280;
            }
            if(des==4)
            {
                cout<<"Exit"<<endl;
            }
        break;
            
            case 5:
            cout<<"Exit";
            break;

            default:
            cout<<"Wrong Input";

        }
}
while(side!=5);
cost_final=(cost+cost1+cost2);
string coupon_code;
cout<<setw(70)<<"Enter your Coupon Code:";
cin>>coupon_code;

if(coupon_code == "PIZZA100")
{
    cost_final = cost_final - 100;
    cout<<setw(70)<<"Congratulations! You have availed 100 Rupees Discount of the total bill."<<endl;
}
else if (coupon_code=="PIZZA200")
{
    cost_final = cost_final -200;
      cout<<setw(70)<<"Congratulations! You have availed 200 Rupees Discount of the total bill."<<endl;
}
else{
    cout<<setw(70)<<"Invalid Coupon"<<endl;
}
cout<<""<<setw(48)<<"Dear "<<name<<" Thankyou For Ordering From Pizza Hut."<<endl;
cout<<""<<setw(82)<<"Your Bill is Sent to your Phone Number "<<phone<<endl;
cout<<""<<setw(82)<<"Your Total Bill Inclusive of 5% GST is "<<cost_final+(cost_final*0.05)<<" Rs"<<endl;
  Veg dish;
            dish.diet();
ending();
cout<<your_order;
}
void ending()
{
    cout<<setw(80)<<"Pizza Hut Private Limited";
}

