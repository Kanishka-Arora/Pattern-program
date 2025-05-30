#include <iostream>
using namespace std;
int main() {
   cout<<"---------------------------------------------"<<endl;
   cout<<"---------------WELCOME-----------------------"<<endl;
   while(true){
   int choice;
   cout<<"---------------------------------------------"<<endl;
   cout<<" 1. square of '*'"<<endl;
   cout<<" 2. left aligned increasing  triangle of '*'" <<endl;
   cout<<" 3. left aligned decreasing  triangle of '*'" <<endl;
   cout<<" 4. right aligned increasing  triangle of '*'"<<endl;
   cout<<" 5. right aligned decreasing  triangle of '*'"<<endl;
   cout<<" 6. diamond shape '*'                        "<<endl;
   cout<<" 7. left aligned increasing number triangle"  <<endl;
   cout<<" 8. repeated row numbers print same number in each row increasing per row                              "<<endl;
   cout<<" 9. reverse number triangle                  "<<endl;
   cout<<" 10. right aligned number triangle           "<<endl;
   cout<<" 11. continuous number triangle number continuously increasing row by row                            "<<endl;
   cout<<" 12. pyramid pattern                          "<<endl;
   cout<<" 13. inverted pyramid pattern                 "<<endl;
   cout<<" 14. increasing alphabet triangle             "<<endl;
   cout<<" 15. repeating alphabet row wise triangle     "<<endl;
   cout<<" 16. decreasing alphabet triangle             "<<endl;  
   cout<<" 17. continuous increasing alphabet triangle  "<<endl;
   cout<<" 18. right aligned alphabet triangle          "<<endl;
   cout<<" 19. alphabet pyramid                         "<<endl;
   cout<<"exit                                          "<<endl;
   cout<<"----------------------------------------------"<<endl;
   cout<<"enter your choice";
   cin>>choice;
   cout<<"----------------------------------------------"<<endl;
   
            if(choice == 1){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
            {  cout<<"*";
            } 
            cout<<endl;
            }
            }
  
            if(choice == 2){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++)
            {  cout<<"*";
            } 
            cout<<endl;
            }
            } 
       
            if(choice == 3){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for(int i=n; i>=1; i--){
            for(int j=1; j<=i; j++)
            {  cout<<"*";
            } 
            cout<<endl;
            }
            } 
  
            if(choice == 4){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for(int i=1; i<=n; i++){
            for (int k=1; k<=n-i; k++) {
            cout << " ";
            }
            for(int j=1; j<=i; j++)
            {  
            cout<<"*";
            } 
            cout<<endl;
            }
            } 
  
            if(choice == 5){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for(int i=1; i<=n; i++){
            for (int k=1; k<=i; k++) {
            cout << " ";
            }
            for(int j=1; j<=n-i; j++)
            {  
            cout<<"*";
            } 
            cout<<endl;
            }
            } 
  
            if(choice == 6){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for (int i=1; i<=n; i++) {
            for (int j=1; j<=n-i; j++) {
            cout << " ";
            }
            for (int k=1; k<=2*i-1; k++) {
            cout << "*";
            }
            cout <<endl;
            }
            }
   
            if(choice == 7){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++)
            {  cout<<j;
            } 
            cout<<endl;
            }
            }
  
            if(choice == 8){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++)
            {  cout<<i;
            } 
            cout<<endl;
            }
            }  
   
            if(choice == 9){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for(int i=n; i>=1; i--){
            for(int j=1; j<=i; j++)
            {  cout<<j;
            } 
            cout<<endl;
            }
            }  
  
            if(choice == 10){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for (int i=1; i<=n; i++) {
            for (int j=1; j<=n-i; j++) {
            cout << " ";
            }
            for (int k=1; k<=i; k++) {
            cout << k;
            }
            cout <<endl;
            }
            }
  
            if(choice == 11){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            int num=1;
            for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++)
            {  cout<<num;
            num++;
            } 
            cout<<endl;
            }
            }
  
            if(choice == 12){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for (int i=1; i<=n; i++) {
            for (int j=1; j<=n-i; j++) {
            cout << " ";
            }
            for (int k=1; k<=2*i-1; k++) {
            cout << "*";
            }
            cout <<endl;
            }
            }
   
            if(choice == 13){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for (int i=n; i>=1; i--) {
            for (int j=1; j<=n-i; j++) {
            cout << " ";
            }
            for (int k=1; k<=2*i-1; k++) {
            cout << "*";
            }
            cout <<endl;
            }
            }

            if(choice == 14){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for(int i=1; i<=n; i++){
            char ch='A';
            for(int j=1; j<=i; j++)
            {  cout<<ch;
            ch++;
            } 
            cout<<endl;
            }
            } 
   
           if(choice == 15){
            int n;
            cout << "Enter a number: ";
            cin >> n;
            char ch='A';
            for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++)
            {  cout<<ch; }
            ch++;
            cout<<endl;
            }
            } 
   
            if(choice == 16){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for(int i=n; i>=1; i--){
            char ch='A';
            for(int j=1; j<=i; j++)
            {  cout<<ch;
            ch++;
            } 
            cout<<endl;
            }
            } 
  
            if(choice == 17){
            int n;
            char ch='A';
            cout<<"Enter number of rows: ";
            cin>>n;
            for(int i=1; i<=n; i++) {
            for(int j=1; j<=i; j++) {
            cout<<ch<<" ";
            ch++;
            if (ch>'Z') {
            ch='A';
            }
            }
            cout<<endl;
            }
            }
  
            if(choice == 18){
            int n;
            char ch='A';
            cout<<"Enter number of rows: ";
            cin>>n;
            for(int i=1; i<=n; i++) {
            for (int space=1; space<=n-i; space++) {
            cout<<"  ";  
            }
            for(int j=1; j<=i; j++) {
            cout<<ch<<" ";
            ch++;
            if (ch>'Z') {
            ch='A';
            }
            }
            cout<<endl;
            }
            } 
 
            if(choice == 19){
            int n;
            cout << "Enter a number: ";
            cin >> n; 
            for (int i=1; i<=n; i++) {
            for (int j=1; j<=n-i; j++) {
            cout << " ";
            }
            char ch='A';
            for (int k=1; k<=2*i-1; k++) {
            cout <<ch;
            ch++;
            }
            cout <<endl;
            }
            } 
   
         
            if(choice == 20){
            cout << "Thank You for using this program";
            break;                        
            }
            }
            } 

   
