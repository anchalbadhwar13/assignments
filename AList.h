#ifndef ALIST_H
#define ALIST_H

#include <iostream>
using namespace std;

template <typename Object>
class AList 
{
  public:
    AList()
      {  
         theCapacity = 12 ;
         objects = new Object[ theCapacity ]; 
         theSize = 0 ;
         left = 0 ; // array index of location just before the left-most list element 
         right = 1 ; // array index just past the right-most list element
      }
      
    ~AList( )
      { delete [ ] objects; }

    bool empty( ) const  { return size( ) == 0; }
    int size( ) const { return theSize; }
    void clear( ){
        // remove all list contents 
        // 
        // Implement this...
     theSize = 0;
    left = 0;
    right = 1 ;
      delete [] objects;
    }

    // Operations 

    void addLeft( const Object x )// Insert a new object at the left end 
    {
        objects[left] = x;
        left = (left-1) % theCapacity;
        theSize++;
  
  
    }

    void addRight( const Object x )// Insert a new object at the right end
    {
        theSize ++ ;
	      objects[right] = x ;
        right = (right+1) % theCapacity;
    }

    Object removeRight( )// Remove and return the object at the right end
    {
        right = (right-1) % theCapacity;
        theSize--;
    }

    Object removeLeft( )// Remove and return the object at the left end
    {
        left = (left+1) % theCapacity;
        theSize --;
    }

    void display() const // print out the contents of the deque
    {
       // Implement this.
       for (int i = left+1; i < right; ++i) {
        cout << objects[i % theCapacity] << " ";
       }
    }

    void ddisplay() const // print out the contents of the objects 
    // array, and relevant variables, for debugging or verifying 
    // correctness. 
    {
        cout << "--OBJECTS--\n";
        for (int i = left+1; i < right; ++i) {
        cout << objects[i % theCapacity] << " ";
       }
       cout << "\nSize:: " << theSize;
       cout << "\nLeft:: " << left;
       cout << "\nRight:: " << right;
       cout << "\nCapacity:: " << theCapacity;

    }


  private:
    int theSize;
    int left;
    int right;
    int theCapacity;
    Object * objects;
};

#endif
