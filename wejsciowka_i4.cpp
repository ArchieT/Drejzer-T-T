#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
vector <string> suma;
string liczba;
suma.resize(101);
int k=0;
while(1)
    {
    cin>>liczba;
    suma[k]=liczba;
    k++;
    if (liczba=="0"){break;}
    }
for(k;k<101;k++)
    {
    suma[k]="0";
    }
liczba="0";
liczba.resize(103,'0');
for (int i=0;i<suma.size();i++)
    {
    int j=0;
    for(int ii=0;ii<suma[i].length();ii++)
        {
        int ha=0;
        switch(suma[i].at(suma[i].length()-1-ii))
            {
            case '0':
                {
                liczba[j]+=0;
                j++;
                break;
                }
            case '1':
                {
                liczba[j]+=1;
                while(liczba[ha]-'0'>9){liczba[ha]-=10;liczba[ha+1]+=1;ha++;}
                j++;
                break;
                }
            case '2':
                {
                liczba[j]+=2;
                while(liczba[ha]-'0'>9){liczba[ha]-=10;liczba[ha+1]+=1;ha++;}
                j++;
                break;
                }
            case '3':
                {
                liczba[j]+=3;
                while(liczba[ha]-'0'>9){liczba[ha]-=10;liczba[ha+1]+=1;ha++;}
                j++;
                break;
                }
            case '4':
                {
                liczba[j]+=4;
                while(liczba[ha]-'0'>9){liczba[ha]-=10;liczba[ha+1]+=1;ha++;}
                j++;
                break;
                }
            case '5':
                {
                liczba[j]+=5;
                while(liczba[ha]-'0'>9){liczba[ha]-=10;liczba[ha+1]+=1;ha++;}
                j++;
                break;
                }
            case '6':
                {
                liczba[j]+=6;
                while(liczba[ha]-'0'>9){liczba[ha]-=10;liczba[ha+1]+=1;ha++;}
                j++;
                break;
                }
            case '7':
                {
                liczba[j]+=7;
                while(liczba[ha]-'0'>9){liczba[ha]-=10;liczba[ha+1]+=1;ha++;}
                j++;
                break;
                }
            case '8':
                {
                liczba[j]+=8;
                while(liczba[ha]-'0'>9){liczba[ha]-=10;liczba[ha+1]+=1;ha++;}
                j++;
                break;
                }
            case '9':
                {
                liczba[j]+=9;
                while(liczba[ha]-'0'>9){liczba[ha]-=10;liczba[ha+1]+=1;ha++;}
                j++;
                break;
                }
            default :break;
            }
        }
    }
bool jusz=0;
for(int i=0;i<liczba.length();i++)
    {
    if(liczba[liczba.length()-1-i]=='0' && !jusz){continue;}
    jusz=1;
    cout<<(int)(liczba[liczba.length()-1-i]-'0');
    }
cout<<endl<<liczba<<endl<<(int)'#'<<endl;
return 0;
}
