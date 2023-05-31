#ifndef MAGICAL_CONTAINER_H
#define MAGICAL_CONTAINER_H
#include <vector>
#include <cmath>
#include <string>

namespace ariel{


class MagicalContainer { // The "main class"
private:
    std::vector<int> my_elements;

public: // Container functions:
    int get(int index);
    void addElement(int); // add an element to the container
    void removeElement(int); // remove an element from the container
    int size() const; // getSize()
    static bool isPrime(int num);

 ////////// AscendingIterator class //////////
    class AscendingIterator {
    private:        
        int index;
        MagicalContainer& container;

    public:
        AscendingIterator(MagicalContainer& ); //ctor

        // Dereference operator
        std::vector<int>::value_type operator*() const;

        AscendingIterator& operator++(); // Prefix
        bool operator==(const AscendingIterator& ) const; // Equality comparison 
        bool operator!=(const AscendingIterator& ) const;

        AscendingIterator begin();
        AscendingIterator end();
    };

    ////////// SideCrossIterator class //////////
    class SideCrossIterator{
    private:
        MagicalContainer& container;
        int index;        
        
    public:
        SideCrossIterator(MagicalContainer& ); // ctor
        std::vector<int>::value_type operator*() const;
        SideCrossIterator& operator++();
        bool operator==(const SideCrossIterator& ) const;
        bool operator!=(const SideCrossIterator& ) const;
        bool operator<=(const SideCrossIterator& ) const;
        SideCrossIterator begin();
        SideCrossIterator end();
        int idx(){return index;}
    };

    ////////// PrimeIterator class //////////
    class PrimeIterator {
    private:
        MagicalContainer& container;
        int index;

    public:
        PrimeIterator(MagicalContainer& ); // ctor

        std::vector<int>::value_type operator*() const;
        PrimeIterator& operator++();
        bool operator==(const PrimeIterator& ) const;
        bool operator!=(const PrimeIterator& ) const;
        PrimeIterator begin();
        PrimeIterator end();
    };     
};       

#endif
};