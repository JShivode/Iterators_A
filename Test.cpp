#include "doctest.h"
#include "sources/MagicalContainer.hpp"
#include <vector>
using namespace ariel;

TEST_CASE("MagicalContainer") {
    SUBCASE("Check adding and removing elements") {
        MagicalContainer container;

        container.addElement(5);
        CHECK_EQ(container.size(), 1);
        CHECK_EQ(container.size(), 1);
        container.addElement(2);
        CHECK_EQ(container.size(), 2);
        CHECK_EQ(container.size(), 2);
        container.addElement(8);
        CHECK_EQ(container.size(), 3);
        CHECK_EQ(container.size(), 3);

        container.removeElement(2);
        CHECK_EQ(container.size(), 2);
        CHECK_EQ(container.size(), 2);

        container.addElement(5);
         CHECK_EQ(container.size(), 3);
         CHECK_EQ(container.size(), 3);
    }

    SUBCASE("Check size") {
        MagicalContainer container;

        CHECK_EQ(container.size(), 0);

        container.addElement(1);
        container.addElement(2);
        CHECK_EQ(container.size(), 2);
        CHECK_EQ(container.size(), 2);

        container.removeElement(2);
        CHECK_EQ(container.size(), 1);
        CHECK_EQ(container.size(), 1);

        container.addElement(3);
        container.addElement(4);
        CHECK_EQ(container.size(), 3);
        CHECK_EQ(container.size(), 3);
    }

     SUBCASE("Testing prime numbers"){
        MagicalContainer container;
        CHECK(container.isPrime(2));
        CHECK(container.isPrime(1));
        CHECK(container.isPrime(7));
        CHECK(container.isPrime(9));


     }




    
}
 







/*TEST(MagicalContainerTest, ElementsInAscendingOrder) {
    MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);

    MagicalContainer::AscendingIterator ascIter(container);
    std::vector<int> expectedValues = {2, 3, 9, 17, 25};

    int i = 0;
    for (auto it = ascIter.begin(); it != ascIter.end(); ++it) {
        EXPECT_EQ(*it, expectedValues[i]);
        ++i;
    }
}*/


