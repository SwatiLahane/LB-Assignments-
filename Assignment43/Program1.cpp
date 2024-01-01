
#include<iostream>
using namespace std;

/* 1.SearchLast() - search last occurance of numbe r
   2.EvvenCount()  - Count of even eleemts
   3.OddCount() - Count of odd element
   4.SumAll() - sum of all elements

*/

class Array
{
    protected:
         int *Arr;
         int size;

    public:
          Array(int value = 10 )
          {
              cout<<"Inside Constructor\n";

              this->size = value;
              this->Arr = new int[size];
            
          }

          Array(Array &ref)
          {
              
              cout<<"Inside copy Constructor\n";

              this->size = ref.size;
              this->Arr = new int[this->size];

              for(int i = 0; i < size; i++)
              {
                  this->Arr[i] = ref.Arr[i];
              }
          } 

              
        ~Array()
        {
              cout<<"Inside Destructor\n";

              delete []Arr;
        } 

        inline void Accept();
        inline void Display();

};

void Array::Accept()
{
    cout<<"Please enter the values\n";

    for(int i = 0; i < this->size; i++)
    {
        cin>>Arr[i];
    }
    
}

void Array::Display()
{
    cout<<"Elements are \n";
    
    for(int i =0 ; i < this->size; i++)
    {
        cout<<Arr[i]<<" ";

    }
    cout<<"\n";
}

class ArrSearch  : public Array
{
        
        public:
           ArrSearch(int no =10) :Array(no)
           {}

           int Frequency(int);
           int SearchFirst(int);
           int SearchLast(int);
           int EvenCount();
           int OddCount();
           int SumAll();

};

int ArrSearch::SearchFirst(int value)
{
     int i = 0;
     
     for(i = 0; i < size; i++)
     {
         if(Arr[i] == value)
         {
             break;
         }
     }

if(i == size)
{
    return -1;
}

else  
{
    return i + 1; 
}

}

int ArrSearch::Frequency(int value)
{
    int icnt = 0;

    for(int i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            icnt++;
        }
        
    }
    return icnt;
}

int ArrSearch::SearchLast(int value)
{
     int No = -1;
     int iCnt = 1;
     int i = 0;
     
      for(i = 0; i < size; i++)
     {
         if(Arr[i] == value)
         {
            No = iCnt;
         }
         iCnt++;
     }
       
    return No;   
}

//Even count
int ArrSearch::EvenCount()
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
          iCount++;
        }
      
    } 
     return iCount;
}


//Odd count
int ArrSearch::OddCount()
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
          iCount++;
        }
      
    } 
     return iCount;
}

//Sum of all the eleemnts 
int ArrSearch::SumAll()
{
    int iCnt = 0;
    int Sum = 0;

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        if(Arr[iCnt])
        Sum = Sum + Arr[iCnt];
      
    } 
    return Sum;
}


int main()
{
    cout<<"Inside Main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iret = sobj1.Frequency(11);
    
    cout<<"Frequency is "<<iret<<"\n";


    iret = sobj1.SearchFirst(11);

    cout<<"First Occurance is :"<<iret<<"\n";

     iret = sobj1.SearchLast(10);
     if(iret == -1)
     {
         cout<<"-1\n";
     }
     else
     {
         cout<<"Last Occurance is :"<<iret<<endl;
     }
     
     iret = sobj1.EvenCount();
     cout<<"Even count is :"<<iret<<endl;


      iret = sobj1.OddCount();
     cout<<"Odd count is :"<<iret<<endl;
      
      iret = sobj1.SumAll();
     cout<<"Sum is :"<<iret<<endl;
      

    return 0;
}