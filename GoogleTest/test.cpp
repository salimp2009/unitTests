#include "../MathLibrary/src/LibraryCode.hpp"
#include <gtest/gtest.h>

TEST(TestSuiteSample, TestSample) {

  int s = sum(2, 4);
  ASSERT_EQ(6, s);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
