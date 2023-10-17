#include<iostream>
#include<math.h> //I included math.h header to use absolute value function in task 3
using namespace std; 
int main()
{
	cout<<"TASK 1: -"<<endl;
	int num;  
	cout<<"Please choose the province:-"<<endl; 
	cout<<"1. Balochistan"<<endl;
	cout<<"2. Punjab"<<endl; 
	cout<<"3. Sindh"<<endl; 
	cout<<"4. KPK"<<endl; 
	cin>>num; //the user inputs any integer from 1 to 4. 
	//The switch makes it so that for each input entered, a different output gets carried out
	//each case shows the population of the province corresponding to it in the options
	switch(num){
	case 1: 
	cout<<"Balochistan's population is: - 20.1million  "<<endl; //when 1 is entered
	break;
	case 2: 
	cout<<"Punjab's population is : - 127.4million "<<endl; //when 2 is entered
	break;
	//break is necessary in switch case functions since it stops the code from running from that point if the case is true 
	case 3:
	cout<<"Sindh's population is: - 54.8million "<<endl;  //when 3 is entered 
	break; 
	case 4:
	cout<<"KPK's population is: - 39.37million "<<endl;   //when 4 is entered
	break;
	default: //any other input entered apart from the above given cases will be declared as invalid since none of the options given above come under it
	cout<<"Invalid input entered."<<endl;
}
	//end of task 1 
	
	cout<<"TASK 2: -"<<endl; 
	char alpha; 
	cout<<"Please enter your alphabet: -"<<endl; 
	cin>>alpha; 
	switch(alpha){
		//to check for lower case vowels, the following cases are stated:-
	    case 'a': case 'e': case 'i': case'o': case'u':
		cout<<"Your alphabet is a lower case vowel"<<endl;
		break; 
		//to check for upper case vowels, the following cases are stated:-
		case 'A': case 'E': case 'I': case 'O': case 'U':
		cout<<"Your alphabet is an upper case vowel"<<endl;
		break; 
		//to check for upper case consonants, the following cases are stated:-
		case 'B': case 'C': case 'D': case 'F': case 'G': case 'H': case 'J': case 'K': case 'L': case 'M': case 'N': case 'P': case 'Q': case'R': case 'S': case 'T': case'V': case'W': case 'X': case 'Y' : case 'Z':                    
		cout<<"Your alphabet is an upper case consonant"<<endl;
		break; 
		//to check for lower case consonants, the following cases are stated:-
		case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k': case 'l': case 'm': case 'n': case 'p': case 'q': case'r': case 's': case 't': case'v': case'w': case 'x': case 'y' : case 'z':
		cout<<"Your alphabet is a lower case consonant"<<endl; 
		break;
		default: //in case of any character entered other than an alphabet, the following output will be displayed. Hence the user is only restricted to using alphabets
		cout<<"INVALID CHARACTER ENTERED"; 
		//end of task 2 
		
		
		}
		
	cout<<"."<<endl;
	cout<<"TASK 3: -"<<endl; 
	int x, y;
	cout<<"Enter any number"<<endl;
	cin>>x; //input any number negative, positive or equal to 0 
	
	switch(x)  //setting up a switch for the value of x as we have to show whether input number is negative, positive or 0
	{
	case 0:  //in case it's equal to 0, the switch right away gives the output, wihtout going towards the next step
	    cout<<"Your number is equal to zero"<<endl; 
	    break; //break lines are necessary in between different cases
	default:
	    y = x/abs(x); 
		//the absolute value function is used by including math.h header 
	    //another y is introduced as first declared under int
	    //the formula showing the value of y is a proof to decide whether x is a positive or negative.
	    //the absolute value of x will be positive in both cases, but the sign of the numerator will change on the basis of the sign of x
	    //henceforth the x in the numerator and the denominator will divide and give us 1 along with the sign of the x in the numerator 
	    switch(y){
		
		    case -1:
			    cout<<"Your number is negative"<<endl; //checks if number is negative
		    break;
		
		    case 1:
			    cout<<"Your number is positive"<<endl; //checks if number is positive
		    break; 
		
		    default:
			    cout<<"INVALID NUMBER ENTERED"<<endl;
			
	}
	}
		 
	//end of task 3
	
	cout<<"TASK 4: -"<<endl;
	
	float age; 
	cout<<"Please enter your age: -"<<endl; 
	cin>>age;  //age as input is entered by the user 
	//nested if else is used to decide whether the individual is a child, teenager or an adult
	
	if (age>=0)
{   
	
	if (age<=12){
		cout<<"You are a child"<<endl;  //checks if age entered is below and equal to 12 or not
	}
	
	else if(age<=18) {
		cout<<"You are a teenager"<<endl;  //checks if age entered is below and equal to 18 or not
	}
	
	else 
	    cout<<"You are an adult"<<endl; //checks if age entered is above 18 or not 
	
	  }
	
	else if(age<0 ) //checks in case an invalid age has been entered
	{
        cout<<"INVALID AGE ENTERED"<<endl;}
        
    
    //end of task 4
    
    
    cout<<"TASK 5: -"<<endl; 
    //program to find the greatest number from 3 numbers given by the user
    
    float a, b, c; 
    
    cout<<"Please enter the 3 numbers a, b and c respecitvely "<<endl;
    cin>>a;  
    cin>>b;
    cin>>c; 
    //user enters the 3 numbers
    //all possible relations showing the greatest numbers from these 3 are given below using if-else nested
    
    if(a>b)
    {   if(b>c){
    	    cout<<"The greatest number is 'a'':- "<<a<<endl;} //in this case 'a' is the greatest numeber as a>b>c
	
        else if(c>a){
		    cout<<"The greatster number is 'c':- "<<c<<endl; }  //in this case 'c' is the greatest number  a>b and c>a
	}
    
    else if(b>a)
    {   if(a>c){
    	    cout<<"The greatest number is 'b':- "<<b<<endl;} //in this case 'b' is the greatest number as b>a>c
    
        else if(c>b){
		    cout<<"The greatest number is 'c':- "<<c<<endl;} //in this case 'c' is the greatest number as c>b>a

	}
	
    else if(a==b && b==c) //when all numbers are equal, the following output is printed
	{cout<<"All 3 given numbers are equal"<<endl;	
	}
    else if(a==b) //we now consider the condition in which 2 out of the 3 numbers are equal
    {   if(b>c) {
            cout<<"Both a and b are the greatest numbers ="<<a<<endl;} 
			//in this case both numbers that are equal are considered the greatest since it is greater than the 3rd number  
            
        else if(c>b){
            cout<<"The greatest number is 'c':- "<<c<<endl; }  //in this case 'c' is the greatest number since c>b=a       
	}
	else if(a==c) //similar to the previous step, we now show the case when 2 other numbers are equal

     {   if(c>b) {
            cout<<"Both a and c are the greatest numbers = "<<a<<endl;} //both equal numbers are the greatest
        else if(b>c){
            cout<<"The greatest number is 'b':- "<<b<<endl; } //the third unequal number is greater than the other two 
     }
    
    else if(b==c) //the third condition where any 2 numbers in a group of 3 numbers can be equal 

     {   if(b>a) {
            cout<<"Both b and c are the greatest numbers = "<<b<<endl;}
        else if(a>b){
            cout<<"The greatest number is 'a':- "<<a<<endl; }
      }
      
      //end of task 5
	  
	  cout<<"TASK 6:- "<<endl; 
	  char ch;

       cout << "Enter an alphabet: ";
       cin >> ch;
    //checking if given input is a letter 
       if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
       	
    // Check if the input is a lowercase vowel
           if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
		    {cout<<ch<< " is a lowercase vowel." << endl;}
		    
    // Check if the input is an uppercase vowel
           else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
	        {cout<<ch<<" is an uppercase vowel."<<endl;}
            
    // Check if the input is an uppercase  consonant 
           else if (ch >= 'b' && ch <='z') 
            {cout<<ch<<" is a lowercase consonant."<<endl;}
		   
		   else 
		    {cout<<ch<<" is an uppercase consonant."<<endl;}
            
         }
    // If it's not a letter
       else 
	   {cout << "Invalid input. Please enter an alphabet." << endl;
        }
    
    return 0;
      
  }
      
