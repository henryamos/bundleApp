#include <iostream>
using namespace std;
// Console Application to check your data bundle subscription //
void dataBundleB();              ///function for PackageB ///
void dataBundleC();             ///function for PackageC ///
void dataPackage();            /// function for displaying Package Offers //
int subscriptionHours;        /// Global variable for subscription Hours ///
char bundleOption ;           /// Variable for  taking users inputs //


int main() {
	int userInput;
	cout<<"--- WELCOME---TO--VALLEY--VIEW INTERNET SERVICE PROVIDER---"<<endl;
	cout<<"-----------------------------------------------------------\n"<<endl;

		cout<<"----Press 1 to see amazing offers ---\n"<<endl;
		cin>>userInput;
	     if(userInput== 1){
	     	 dataPackage();  // calling dataPackage function //
		 }else{
		    cout<<" Aw!!! Wrong Input \n"<<endl;
		    cout<<"Try Again"<<endl;
	    return main();
		  }

		 cout<<"------THANKS FOR USING  THIS FALAA BUNDLE ------- ---\n"<<endl;
	return 0;
}
void dataPackage(){

	cout<<"_______________________________________________"<<endl;
	cout<<"---WELCOME TO FALAA  DATA BUNDLE SUBSCRIPTION"<<endl;
	cout<<"________________________________________________"<<endl;
	cout<<"PackageA          PackageB             PackageC"<<endl;
	cout<<"$9.95/month       $13.95/month         $19.95/month"<<endl;
    cout<<"10 hrs/ Access     20 hrs/Access         Unlimited Access \n\n\n"<<endl;

    cout<<"-------------Extra Hours Charges---------------"<<endl;
    cout<<"PackageA          PackageB             PackageC"<<endl;
	cout<<"$2/hr             $1/month              $0/hr"<<endl;
	cout<<" \n \n";
	cout<<"Enter the Package letter A or B or C:  ";
	cin>>bundleOption;
	 switch(bundleOption){
	 	case 'A':
	 	case 'a':
	 		dataBundleA();
	 		break;
	 	case 'B':
	 	case 'b':
		 dataBundleB();
		 break;
		 case 'C':
		 case 'c':
		 	dataBundleC();
		 	break;
		 default:
		 cout<<"Wrong Package letter \n"<<endl;
		 cout<<"Try Again  \n\n\n"<<endl;
		 return dataPackage();

	 }


}

void dataBundleA(){
	float  totalCharges, extraCharges,extraFees,totalFees;
	int fixedHours , extraHours;
	fixedHours =10;
	totalCharges =  9.95;
	cout<<"Thanks For using PACKAGE A \n"<<endl;
	cout<<"Enter the number of hours you have used this offer"<<endl;
	cin>>subscriptionHours;

	if(subscriptionHours <=10){
		cout<<"Your subscription fee is $:"<<totalCharges<<endl;
	}
	else{
		subscriptionHours >=10;
	 	extraCharges= 2.00;
	 	extraHours = subscriptionHours-fixedHours;
	 	extraFees = extraCharges*extraHours;
	 	totalFees = totalCharges + extraFees;
	 	cout<<"Your subscription fees is $:"<<totalFees<<"\n"<<endl;
	}

}
void dataBundleB(){
	float  totalCharges, extraCharges,extraFees,totalFees;
	int fixedHours , extraHours;
	fixedHours =20;
	totalCharges= 13.95;
	cout<<"Thanks For using PACKAGE B"<<endl;
	cout<<"Enter the number of hours you have used this offer "<<"\n"<<endl;
	cin>>subscriptionHours;
	   	if(subscriptionHours <=20){
		cout<<"Your subscription fee is $:"<<totalCharges<< "\n"<< endl;
	}
	else{
		subscriptionHours >=20;
	 	extraCharges= 1.00;
	 	extraHours = subscriptionHours-fixedHours;
	 	extraFees = extraCharges*extraHours;
	 	totalFees = totalCharges + extraFees;
	 	cout<<"Your subscription fees is $:"<<totalFees<<"\n"<<endl;
	}
	}

void dataBundleC(){
	cout<<"Thanks For using PACKAGE C"<<endl;
	cout<<"You have Unlimited Offer \n"<<endl;
}
