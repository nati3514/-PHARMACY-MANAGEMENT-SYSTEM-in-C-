#include <iostream>
#include <string>
#include<stdlib.h>
#include<cctype>
#include<iomanip>                                                            /*  Group Members            ID
                                                                             1, Natnael Agenagnew .....1102601
                                                                             2, Abdelkerim Ahmed.......1102532
                                                                             3, Haregewoin Ababu......1103465
                                                                             4, Demeke Tesfaw..... .. 1103308
                                                                             5, Biruk tadesse........ 1010852
                                                                             6, Haileyesus Ayanaw....1102458


                                                                                                                        */
using namespace std;
struct DRUG
{
string name;
string type;
int amount;
float price;
int manudd;
int manumm;
int manuyy;
int expdd;
int expmm;
int expyy;
DRUG *nx;
}
*drug_head = NULL;
struct CUSTOMER
{
string name;
string dname;
int amount;
float price;
int dd;
int mm;
int yy;
CUSTOMER *nx;
}
*customer_head = NULL;
void add();
void sell();
void displayDL();
void displayCL();
void displayDD();
void displayCD();
void searchD();
void searchC();
void swap(DRUG *c);
void sortna();
void sortnz();
void sortpl();
void sortph();
void deleteA();
void deleteA(int n);
void menu();
void menu1();
void menu2();
void menu3();
void menu4();
void menu5();
void menu6();

int main()
{
system("COLOR 5");
cout<<"                                     "<<"*****************************************"<<endl;
cout<<"                                     "<<"* _____________________________________ *"<<endl;
cout<<"                                     "<<"*|  W                               E  |*"<<endl;
cout<<"                                     "<<"*|                                     |*"<<endl;
cout<<"                                     "<<"*|       E                      M      |*"<<endl;
cout<<"                                     "<<"*|                                     |*"<<endl;
cout<<"                                     "<<"*|            L            O           |*"<<endl;
cout<<"                                     "<<"*|                   C                 |*"<<endl;
cout<<"                                     "<<"*|                                     |*"<<endl;
cout<<"                                     "<<"*|                  T O                |*"<<endl;
cout<<"                                     "<<"*|                                     |*"<<endl;
cout<<"                                     "<<"*|   CURE PHARMACY MANAGEMENT SYSTEM   |*"<<endl;
cout<<"                                     "<<"*|            FOR SELLERS              |*"<<endl;
cout<<"                                     "<<"*|_____________________________________|*"<<endl;
cout<<"                                     "<<"*                                       *"<<endl;
cout<<"                                     "<<"*****************************************"<<endl;
system("PAUSE");
system("CLS");
system("COLOR A");
menu();
return 0;
}
void add()
{
DRUG *New = new DRUG;
cout << "                                                Drug Name : ";
cin >> New->name;
cout << "                                                Drug Type : ";
cin >> New->type;
da:
cout << "                                                Drug Amount : ";
cin >> New->amount;
if (New->amount < 0)
{
    cout << "                                                Amount is > 0\n";
    goto da;
}
dp:
cout << "                                                Drug Price: ";
cin >> New->price;
if (New->price < 0)
{
     cout << "                                                Price is > 0\n";
     goto dp;
}
cout << "                                                ManufactureDate\n";
md:
cout << "                                                  Day : ";
cin >> New->manudd;
if (New->manudd > 0 && New->manudd < 32)
{
}
else
{
      cout << "                                                Day is 1-31\n";
      goto md;
}
mm:
cout << "                                                  Month : ";
cin >> New->manumm;
if (New->manumm > 0 && New->manumm < 13)
{
}
else
{
      cout << "                                                Month is 1-12\n";
      goto mm;
}
my:
cout << "                                                  Year : ";
cin >> New->manuyy;
if (New->manuyy > 1998 && New->manuyy < 2051)
{
}
else
{
    cout << "                                                Year is 1999-2050\n";
    goto my;
}
cout << "                                                ExpireDate\n";
ed:
cout << "                                                  Day : ";
cin >> New->expdd;
if (New->expdd > 0 && New->expdd < 32)
{
}
else
{
cout << "                                                Day is 1-31\n";
goto ed;
}
em:
cout << "                                                  Month : ";
cin >> New->expmm;
if (New->expmm > 0 && New->expmm < 13)
{
}
else
{
cout << "                                                Month is 1-12\n";
goto em;
}
ey:
cout << "                                                  Year : ";
cin >> New->expyy;
if (New->expyy > New->manuyy && New->expyy < 2051)
{
}
else
{
cout << "                                                Year is "<<(New->manuyy+1)<<"-2050\n";
goto ey;
}
New->nx = NULL;
if (drug_head == NULL)
{
drug_head = New;
}
else
{
DRUG *temp = drug_head;
while (temp->nx!= NULL)
{
temp = temp->nx;
}
temp->nx = New;
}
cout<<"                                              Add successfully"<<endl;
cout<<"                                          Would you like add again"<<endl;
cout<<"                                                  YES/NO\n"<<"                                                  :";
string y;
cin>>y;
if(y=="YES"){
add();
}
}
void sell()
{
if (drug_head == NULL)
{
cout << "                                                Empty List\n";
cout << "                                          First you must be store the drug in \"Medicine Store\"\n";
return;
}
Dd:
int n;
cout << "                                                  No :";
cin >> n;
DRUG *t = drug_head;
int nn = 1;
while (t->nx != NULL)
{
nn++;
t = t->nx;
}
if (n > 0 && n <= nn)
{
}
else
{
cout << "                                          Incorrect order. Please try again\n";
goto Dd;
}
DRUG *temp1 = drug_head;
for (int j = 1; j < n; j++)
{
temp1 = temp1->nx;
}
CUSTOMER *New = new CUSTOMER;
cout << "                                                Customer Name : ";
cin >> New->name;
New->dname = temp1->name;
aa:
int amo;
cout << "                                                Drug Amount : ";
cin >> amo;
if (amo > 0)
{
}
else
{
cout << "                                                Amount is >0\n";
goto aa;
}
New->amount = amo;
if (amo<=temp1->amount)
{
}
else
{
cout << "                                          There is no enough Drug\n";
cout<<"                                                Amount : "<<temp1->amount << endl;
goto aa;
}
temp1->amount = (temp1->amount) - amo;
New->price = amo*temp1->price;

cout << "                                                Date\n";
ddd:
cout << "                                                  Day : ";
cin >> New->dd;
if (New->dd > 0 && New->dd < 32)
{
}
else
{
cout << "                                                Day : 1-31\n";
goto ddd;
}
mmm:
cout << "                                                  Month : ";
cin >> New->mm;
if (New->mm > 0 && New->mm < 13)
{
}
else
{
cout << "                                                Month : 1-12\n";
goto mmm;
}
yyy:
cout << "                                                  Year : ";
cin >> New->yy;
if (New->yy >= temp1->manuyy && New->yy < temp1->expyy)
{
}
else
{
cout << "                                                Year : " << temp1->manuyy << "-" << temp1->expyy << "\n";
goto yyy;
}
string l;
cout << "                                          price is " << New->price << "$ \"OK\" for confirm\n";
cout<<"                                                  >>>>>:";
cin >> l;
if (l!="OK")
{
return;
}
New->nx = NULL;
if (customer_head == NULL)
{
customer_head = New;
}
else
{
CUSTOMER *temp2 = customer_head;
while (temp2->nx != NULL)
{
temp2= temp2->nx;
}
temp2->nx = New;
}
if (temp1->amount == 0)
{
deleteA(n);
}
cout<<"                                              Sold successfully"<<endl;
cout<<"                                          Would you like sold again"<<endl;
cout<<"                                                  YES/NO\n"<<"                                                  :";
string y;
cin>>y;
if(y=="YES")
{
sell();
}
}
void displayDL()
{
if (drug_head == NULL)
{
cout << "                                                Empty List\n";
return;
}
int No = 1;
cout << "                                          No       NAME\n";
DRUG *temp = drug_head;
while (temp != NULL)
{
cout << "                                          " << No << "       " << temp->name<< endl;
No++;
temp = temp->nx;
}
}
void displayCL()
{
if (customer_head == NULL)
{
cout << "                                                Empty List\n";
return;
}
int No = 1;
cout << "                                          No       NAME\n";
CUSTOMER *temp = customer_head;
while (temp != NULL)
{
cout << "                                          " << No << "       " << temp->name<< endl;
No++;
temp = temp->nx;
}
}

void displayDD()
{
if (drug_head == NULL)
{
cout << "                                                Empty List\n";
return;
}
Dd:
int No;
cout << "                                                  No :";
cin >> No;
DRUG *temp1 = drug_head;
int n = 1;
while (temp1->nx != NULL)
{
n++;
temp1 = temp1->nx;
}
if (No > 0 && No <= n)
{
}
else
{
cout << "                                          Incorrect order. Please try again\n";
goto Dd;
}
DRUG *temp = drug_head;
for (int j = 1; j < No; j++)
{
temp= temp->nx;
}
cout << "                                                DrugName : " << temp->name << endl;
cout << "                                                DrugType : " << temp->type << endl;
cout << "                                                Amount : " << temp->amount << endl;
cout << "                                                Price : " << temp->price << "$" << endl;
cout << "                                                ManufactureDate : " << temp->manudd << "/" << temp->manumm << "/" << temp->manuyy << " G.C" << endl;
cout << "                                                ExpireDate : " << temp->expdd << "/" << temp->expmm << "/" << temp->expyy << " G.C" << endl;
}

void displayCD()
{
if (customer_head == NULL)
{
cout << "                                                Empty List\n";
return;
}
Cd:
int No;
cout << "                                                  No :";
cin >> No;
CUSTOMER *temp1 = customer_head;
int n = 1;
while (temp1->nx != NULL)
{
n++;
temp1 = temp1->nx;
}
if (No > 0 && No <= n)
{
}
else
{
cout << "                                          Incorrect order. Please try again\n";
goto Cd;
}
CUSTOMER *temp = customer_head;
for (int j = 1; j < No;j++)
{
temp = temp->nx;
}
cout << "                                                CustomerName : " << temp->name << endl;
cout << "                                                DrugName : " << temp->dname << endl;
cout << "                                                Amount :" << temp->amount << endl;
cout << "                                                Price :" << temp->price << "$" << endl;
cout << "                                                Date : " << temp->dd << "/" << temp->mm << "/" << temp->yy << " G.C" << endl;
}

void searchD()
{
if (drug_head == NULL)
{
cout << "                                                Empty List\n";
return;
}
string s;
cout << "                                                write the name\n                                                     :";
cin >> s;
int No = 1;
cout << "                                          No       NAME\n";
DRUG *temp = drug_head;
while (temp!= NULL)
{
if (temp->name == s)
{
cout << "                                          " << No << "       " << temp->name
<< endl;
}
No++;
temp = temp->nx;
}
}
void searchC()
{
if (customer_head == NULL)
{
cout << "                                                Empty List\n";
return;
}
string s;
cout << "                                                write the name\n                                                     :";
cin >> s;
int No = 1;
cout << "                                          No       NAME\n";
CUSTOMER *temp=customer_head;
while(temp != NULL)
{
if (temp->name == s)
{
cout << "                                          " << No << "       " << temp->name
<< endl;
}
No++;
temp = temp->nx;
}
}
void swap(DRUG *current)
{
DRUG *temp1 = drug_head;
while (temp1->nx != current)
{
temp1 = temp1->nx;
}
if (temp1 != drug_head)
{
DRUG *temp2 = drug_head;
while (temp2->nx != temp1)
{
temp2 = temp2->nx;
}
temp1->nx = current->nx;
temp2->nx = current;
current->nx = temp1;
}
else
{
drug_head->nx = current->nx;
current->nx = drug_head;
drug_head = current;
}
}
void sortna()
{
if (drug_head == NULL)
{
cout << "                                                Empty List\n";
return;
}
int n = 1;
DRUG *temp = drug_head;
while(temp->nx != NULL)
{
n++;
temp = temp->nx;
}
for (int k = n-1; k >=0; k--)
{
for (int i = 0; i < k; i++)
{
DRUG *current = drug_head;
for (int j = 0; j < i; j++)
{
current = current->nx;
}
if (current->name >  current->nx->name)
{
swap(current->nx);
}
}
}
}
void sortnz()
{
if (drug_head == NULL)
{
cout << "                                                Empty List\n";
return;
}
int n = 1;
DRUG *temp = drug_head;
for (temp; temp->nx != NULL; temp = temp->nx)
{
n++;
}
for (int k = n-1; k >=0; k--)
{
for (int i = 0; i < k; i++)
{
DRUG *current = drug_head;
for (int j = 0; j < i; j++)
{
current = current->nx;
}
if (current->name <  current->nx->name)
{
swap(current->nx);
}
}
}
}

void sortpl()
{
if (drug_head == NULL)
{
cout << "                                                Empty List\n";
return;
}
int n = 1;
DRUG *temp = drug_head;
for (temp; temp->nx != NULL; temp = temp->nx)
{
n++;
}
for (int k = n-1; k >= 0; k--)
{
for (int i = 0; i < k; i++)
{
DRUG *current = drug_head;
for (int j = 0; j < i; j++)
{
current = current->nx;
}
if (current->price >  current->nx->price)
{
swap(current->nx);
}
}
}
}

void sortph()
{
if (drug_head == NULL)
{
cout << "                                                Empty List\n";
return;
}
int n = 1;
DRUG *temp = drug_head;
for (temp; temp->nx != NULL; temp= temp->nx)
{
n++;
}
for (int k = n-1; k >=0; k--)
{
for (int i = 0; i < k; i++)
{
DRUG *current = drug_head;
for (int j = 0; j < i; j++)
{
current = current->nx;
}
if (current->price <  current->nx->price)
{
swap(current->nx);
}
}
}
}

void deleteA()
{
if (drug_head == NULL)
{
cout << "                                                Empty List\n";
return;
}
Dd:
int No;
cout << "                                                  No :";
cin >> No;
DRUG *temp1 = drug_head;
int n = 1;
while (temp1->nx != NULL)
{
n++;
temp1 = temp1->nx;
}
if (No > 0 && No <= n)
{
}
else
{
cout << "                                          Incorrect order. Please try again\n";
goto Dd;
}
DRUG *current = drug_head;
for (int j = 1; j < No; j++)
{
current = current->nx;
}
if (drug_head == current)
{
if (drug_head->nx != NULL)
{
cout<<"                                          Are you sure you want to delete this?"<<endl;
cout<<"                                                  YES/NO\n"<<"                                                  :";
string C;
cin>>C;
if(C=="YES")
{
}
else{
return;
}
drug_head = current->nx;
delete current;
}
else
{
cout<<"                                          Are you sure you want to delete this?"<<endl;
cout<<"                                                  YES/NO\n"<<"                                                  :";
string C;
cin>>C;
if(C=="YES")
{
}
else{
return;
}
drug_head = NULL;
delete current;
}
}
else
{
cout<<"                                          Are you sure you want to delete this?"<<endl;
cout<<"                                                  YES/NO\n"<<"                                                  :";
string C;
cin>>C;
if(C=="YES")
{
}
else{
return;
}
DRUG *temp3 = drug_head;
while (temp3->nx != current)
{
temp3 = temp3->nx;
}
temp3->nx = current->nx;
delete current;
}
cout<<"                                          Delete successfully"<<endl;
cout<<"                                       Would you like delete again"<<endl;
cout<<"                                          YES/NO\n"<<"                                          :";
string y;
cin>>y;
if(y=="YES")
{
deleteA();
}
}

void deleteA(int No)
{
if (drug_head == NULL)
{
return;
}
DRUG *current = drug_head;
for (int j = 1; j < No; j++)
{
current = current->nx;
}
if (drug_head == current)
{
if (drug_head->nx != NULL)
{
drug_head = current->nx;
delete current;
}
else
{
drug_head = NULL;
delete current;
}
}
else
{
DRUG *temp2 = drug_head;
while (temp2->nx != current)
{
temp2 = temp2->nx;
}
temp2->nx = current->nx;
delete current;
}
}

void menu()
{
int m;
cout << "                                          ---------------------------\n";
cout << "                                          |   1 Medicine Store       |\n";
cout << "                                          |   2 Customer-info       |\n";
cout << "                                          |   3 Exit                |\n";
cout << "                                          ---------------------------\n";
cout << "                                                >>>>>:";
cin >> m;
if (!m)
{
return;
}
switch (m)
{
case 1:
system("CLS");
system("COLOR B");
menu1();
break;
case 2:
system("CLS");
system("COLOR C");
displayCL();
menu3();
break;
case 3:
system("CLS");
break;
default:
system("CLS");
cout << "                                                Incorrect choice" << endl;
menu();
break;
}
}

void menu1()
{
int m;
cout << "                                          ---------------------------\n";
cout << "                                          |     1 Add                |\n";
cout << "                                          |     2 List               |\n";
cout << "                                          |     3 Search             |\n";
cout << "                                          |     4 sort               |\n";
cout << "                                          |     5 Back               |\n";
cout << "                                          |     6 Exit              |\n";
cout << "                                          ---------------------------\n";
cout << "                                                >>>>>:";
cin >> m;
if (!m)
{
return;
}
switch (m)
{
case 1:
system("CLS");
system("COLOR 6");
add();
system("CLS");
system("COLOR B");
menu1();
break;
case 2:
system("CLS");
system("COLOR D");
displayDL();
menu2();
break;
case 3:
system("CLS");
system("COLOR D");
searchD();
menu2();
break;
case 4:
    if(drug_head!=NULL){
       system("CLS");
       system("COLOR E");
       menu4();
    }
    else{
        cout<<"                                                Empty List\n";
        system("CLS");
        menu1();
    }
break;
case 5:
system("CLS");
system("COLOR A");
menu();
case 6:
system("CLS");
break;
default:
system("CLS");
cout << "                                                Incorrect choice" << endl;
menu1();
break;
}
}

void menu2()
{
int m;
cout << "                                          ---------------------------\n";
cout << "                                          |     1 Detail            |\n";
cout << "                                          |     2 Sell              |\n";
cout << "                                          |     3 Delete            |\n";
cout << "                                          |     4 Back              |\n";
cout << "                                          |     5 Exit              |\n";
cout << "                                          --------------------------\n";
cout << "                                                >>>>>:";
cin >> m;
if (!m)
{
return;
}
switch (m)
{
case 1:
displayDD();
system("PAUSE");
system("CLS");
displayDL();
menu2();
break;
case 2:
sell();
system("CLS");
displayDL();
menu2();
break;
case 3:
deleteA();
system("CLS");
displayDL();
menu2();
break;
case 4:
system("CLS");
system("COLOR B");
menu1();
case 5:
system("CLS");
break;
default:
system("CLS");
cout << "                                                Incorrect choice" << endl;
menu2();
break;
}
}

void menu3()
{
int m;
cout << "                                          ---------------------------\n";
cout << "                                          |     1 Detail            |\n";
cout << "                                          |     2 Search            |\n";
cout << "                                          |     3 List              |\n";
cout << "                                          |     4 Back              |\n";
cout << "                                          |     5 Exit              |\n";
cout << "                                          ---------------------------\n";
cout << "                                                >>>>>:";
cin >> m;
if (!m)
{
return;
}
switch (m)
{
case 1:
displayCD();
system("PAUSE");
system("CLS");
menu3();
break;
case 2:
system("CLS");
searchC();
menu3();
break;
case 3:
system("CLS");
displayCL();
menu3();
case 4:
system("CLS");
system("COLOR A");
menu();
break;
case 5:
system("CLS");
break;
default:
system("CLS");
cout << "                                                Incorrect choice                 " << endl;
menu3();
break;
}
}

void menu4()
{
int m;
cout << "                                          ---------------------------\n";
cout << "                                          |     1 By name           |\n";
cout << "                                          |     2 By price          |\n";
cout << "                                          |     3 Back              |\n";
cout << "                                          |     4 Exit              |\n";
cout << "                                          ---------------------------\n";
cout << "                                                >>>>>:";
cin >> m;
if (!m)
{
return;
}
switch (m)
{
case 1:
system("CLS");
system("COLOR 8");
menu5();
break;
case 2:
system("CLS");
system("COLOR 5");
menu6();
break;
case 3:
system("CLS");
system("COLOR B");
menu1();
break;
case 4:
system("CLS");
break;
default:
system("CLS");
cout << "                                                Incorrect choice                 " << endl;
menu4();
break;
}
}
void menu5()
{
int m;
cout << "                                          ---------------------------\n";
cout << "                                          |     1 A-Z               |\n";
cout << "                                          |     2 Z-A               |\n";
cout << "                                          |     3 Back              |\n";
cout << "                                          |     4 Exit              |\n";
cout << "                                          ---------------------------\n";
cout << "                                                >>>>>:";
cin >> m;
if (!m)
{
return;
}
switch (m)
{
case 1:
system("CLS");
system("COLOR B");
sortna();
menu1();
break;
case 2:
system("CLS");
system("COLOR B");
sortnz();
menu1();
break;
case 3:
system("CLS");
system("COLOR E");
menu4();
break;
case 4:
system("CLS");
break;
default:
system("CLS");
cout << "                                                Incorrect choice                 " << endl;
menu5();
break;
}
}
void menu6()
{
int m;
cout << "                                          ---------------------------\n";
cout << "                                          |     1 High-Low          |\n";
cout << "                                          |     2 Low-High          |\n";
cout << "                                          |     3 Back              |\n";
cout << "                                          |     4 Exit              |\n";
cout << "                                          ---------------------------\n";
cout << "                                                >>>>>:";
cin >> m;
if (!m)
{
return;
}
switch (m)
{
case 1:
system("CLS");
system("COLOR B");
sortph();
menu1();
break;
case 2:
system("CLS");
system("COLOR B");
sortpl();
menu1();
break;
case 3:
system("CLS");
system("COLOR E");
menu4();
break;
case 4:
system("CLS");
break;
default:
system("CLS");
cout << "                                                Incorrect choice                 " << endl;
menu6();
break;
}
}
