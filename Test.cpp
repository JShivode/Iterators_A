#include "doctest.h"
#include "sources/MagicalContainer.hpp"
using namespace ariel;

TEST_CASE("Testing MagicalContainer") {
    SUBCASE("Check addElement and removeElement") {
        MagicalContainer container;

        container.addElement(5);
        CHECK_EQ(container.size(), 1);
         CHECK_EQ(container.size(), 1);
          CHECK_EQ(container.size(), 1);
           CHECK_EQ(container.size(), 1);
            CHECK_EQ(container.size(), 1);
             CHECK_EQ(container.size(), 1);
              CHECK_EQ(container.size(), 1);
               CHECK_EQ(container.size(), 1);
                CHECK_EQ(container.size(), 1);
                 CHECK_EQ(container.size(), 1);
                  CHECK_EQ(container.size(), 1);
                   CHECK_EQ(container.size(), 1);
                    CHECK_EQ(container.size(), 1);
                     CHECK_EQ(container.size(), 1);
                      CHECK_EQ(container.size(), 1);
                       CHECK_EQ(container.size(), 1);
                        CHECK_EQ(container.size(), 1);
                         CHECK_EQ(container.size(), 1);
                          CHECK_EQ(container.size(), 1);
                           CHECK_EQ(container.size(), 1);


        container.addElement(2);
        container.addElement(8);
        CHECK_EQ(container.size(), 3);

        container.removeElement(2);
        CHECK_EQ(container.size(), 2);
    }

    SUBCASE("Check size") {
        MagicalContainer container;

        CHECK_EQ(container.size(), 0);

        container.addElement(1);
        container.addElement(2);
        CHECK_EQ(container.size(), 2);

        container.removeElement(2);
        CHECK_EQ(container.size(), 1);

        container.addElement(3);
        container.addElement(4);
        CHECK_EQ(container.size(), 3);
    }

    
}
