
#include <string>
using namespace std;

int main()
{
	string spclBit ;
    string inpBit;
	
	getline( cin >> ws , spclBit );
	getline( cin >> ws , inpBit );
	
	int size = inpBit.length() ;
	int countBit = 0 ;
	
	for( int i = 0 ; i<size ; i++ )
	{
		if( inpBit[i] == 1 )
			countBit++;
		if( countBit == 5 )
		{
			countBit = 0 ;
			inpBit.insert(i,'0') ;
			size++ ;
		}
	}
	
	cout<<spclBit<<" "<<inpBit<<" "<<spclBit;	
}


