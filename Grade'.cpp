/*Comment: Write a C++ program to enter your information like:
           1. Name
           2. Age
           3. SSN
           4. Address
           5. Grades (Grade1,Grade2,Grade3,Grade4,Grade5)
           6. Income
           
           Find the average to decide:
                pass
                fail
*/
//Header

        #include<iostream>
       using namespace std;
//Global Variables

//Function Declaration

//Main Function
       
       int main()
       {
//Local Variables
        string full_name,address,SSN;
        short age;
        float grade1,grade2,grade3,grade4,grade5,final_grade,income;
//Code

      cout<<"\n \t\t Enter your Name: ";
      getline(cin,full_name);
      
      cout<<"\n \t\t Enter your Age: ";
      cin>>age;
      
      cout<<"\n \t\t Enter your SSN: ";
      cin>>SSN;
      
      cin.ignore();
      
      cout<<"\n \t\t Enter your Address: ";
      getline(cin,address);
      
      cout<<"\n \t\t Enter your Grades: ";
      cin>>grade1>>grade2>>grade3>>grade4>>grade5;
      
      cout<<"\n \t\t Enter your Income: ";
      cin>>income;
      
      final_grade=(grade1+grade2+grade3+grade4+grade5)/5;
      
      if (final_grade>69)
         {
           cout<<"\n \t\t PASS";          
                       }
      else 
         {
           cout<<"\n \t\t FAIL";            
                       }
      cout<<"\n \t\t Your Name is: "<<full_name;
      cout<<"\n \t\t Your Age is: "<<age;
      cout<<"\n \t\t Your SSN is: "<<SSN;
      cout<<"\n \t\t Your Address is: "<<address;
      cout<<"\n \t\t Your Income is: "<<income;
      cout<<"\n \t\t Your Final Grade is: "<<final_grade<<endl;
      
      
      system ("pause");
      return 0;
}
