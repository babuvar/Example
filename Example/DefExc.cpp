#include<fstream>
#include<string>
void DefExc(){
double Net[10][1000], tmp, sum, Final[10]={0}, EffTax;
string st;
ifstream fin;
int count=-1, code;

//fin.open("Bill.log");
//fin.open("GroceryBills_log.txt");
//fin.open("HotelBills_log.txt");
fin.open("VarNilBas_FoodBills.txt");
while(!fin.eof()){
fin>>st;
if(st=="@#$"){
count++;
fin>>tmp; Net[1][count]=-1*tmp;
fin>>tmp; Net[2][count]=-1*tmp;
fin>>tmp; Net[3][count]=-1*tmp;
fin>>tmp; Net[4][count]=-1*tmp;
fin>>code;
fin>>EffTax;
Net[1][count]*=(1+(EffTax/100)); Net[2][count]*=(1+(EffTax/100));
Net[3][count]*=(1+(EffTax/100)); Net[4][count]*=(1+(EffTax/100));

sum=-1*(Net[1][count]+Net[2][count]+Net[3][count]+Net[4][count]); 
Net[code][count]+=sum;
//cout<<Net[1][count]<<"\t"<<Net[2][count]<<"\t"<<Net[3][count]<<"\t"<<Net[4][count]<<endl;
}//if 

}//while
fin.close();

for(int i=0;i<=count;i++){
Final[1]+=Net[1][i];
Final[2]+=Net[2][i];
Final[3]+=Net[3][i];
Final[4]+=Net[4][i];
}
cout<<"--------------------"<<endl;
cout<<"Net Deficit/Surplus"<<endl;
cout<<"--------------------"<<endl;
cout<<"Basith : "<<Final[1]<<endl;
cout<<"Varghese : "<<Final[2]<<endl;
cout<<"Prasanth : "<<Final[3]<<endl;
cout<<"Niladri : "<<Final[4]<<endl;
cout<<"--------------------"<<endl;
}











