#include <gtest/gtest.h>

#include <otk/common.hpp>
using namespace otk;

TEST(Common,Basic) {
  // Generic assumptions
  EXPECT_EQ( 4, sizeof(int)  );
  EXPECT_EQ( 8, sizeof(long)  );
  EXPECT_EQ( 4, sizeof(float)  );
  EXPECT_EQ( 8, sizeof(double)  );
}
