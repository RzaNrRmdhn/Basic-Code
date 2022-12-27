// #include <iostream>
// using namespace std;

// int main(){
//     int m = 10;
//     int *p = &m; 


//     cout<< p <<"\n";
//     cout<< &p <<"\n";
//     cout<< &m;


// }
// #include <iostream>
// using namespace std;

// int main ()
// {
//   int firstvalue = 5, secondvalue = 15;
//   int * p1, * p2;

//   p1 = &firstvalue;  // p1 = address of firstvalue
//   p2 = &secondvalue; // p2 = address of secondvalue
//   *p1 = 10;          // value pointed to by p1 = 10
//   *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
//   p1 = p2;           // p1 = p2 (value of pointer is copied)
//   *p1 = 20;          // value pointed to by p1 = 20
  

//   cout<< *p2 <<"\n";
//   cout << "firstvalue is " << firstvalue << '\n';
//   cout << "secondvalue is " << secondvalue << '\n';
//   return 0;
// }


// #include <iostream>

// using namespace std;
// int product(int a, int b){
//     return a*b;
// }
// int add(int a, int b){
//     return a+b;
// }
// int sub(int a, int b){
//     return a-b;
// }

// int callFunc(int (*Fptr)(int, int),int x,int y){
//     return (*Fptr)(x,y);
// }
// void tukar(int *a, int *b){
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }
// int main() {
//     int x=10, y=20;
//     int *px,  *py;
//     px = &x;
//     py = &y;
    
//     *px = 15;
    
    
    
    // cout<<px<<" "<<&x<<" "<<py<<" "<<&y;
    // cout<<z;
    
    
//     int **ptr;
//     ptr = &px; // ???
    
//     int z = *py***ptr**px;
    
    // cout<<&px<<" "<<**ptr<<" "<<*px<<" "<<x;
    // cout<<endl<<z;
    
    //Pointer ke Array
//     int A[] = {3,1,6,9,2};
//     int B[] = {55,64,67,92,72};
    
//     int C[2][3] = {1,2,3,4,5,6};
//     int (*ptrC)[3] = C;
    
    // cout<<A<<" "<<&A[0];
//     int *ptrA;
//     ptrA = A;
    // for (int i=0; i<5; i++)
    //     cout<<*(ptrA+i)<<" "<<A[i]<<" "<<ptrA+i<<" "<<&A[i]<<endl;
    
    // int *arrPtr[] = {A,B};
    
    // for (int i=0;i<2;i++)
    //     for (int j=0;j<3;j++)
    //         cout<<*(*(ptrC+i)+j)<<" ";
            
    //Pointer ke Fungsi
//     int (*Fptr[]) (int, int)={product,add,sub};
    // Fptr = sub;
    // for (int i=0;i<3;i++)
    //     cout<< (*Fptr[i])(3,4)<<endl;
//     for (int i=0;i<3;i++)
//         cout<<callFunc(*Fptr[i],5,4)<<endl;
        
    //Keyword new dan delete
    
//     int *k;
//     k = new int;
//     *k = 50;
//     cout<<k<<" "<<*k<<endl;
//     delete k;
//     cout<<k<<" "<<*k<<endl;
//     k = NULL;
//     int c=5, d=7;
//     tukar(&c, &d);
//     cout<<c<<" "<<d;
    
//     return 0;
// }

#include<stdio.h>

#include<conio.h>

#define MAKS 20

void pemasukan_data (float x[], int *pjumlah);

void pengurutan_data (float x[], int jumlah);

void penampilan_data (float x[], int jumlah);

main()

{

float data[MAKS];

int jum_data;

pemasukan_data(data, &jum_data);

// pengurutan_data(data, jum_data);

penampilan_data(data, jum_data);

}

void pemasukan_data(float x[], int *pjumlah)

{

int i, jum;

printf("jumlah data: ");

scanf("%d", &jum);

for(i=0; i<jum; i++)

{

printf("data ke-%d: ", i+1);

scanf("%f", &x[i]);

}

*pjumlah = jum;

}

// void pengurutan_data(float x[], int jumlah)

// {

// int i, j;

// float smtr;

// for(i=0; i<jumlah-1; i++)

// for(j=i+1; j<jumlah; j++)

// {

// smtr = x[i];

// x[i] = x[j];

// x[j] = smtr;

// }

// }

void penampilan_data(float x[], int jumlah)

{

int i;

puts("\n data setelah diurutkan : \n");

for(i=0; i<jumlah; i++)

printf("data ke-%d, %g\n", i+1, x[i]);

getch ();

}