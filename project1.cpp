#include<iostream>
#include<string>
#include <iomanip> 
using namespace std;
int main(){
//PROJECT-01: CGPA Calculator

        int n;
        float sum1 = 0; 
        int sum2 = 0;
        float wg_point = 0;
        cout<<"CGPA Calculator: "<<endl<<"How to Use this:"<<endl<<"1.Step: Enter Size of Subject\n2.Step: Enter Your Subjects Name,Grade,Grade Points and Credit Point\nNow Our Program Will Calculate Your CGPA \"[NOTE: Don't write any space word]\"Let's Begin Our Calculator\n";
        cout<<"\nEnter No of Subject: ";
        cin>>n;
            string s_names[n];
            char g_names[n];
            float g_points[n];
            int c_points[n];
            for(int i=0; i<n; i++){
                cout<<"Subject "<<i+1<<": ";
                cin>>s_names[i];
                cout<<"Grade "<<i+1<<": ";
                cin>>g_names[i];
                cout<<"Grade Points "<<i+1<<": ";
                cin>>g_points[i];
                cout<<"Credit Points "<<i+1<<": ";
                cin>>c_points[i];
                cout<<"\n";
            }
            cout<<"S.No: \t Subject Name\t    Grade \t\tGrade Point \tCredit Point";
            for(int i=0; i<n; i++){
                cout<<endl<<i+1<<"\t\t"<<s_names[i] <<"\t\t" <<   g_names[i]  <<"\t\t" <<   g_points[i] <<"\t\t"<<c_points[i]<<endl;
            wg_point = g_points[i] * c_points[i];
                sum1 += wg_point;
                sum2 += c_points[i];
            
            }
            float TotalCGPA = sum1 / sum2 ;
            if(TotalCGPA>5.00){
                cout<<"Tum Pass Ho Kosis Karte Raho \"Jake Padho Warnah Next Bar Fail Ho Jaoge!!!\""<<endl<<"Your CGPA: "<<fixed<<setprecision(2)<<TotalCGPA<<endl<<endl<<"Thank You \3";
            }
            else if(TotalCGPA>9.00){
                cout<<"Tum ne Accha Score Kiya Hai \3\" Jitna Man Jaye Utnaah Padho aage Aur Bbhi La Sakte Ho\""<<endl<<"Your CGPA: "<<fixed<<setprecision(2)<<TotalCGPA<<endl<<endl<<"Thank You \3";
            }
            else if(TotalCGPA>12.00){
                cout<<"Tum ne Bahut Accha Score Kiya Hai \3\" Thume Padhne ka Darkar nahi Jake Gmae Khelo\""<<endl<<"Your CGPA: "<<fixed<<setprecision(2)<<TotalCGPA<<endl<<endl<<"Thank You \3";
            }
            else{
                cout<<"Tum ne Kharab Score Kiya hai \3\" Tu Fail Ho Gya jake Padho Kuch aaram Bhi mat karo!!\""<<endl<<"Your CGPA: "<<fixed<<setprecision(2)<<TotalCGPA<<endl<<endl<<"Thank You \3";
            }
        return 0;
    }