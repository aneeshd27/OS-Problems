/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int page_size,page_table_size,num_pages,page_number,page_offset,logical_address,physical_address;
    cout<<"Enter the page size: ";
    cin>>page_size;
    cout<<"Enter the page table size: ";
    cin>>page_table_size;
    
    num_pages=page_table_size/page_size;
    int i;
    int page_table[num_pages];
    for(i=0;i<num_pages;i++)
    {
        cout << "Enter the frame number for page " << i << ": ";
        cin >> page_table[i];

    }
    cout<<"Enter the logical address: ";
    cin>>logical_address;
    
    page_number=logical_address/page_size;
    page_offset=logical_address%page_size;
    
    if(page_number>=num_pages)
    {
        cout<<"Page number is out of range"<<endl;
        return 0;
    }
    physical_address=(page_table[page_number]*page_size)+page_offset;
    cout<<"Physical address: "<<physical_address<<endl;
    return 0;
}
